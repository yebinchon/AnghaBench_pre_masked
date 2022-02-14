
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int uint64_t ;
typedef unsigned int uint32_t ;
typedef int off_t ;
struct TYPE_3__ {unsigned int* pt_map; unsigned int pt_map_size; unsigned int* pt_popcounts; unsigned int pt_sparse_size; int pt_sparse_off; } ;
typedef TYPE_1__ kvm_t ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned int VAR_1 ;
 unsigned int FUNC_3 (unsigned int*,unsigned int,unsigned int) ;
 unsigned int VAR_2 ;

off_t
FUNC_4(kvm_t *VAR_3, uint64_t VAR_4, unsigned int VAR_5)
{
 uint64_t *VAR_6 = VAR_3->pt_map;
 uint64_t VAR_7 = VAR_4 / VAR_5;
 uint64_t VAR_8 = VAR_7 / FUNC_0(*VAR_6);
 uint64_t VAR_9 = VAR_7 / VAR_1;
 uint64_t VAR_10 = 1ULL << (VAR_7 % FUNC_0(*VAR_6));
 uint64_t VAR_11;
 uint32_t VAR_12;


 if (VAR_7 >= (VAR_3->pt_map_size * VAR_0) ||
     (VAR_6[VAR_8] & VAR_10) == 0)
  return (-1);







 if ((VAR_7 % VAR_1) < (VAR_1 / 2)) {
  VAR_12 = VAR_3->pt_popcounts[VAR_9] + FUNC_3(
      VAR_6 + VAR_9 * FUNC_2(*VAR_6),
      0, VAR_7 - VAR_9 * VAR_1);
 } else {




  uint64_t VAR_13 = VAR_8 * FUNC_0(*VAR_6);

  VAR_9++;
  VAR_11 = FUNC_1(VAR_9 * VAR_1,
      VAR_3->pt_map_size * FUNC_0(VAR_2));
  VAR_12 = VAR_3->pt_popcounts[VAR_9] - FUNC_3(
      VAR_6 + VAR_8,
      VAR_7 - VAR_13, VAR_11 - VAR_13);
 }





 if (VAR_12 >= (VAR_3->pt_sparse_size / VAR_5))
  return (-1);

 return (VAR_3->pt_sparse_off + (uint64_t)VAR_12 * VAR_5);
}
