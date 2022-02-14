
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef int uint64_t ;
typedef int nvpair_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int*) ;
 int * FUNC_6 (char const*,int ,int ,int,size_t) ;

nvpair_t *
FUNC_7(const char *VAR_3, int *VAR_4, size_t VAR_5)
{
 nvpair_t *VAR_6;
 size_t VAR_7;

 if (VAR_4 == ((void*)0) || VAR_5 == 0) {
  FUNC_2(VAR_1);
  return (((void*)0));
 }

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  if (VAR_4[VAR_7] != -1 && !FUNC_4(VAR_4[VAR_7])) {
   FUNC_2(VAR_0);
   goto fail;
  }
 }

 VAR_6 = FUNC_6(VAR_3, VAR_2,
     (uint64_t)(uintptr_t)VAR_4, sizeof(VAR_4[0]) * VAR_5, VAR_5);
 if (VAR_6 == ((void*)0))
  goto fail;

 return (VAR_6);
fail:
 FUNC_1();
 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  if (FUNC_4(VAR_4[VAR_7]))
   FUNC_3(VAR_4[VAR_7]);
 }
 FUNC_5(VAR_4);
 FUNC_0();

 return (((void*)0));
}
