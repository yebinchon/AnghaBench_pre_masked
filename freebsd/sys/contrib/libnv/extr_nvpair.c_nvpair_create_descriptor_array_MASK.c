
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef int uint64_t ;
typedef int nvpair_t ;
typedef int int64_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int const,int ,int ) ;
 int FUNC_5 (int*) ;
 int* FUNC_6 (int) ;
 int * FUNC_7 (char const*,int ,int ,int,size_t) ;

nvpair_t *
FUNC_8(const char *VAR_3, const int *VAR_4,
    size_t VAR_5)
{
 unsigned int VAR_6;
 nvpair_t *VAR_7;
 int *VAR_8;

 if (VAR_4 == ((void*)0)) {
  FUNC_2(VAR_0);
  return (((void*)0));
 }

 VAR_7 = ((void*)0);

 VAR_8 = FUNC_6(sizeof(VAR_4[0]) * VAR_5);
 if (VAR_8 == ((void*)0))
  return (((void*)0));
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  if (VAR_4[VAR_6] == -1) {
   VAR_8[VAR_6] = -1;
  } else {
   VAR_8[VAR_6] = FUNC_4(VAR_4[VAR_6], VAR_1, 0);
   if (VAR_8[VAR_6] == -1)
    goto fail;
  }
 }

 VAR_7 = FUNC_7(VAR_3, VAR_2,
     (uint64_t)(uintptr_t)VAR_8, sizeof(int64_t) * VAR_5, VAR_5);

fail:
 if (VAR_7 == ((void*)0)) {
  FUNC_1();
  for (; VAR_6 > 0; VAR_6--) {
   if (VAR_8[VAR_6 - 1] != -1)
    FUNC_3(VAR_8[VAR_6 - 1]);
  }
  FUNC_5(VAR_8);
  FUNC_0();
 }

 return (VAR_7);
}
