
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tid; int server_uid; } ;
struct smb_sb_info {int recvq; TYPE_1__ opt; } ;
struct smb_request {scalar_t__ rq_bytes_sent; int rq_flags; int rq_queue; int rq_header; struct smb_sb_info* rq_server; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int *,int *) ;
 int VAR_2 ;
 int FUNC_2 (struct smb_request*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(struct smb_request *VAR_5)
{
 struct smb_sb_info *VAR_6 = VAR_5->rq_server;
 int VAR_7;

 if (VAR_5->rq_bytes_sent == 0) {
  FUNC_0(VAR_5->rq_header, VAR_3, VAR_6->opt.tid);
  FUNC_0(VAR_5->rq_header, VAR_2, 1);
  FUNC_0(VAR_5->rq_header, VAR_4, VAR_6->opt.server_uid);
 }

 VAR_7 = FUNC_2(VAR_5);
 if (VAR_7 < 0 && VAR_7 != -VAR_0)
  goto out;

 VAR_7 = 0;
 if (!(VAR_5->rq_flags & VAR_1))
  goto out;

 FUNC_1(&VAR_5->rq_queue, &VAR_6->recvq);
 VAR_7 = 1;
out:
 return VAR_7;
}
