
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_request {int rq_resp_wct; int rq_rsize; int rq_iovlen; scalar_t__ rq_bytes_recvd; int rq_header; scalar_t__ rq_rlen; TYPE_1__* rq_iov; int rq_page; int rq_buffer; scalar_t__ rq_bufsize; } ;
struct TYPE_2__ {int iov_len; int iov_base; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(struct smb_request *VAR_3)
{

 int VAR_4 = VAR_0 + VAR_3->rq_resp_wct*2 - 2;
 int VAR_5 = FUNC_1(VAR_3->rq_header, VAR_2);





 VAR_5 -= VAR_4;
 if (VAR_5 > VAR_1 || VAR_5 < 0) {
  FUNC_0("offset is larger than SMB_READX_MAX_PAD or negative!\n");
  FUNC_0("%d > %d || %d < 0\n", VAR_5, VAR_1, VAR_5);
  VAR_3->rq_rlen = VAR_3->rq_bufsize + 1;
  return;
 }
 VAR_3->rq_iov[0].iov_base = VAR_3->rq_buffer;
 VAR_3->rq_iov[0].iov_len = VAR_5;

 VAR_3->rq_iov[1].iov_base = VAR_3->rq_page;
 VAR_3->rq_iov[1].iov_len = VAR_3->rq_rsize;
 VAR_3->rq_iovlen = 2;

 VAR_3->rq_rlen = FUNC_2(VAR_3->rq_header) + 4 - VAR_3->rq_bytes_recvd;
}
