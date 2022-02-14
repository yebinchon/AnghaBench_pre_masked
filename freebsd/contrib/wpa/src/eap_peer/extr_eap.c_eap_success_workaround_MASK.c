
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {scalar_t__ workaround; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int) ;

__attribute__((used)) static int FUNC_1(struct eap_sm *VAR_1, int VAR_2, int VAR_3)
{
 if (VAR_1->workaround && (VAR_2 == ((VAR_3 + 1) & 0xff) ||
          VAR_2 == ((VAR_3 + 2) & 0xff))) {
  FUNC_0(VAR_0, "EAP: Workaround for unexpected "
      "identifier field in EAP Success: "
      "reqId=%d lastId=%d (these are supposed to be "
      "same)", VAR_2, VAR_3);
  return 1;
 }
 FUNC_0(VAR_0, "EAP: EAP-Success Id mismatch - reqId=%d "
     "lastId=%d", VAR_2, VAR_3);
 return 0;
}
