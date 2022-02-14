
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {scalar_t__ try_initiate_reauth; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;

__attribute__((used)) static int FUNC_1(struct eap_sm *VAR_1, int VAR_2,
       int VAR_3, int VAR_4,
       int VAR_5)
{
 int VAR_6, VAR_7;

 if (VAR_1->try_initiate_reauth) {
  FUNC_0(VAR_0,
      "EAP: retransmit timeout 1 second for EAP-Initiate-Re-auth-Start");
  return 1;
 }

 if (VAR_5) {





  FUNC_0(VAR_0, "EAP: retransmit timeout %d seconds "
      "(from EAP method hint)", VAR_5);
  return VAR_5;
 }
 VAR_6 = 3;
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_6 *= 2;
  if (VAR_6 >= 20) {
   VAR_6 = 20;
   break;
  }
 }

 FUNC_0(VAR_0, "EAP: retransmit timeout %d seconds "
     "(from dynamic back off; retransCount=%d)",
     VAR_6, VAR_2);

 return VAR_6;
}
