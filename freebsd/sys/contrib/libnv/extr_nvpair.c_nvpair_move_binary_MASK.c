
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int nvpair_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (void*) ;
 int * FUNC_4 (char const*,int ,int ,size_t,int ) ;

nvpair_t *
FUNC_5(const char *VAR_2, void *VAR_3, size_t VAR_4)
{
 nvpair_t *VAR_5;

 if (VAR_3 == ((void*)0) || VAR_4 == 0) {
  FUNC_2(VAR_0);
  return (((void*)0));
 }

 VAR_5 = FUNC_4(VAR_2, VAR_1, (uint64_t)(uintptr_t)VAR_3,
     VAR_4, 0);
 if (VAR_5 == ((void*)0)) {
  FUNC_1();
  FUNC_3(VAR_3);
  FUNC_0();
 }

 return (VAR_5);
}
