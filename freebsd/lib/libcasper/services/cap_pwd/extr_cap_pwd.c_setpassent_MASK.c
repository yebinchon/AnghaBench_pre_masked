
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;
typedef int cap_channel_t ;


 int * FUNC_0 (int *,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,char*) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,char*) ;

int
FUNC_6(cap_channel_t *VAR_1, int VAR_2)
{
 nvlist_t *VAR_3;

 VAR_3 = FUNC_3(0);
 FUNC_2(VAR_3, "cmd", "setpassent");
 FUNC_1(VAR_3, "stayopen", VAR_2 != 0);
 VAR_3 = FUNC_0(VAR_1, VAR_3);
 if (VAR_3 == ((void*)0))
  return (0);
 if (FUNC_5(VAR_3, "error") != 0) {
  VAR_0 = FUNC_5(VAR_3, "error");
  FUNC_4(VAR_3);
  return (0);
 }
 FUNC_4(VAR_3);

 return (1);
}
