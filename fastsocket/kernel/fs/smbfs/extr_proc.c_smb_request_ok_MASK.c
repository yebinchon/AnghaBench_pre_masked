
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_request {int rq_resp_wct; int rq_resp_bcc; int rq_header; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct smb_request*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int,int) ;

__attribute__((used)) static int
FUNC_5(struct smb_request *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_0->rq_resp_wct = VAR_2;
 VAR_0->rq_resp_bcc = VAR_3;

 VAR_4 = FUNC_2(VAR_0);
 if (VAR_4 != 0) {
  FUNC_0("smb_request failed\n");
  goto out;
 }

 if (FUNC_3(VAR_0->rq_header) != 0) {
  FUNC_1("invalid packet!\n");
  goto out;
 }

 VAR_4 = FUNC_4(VAR_0->rq_header, VAR_1, VAR_2, VAR_3);

out:
 return VAR_4;
}
