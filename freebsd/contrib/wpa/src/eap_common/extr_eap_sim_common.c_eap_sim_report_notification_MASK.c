
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char const*,...) ;

void FUNC_1(void *VAR_2, int VAR_3, int VAR_4)
{

 const char *VAR_5 = VAR_4 ? "AKA" : "SIM";


 switch (VAR_3) {
 case 132:
  FUNC_0(VAR_1, "EAP-%s: General failure "
      "notification (after authentication)", VAR_5);
  break;
 case 128:
  FUNC_0(VAR_1, "EAP-%s: Failure notification: "
      "User has been temporarily denied access to the "
      "requested service", VAR_5);
  break;
 case 130:
  FUNC_0(VAR_1, "EAP-%s: Failure notification: "
      "User has not subscribed to the requested service",
      VAR_5);
  break;
 case 131:
  FUNC_0(VAR_1, "EAP-%s: General failure "
      "notification (before authentication)", VAR_5);
  break;
 case 129:
  FUNC_0(VAR_0, "EAP-%s: Successful authentication "
      "notification", VAR_5);
  break;
 default:
  if (VAR_3 >= 32768) {
   FUNC_0(VAR_0, "EAP-%s: Unrecognized "
       "non-failure notification %d",
       VAR_5, VAR_3);
  } else {
   FUNC_0(VAR_1, "EAP-%s: Unrecognized "
       "failure notification %d",
       VAR_5, VAR_3);
  }
 }
}
