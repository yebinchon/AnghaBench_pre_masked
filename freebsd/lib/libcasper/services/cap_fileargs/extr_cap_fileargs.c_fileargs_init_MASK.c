
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;
typedef int mode_t ;
typedef int fileargs_t ;
typedef int cap_rights_t ;


 int * FUNC_0 (int *,int ) ;
 int * FUNC_1 (int,char const* const*,int,int ,int *,int) ;
 int * FUNC_2 (int *) ;

fileargs_t *
FUNC_3(int VAR_0, char *VAR_1[], int VAR_2, mode_t VAR_3,
    cap_rights_t *VAR_4, int VAR_5)
{
 nvlist_t *VAR_6;

 if (VAR_0 <= 0 || VAR_1 == ((void*)0)) {
  return (FUNC_0(((void*)0), 0));
 }

 VAR_6 = FUNC_1(VAR_0, (const char * const *)VAR_1, VAR_2,
    VAR_3, VAR_4, VAR_5);
 if (VAR_6 == ((void*)0))
  return (((void*)0));

 return (FUNC_2(VAR_6));
}
