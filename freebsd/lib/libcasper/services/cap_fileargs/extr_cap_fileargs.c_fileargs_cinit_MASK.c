
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;
typedef int mode_t ;
typedef int fileargs_t ;
typedef int cap_rights_t ;
typedef int cap_channel_t ;


 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int ) ;
 int * FUNC_2 (int,char const* const*,int,int ,int *,int) ;

fileargs_t *
FUNC_3(cap_channel_t *VAR_0, int VAR_1, char *VAR_2[], int VAR_3,
     mode_t VAR_4, cap_rights_t *VAR_5, int VAR_6)
{
 nvlist_t *VAR_7;

 if (VAR_1 <= 0 || VAR_2 == ((void*)0)) {
  return (FUNC_1(((void*)0), 0));
 }

 VAR_7 = FUNC_2(VAR_1, (const char * const *)VAR_2, VAR_3,
    VAR_4, VAR_5, VAR_6);
 if (VAR_7 == ((void*)0))
  return (((void*)0));

 return (FUNC_0(VAR_0, VAR_7));
}
