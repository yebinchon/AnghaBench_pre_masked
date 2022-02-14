
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_request {int rq_rsize; int rq_iovlen; scalar_t__ rq_bytes_recvd; int rq_header; scalar_t__ rq_rlen; TYPE_1__* rq_iov; int rq_page; int rq_buffer; } ;
struct TYPE_2__ {int iov_len; int iov_base; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct smb_request *VAR_0)
{
 VAR_0->rq_iov[0].iov_base = VAR_0->rq_buffer;
 VAR_0->rq_iov[0].iov_len = 3;

 VAR_0->rq_iov[1].iov_base = VAR_0->rq_page;
 VAR_0->rq_iov[1].iov_len = VAR_0->rq_rsize;
 VAR_0->rq_iovlen = 2;

 VAR_0->rq_rlen = FUNC_0(VAR_0->rq_header) + 4 - VAR_0->rq_bytes_recvd;
}
