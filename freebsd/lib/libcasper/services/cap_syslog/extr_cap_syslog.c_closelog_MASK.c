
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;
typedef int cap_channel_t ;


 int * FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,char*,char*) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

void
FUNC_4(cap_channel_t *VAR_0)
{
 nvlist_t *VAR_1;

 VAR_1 = FUNC_2(0);
 FUNC_1(VAR_1, "cmd", "closelog");
 VAR_1 = FUNC_0(VAR_0, VAR_1);
 if (VAR_1 == ((void*)0)) {
  return;
 }
 FUNC_3(VAR_1);
}
