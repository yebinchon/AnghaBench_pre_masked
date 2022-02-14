
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint64_t ;
struct TYPE_3__ {scalar_t__ nvp_type; int nvp_nitems; size_t nvp_datasize; void* nvp_data; } ;
typedef TYPE_1__ nvpair_t ;
typedef size_t int64_t ;
typedef int idx ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (unsigned char const*) ;
 size_t FUNC_3 (unsigned char const*) ;
 int FUNC_4 (int*) ;
 scalar_t__ FUNC_5 (size_t) ;

const unsigned char *
FUNC_6(bool VAR_2, nvpair_t *VAR_3,
    const unsigned char *VAR_4, size_t *VAR_5, const int *VAR_6, size_t VAR_7)
{
 int64_t VAR_8;
 size_t VAR_9;
 unsigned int VAR_10;
 int *VAR_11;

 FUNC_1(VAR_3->nvp_type == VAR_1);

 VAR_9 = sizeof(VAR_8) * VAR_3->nvp_nitems;
 if (VAR_3->nvp_datasize != VAR_9 || *VAR_5 < VAR_9 ||
     VAR_3->nvp_nitems == 0 || VAR_9 < VAR_3->nvp_nitems) {
  FUNC_0(VAR_0);
  return (((void*)0));
 }

 VAR_11 = (int *)FUNC_5(VAR_9);
 if (VAR_11 == ((void*)0))
  return (((void*)0));

 for (VAR_10 = 0; VAR_10 < VAR_3->nvp_nitems; VAR_10++) {
  if (VAR_2)
   VAR_8 = FUNC_2(VAR_4);
  else
   VAR_8 = FUNC_3(VAR_4);

  if (VAR_8 < 0) {
   FUNC_0(VAR_0);
   FUNC_4(VAR_11);
   return (((void*)0));
  }

  if ((size_t)VAR_8 >= VAR_7) {
   FUNC_0(VAR_0);
   FUNC_4(VAR_11);
   return (((void*)0));
  }

  VAR_11[VAR_10] = (uint64_t)VAR_6[VAR_8];

  VAR_4 += sizeof(VAR_8);
  *VAR_5 -= sizeof(VAR_8);
 }

 VAR_3->nvp_data = (uint64_t)(uintptr_t)VAR_11;

 return (VAR_4);
}
