
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_sb_info {int rstate; } ;
struct smb_request {scalar_t__ rq_bytes_recvd; scalar_t__ rq_rlen; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct smb_sb_info*,struct smb_request*) ;

__attribute__((used)) static int FUNC_2(struct smb_sb_info *VAR_1, struct smb_request *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3 < 0)
  goto out;
 if (VAR_2->rq_bytes_recvd < VAR_2->rq_rlen)
  goto out;
 VAR_1->rstate = VAR_0;
out:
 FUNC_0("result: %d\n", VAR_3);
 return VAR_3;
}
