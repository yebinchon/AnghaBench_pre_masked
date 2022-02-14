
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int nvlist_t ;
typedef int message ;
typedef int cap_channel_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,char*) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int,char const*,int ) ;

void
FUNC_6(cap_channel_t *VAR_1, int VAR_2, const char *VAR_3, va_list VAR_4)
{
 nvlist_t *VAR_5;
 char VAR_6[VAR_0];

 (void)FUNC_5(VAR_6, sizeof(VAR_6), VAR_3, VAR_4);

 VAR_5 = FUNC_3(0);
 FUNC_2(VAR_5, "cmd", "vsyslog");
 FUNC_1(VAR_5, "priority", VAR_2);
 FUNC_2(VAR_5, "message", VAR_6);
 VAR_5 = FUNC_0(VAR_1, VAR_5);
 if (VAR_5 == ((void*)0)) {
  return;
 }
 FUNC_4(VAR_5);
}
