
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vmem_size_t ;
typedef int vmem_addr_t ;
struct TYPE_4__ {int bt_size; int bt_start; } ;
typedef TYPE_1__ bt_t ;


 int FUNC_0 (TYPE_1__ const*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int,int,int) ;

__attribute__((used)) static int
FUNC_4(const bt_t *VAR_1, vmem_size_t VAR_2, vmem_size_t VAR_3,
    vmem_size_t VAR_4, vmem_size_t VAR_5, vmem_addr_t VAR_6,
    vmem_addr_t VAR_7, vmem_addr_t *VAR_8)
{
 vmem_addr_t VAR_9;
 vmem_addr_t VAR_10;

 FUNC_1(VAR_2 > 0);
 FUNC_1(VAR_1->bt_size >= VAR_2);






 VAR_9 = VAR_1->bt_start;
 if (VAR_9 < VAR_6) {
  VAR_9 = VAR_6;
 }
 VAR_10 = FUNC_0(VAR_1);
 if (VAR_10 > VAR_7)
  VAR_10 = VAR_7;
 if (VAR_9 > VAR_10)
  return (VAR_0);

 VAR_9 = FUNC_2(VAR_9 - VAR_4, VAR_3) + VAR_4;
 if (VAR_9 < VAR_1->bt_start)
  VAR_9 += VAR_3;
 if (FUNC_3(VAR_9, VAR_9 + VAR_2 - 1, VAR_5)) {
  FUNC_1(VAR_3 < VAR_5);
  VAR_9 = FUNC_2(VAR_9 - VAR_4, VAR_5) + VAR_4;
 }
 if (VAR_9 <= VAR_10 && VAR_10 - VAR_9 >= VAR_2 - 1) {
  FUNC_1((VAR_9 & (VAR_3 - 1)) == VAR_4);
  FUNC_1(!FUNC_3(VAR_9, VAR_9 + VAR_2 - 1, VAR_5));
  FUNC_1(VAR_6 <= VAR_9);
  FUNC_1(VAR_7 == 0 || VAR_9 + VAR_2 - 1 <= VAR_7);
  FUNC_1(VAR_1->bt_start <= VAR_9);
  FUNC_1(FUNC_0(VAR_1) - VAR_9 >= VAR_2 - 1);
  *VAR_8 = VAR_9;

  return (0);
 }
 return (VAR_0);
}
