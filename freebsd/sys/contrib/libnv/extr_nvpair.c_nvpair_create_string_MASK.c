
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int nvpair_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;
 int * FUNC_3 (char const*,int ,int ,size_t,int ) ;
 int FUNC_4 (char const*) ;

nvpair_t *
FUNC_5(const char *VAR_2, const char *VAR_3)
{
 nvpair_t *VAR_4;
 size_t VAR_5;
 char *VAR_6;

 if (VAR_3 == ((void*)0)) {
  FUNC_0(VAR_0);
  return (((void*)0));
 }

 VAR_6 = FUNC_2(VAR_3);
 if (VAR_6 == ((void*)0))
  return (((void*)0));
 VAR_5 = FUNC_4(VAR_3) + 1;

 VAR_4 = FUNC_3(VAR_2, VAR_1, (uint64_t)(uintptr_t)VAR_6,
     VAR_5, 0);
 if (VAR_4 == ((void*)0))
  FUNC_1(VAR_6);

 return (VAR_4);
}
