
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int socklen_t ;
typedef int optlen ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int,int ,int ,int*,int*) ;
 scalar_t__ FUNC_3 (int,int ,int ,int*,int) ;

__attribute__((used)) static void FUNC_4(int VAR_5)
{
 int VAR_6;
 socklen_t VAR_7 = sizeof(VAR_7);

 VAR_6 = 1;
 if (FUNC_3(VAR_5, VAR_1, VAR_2, &VAR_6, VAR_7)) {
  FUNC_0("rsetsockopt SO_KEEPALIVE");
  return;
 }

 VAR_6 = VAR_4;
 if (FUNC_3(VAR_5, VAR_0, VAR_3, &VAR_6, VAR_7))
  FUNC_0("rsetsockopt TCP_KEEPIDLE");

 if (!(FUNC_2(VAR_5, VAR_1, VAR_2, &VAR_6, &VAR_7)))
  FUNC_1("Keepalive: %s\n", (VAR_6 ? "ON" : "OFF"));

 if (!(FUNC_2(VAR_5, VAR_0, VAR_3, &VAR_6, &VAR_7)))
  FUNC_1("  time: %i\n", VAR_6);
}
