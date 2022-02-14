
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cap_rights_t ;
typedef int cap_channel_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int * FUNC_3 (int *,char*) ;
 int * VAR_7 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int * VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_7 (int) ;
 int * FUNC_8 (int,char**,int ,int ,int *,int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_9 (int ,char*) ;

__attribute__((used)) static void
FUNC_10(int VAR_11, char **VAR_12)
{
 cap_rights_t VAR_13;
 cap_channel_t *VAR_14;

 VAR_14 = FUNC_1();
 if (VAR_14 == ((void*)0)) {
  FUNC_9(VAR_4, "cap_init(): %m");
  FUNC_7(1);
 }




 (void)FUNC_2(&VAR_13, VAR_1, VAR_2, VAR_0);
 VAR_7 = FUNC_8(VAR_11, VAR_12, VAR_9 || VAR_10 ? VAR_5 : VAR_6,
     0, &VAR_13, VAR_3);
 if (VAR_7 == ((void*)0)) {
  FUNC_9(VAR_4, "fileargs_init(): %m");
  FUNC_7(1);
 }
 FUNC_4();
 FUNC_5();
 if (FUNC_6() != 0) {
  FUNC_9(VAR_4, "caph_enter_casper(): %m");
  FUNC_7(1);
 }
 VAR_8 = FUNC_3(VAR_14, "system.syslog");
 if (VAR_8 == ((void*)0)) {
  FUNC_9(VAR_4, "cap_service_open(system.syslog): %m");
  FUNC_7(1);
 }
 FUNC_0(VAR_14);
}
