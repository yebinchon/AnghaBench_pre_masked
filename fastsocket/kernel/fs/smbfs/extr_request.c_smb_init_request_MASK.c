
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_sb_info {int header; int rstate; } ;
struct smb_request {int* rq_header; int rq_resp_wct; int rq_bytes_recvd; int rq_rlen; int rq_iovlen; TYPE_1__* rq_iov; } ;
struct TYPE_2__ {int* iov_base; int iov_len; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int*,int ,int) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct smb_sb_info *VAR_4, struct smb_request *VAR_5)
{
 int VAR_6, VAR_7;

 FUNC_3(VAR_5->rq_header, VAR_4->header, VAR_0);

 VAR_7 = *(VAR_5->rq_header + VAR_3);
 if (VAR_7 > 20) {
  FUNC_0("wct too large, %d > 20\n", VAR_7);
  VAR_4->rstate = VAR_1;
  return 0;
 }

 VAR_5->rq_resp_wct = VAR_7;
 VAR_6 = VAR_0 + VAR_7*2 + 2;
 FUNC_1("header length: %d   smb_wct: %2d\n", VAR_6, VAR_7);

 VAR_5->rq_bytes_recvd = VAR_0;
 VAR_5->rq_rlen = VAR_6;
 VAR_5->rq_iov[0].iov_base = VAR_5->rq_header;
 VAR_5->rq_iov[0].iov_len = VAR_6;
 VAR_5->rq_iovlen = 1;
 VAR_4->rstate = VAR_2;




 return 0;
}
