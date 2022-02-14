
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
 int FUNC_3 (char*) ;
 int * FUNC_4 (char const*,int ,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (char*) ;

nvpair_t *
FUNC_6(const char *VAR_2, char *VAR_3)
{
 nvpair_t *VAR_4;

 if (VAR_3 == ((void*)0)) {
  FUNC_2(VAR_0);
  return (((void*)0));
 }

 VAR_4 = FUNC_4(VAR_2, VAR_1, (uint64_t)(uintptr_t)VAR_3,
     FUNC_5(VAR_3) + 1, 0);
 if (VAR_4 == ((void*)0)) {
  FUNC_1();
  FUNC_3(VAR_3);
  FUNC_0();
 }

 return (VAR_4);
}
