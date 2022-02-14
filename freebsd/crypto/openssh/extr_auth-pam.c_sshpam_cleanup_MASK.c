
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,void const*) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

void
FUNC_6(void)
{
 if (VAR_7 == ((void*)0) || (VAR_9 && !FUNC_1()))
  return;
 FUNC_0("PAM: cleanup");
 FUNC_4(VAR_7, VAR_0, (const void *)&VAR_3);
 if (VAR_8) {
  FUNC_0("PAM: closing session");
  FUNC_2(VAR_7, VAR_2);
  VAR_8 = 0;
 }
 if (VAR_5) {
  FUNC_0("PAM: deleting credentials");
  FUNC_5(VAR_7, VAR_1);
  VAR_5 = 0;
 }
 VAR_4 = 0;
 FUNC_3(VAR_7, VAR_6);
 VAR_7 = ((void*)0);
}
