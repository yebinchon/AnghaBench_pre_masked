
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int * FUNC_0 (int ,int ,int *,int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,char*,int ) ;
 int VAR_6 ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void
FUNC_4(void)
{

 if (FUNC_1() != -1) {
  VAR_2 = FUNC_0(VAR_4, VAR_3, ((void*)0), VAR_1);
  if (VAR_2 == ((void*)0)) {
   FUNC_3(VAR_0, "fd_select failed on ntpd socket: %m");
   return;
  }
 }
 VAR_6 = FUNC_2(&VAR_5, "The MIB for NTP.", VAR_1);
}
