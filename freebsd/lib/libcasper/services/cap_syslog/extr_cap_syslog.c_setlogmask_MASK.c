
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;
typedef int cap_channel_t ;


 int * FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,char*) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;

int
FUNC_6(cap_channel_t *VAR_0, int VAR_1)
{
 nvlist_t *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_3(0);
 FUNC_2(VAR_2, "cmd", "setlogmask");
 FUNC_1(VAR_2, "maskpri", VAR_1);
 VAR_2 = FUNC_0(VAR_0, VAR_2);
 VAR_3 = FUNC_5(VAR_2, "omask");

 FUNC_4(VAR_2);

 return (VAR_3);
}
