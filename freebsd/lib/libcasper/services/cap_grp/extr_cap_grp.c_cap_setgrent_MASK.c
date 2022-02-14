
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;
typedef int cap_channel_t ;


 int * FUNC_0 (int *,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,char*,char*) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,char*) ;

int
FUNC_5(cap_channel_t *VAR_1)
{
 nvlist_t *VAR_2;

 VAR_2 = FUNC_2(0);
 FUNC_1(VAR_2, "cmd", "setgrent");
 VAR_2 = FUNC_0(VAR_1, VAR_2);
 if (VAR_2 == ((void*)0))
  return (0);
 if (FUNC_4(VAR_2, "error") != 0) {
  VAR_0 = FUNC_4(VAR_2, "error");
  FUNC_3(VAR_2);
  return (0);
 }
 FUNC_3(VAR_2);

 return (1);
}
