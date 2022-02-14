
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;
typedef int fileargs_t ;
typedef int cap_channel_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,char*) ;
 int VAR_0 ;
 int * FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*) ;

fileargs_t *
FUNC_7(cap_channel_t *VAR_1, nvlist_t *VAR_2)
{
 cap_channel_t *VAR_3;
 fileargs_t *VAR_4;
 int VAR_5, VAR_6;
 int VAR_7, VAR_8;

 FUNC_0(VAR_1 != ((void*)0));

 if (VAR_2 == ((void*)0)) {
  return (FUNC_4(((void*)0), 0));
 }

 VAR_3 = ((void*)0);
 VAR_4 = ((void*)0);

 VAR_3 = FUNC_3(VAR_1, "system.fileargs");
 if (VAR_3 == ((void*)0)) {
  FUNC_5(VAR_2);
  return (((void*)0));
 }

 VAR_7 = FUNC_6(VAR_2, "flags");
 VAR_8 = FUNC_6(VAR_2, "operations");


 VAR_6 = FUNC_2(VAR_3, VAR_2);
 if (VAR_6 < 0)
  goto out;

 VAR_4 = FUNC_4(VAR_3, VAR_7);
 if (VAR_4 == ((void*)0))
  goto out;

 return (VAR_4);
out:
 VAR_5 = VAR_0;
 if (VAR_3 != ((void*)0))
  FUNC_1(VAR_3);
 VAR_0 = VAR_5;
 return (((void*)0));
}
