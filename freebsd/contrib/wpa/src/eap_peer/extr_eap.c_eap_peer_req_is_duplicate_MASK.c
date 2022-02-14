
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {scalar_t__ reqId; scalar_t__ lastId; int last_sha1; int req_sha1; scalar_t__ workaround; scalar_t__ rxReq; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct eap_sm *VAR_1)
{
 int VAR_2;

 VAR_2 = (VAR_1->reqId == VAR_1->lastId) && VAR_1->rxReq;
 if (VAR_1->workaround && VAR_2 &&
     FUNC_0(VAR_1->req_sha1, VAR_1->last_sha1, 20) != 0) {
  FUNC_1(VAR_0, "EAP: AS used the same Id again, but "
      "EAP packets were not identical");
  FUNC_1(VAR_0, "EAP: workaround - assume this is not a "
      "duplicate packet");
  VAR_2 = 0;
 }

 return VAR_2;
}
