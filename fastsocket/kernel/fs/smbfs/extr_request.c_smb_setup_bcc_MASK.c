
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_request {scalar_t__ rq_rlen; scalar_t__ rq_bytes_recvd; scalar_t__ rq_bufsize; int rq_iovlen; TYPE_1__* rq_iov; int rq_buffer; int rq_header; } ;
struct TYPE_2__ {scalar_t__ iov_len; int iov_base; } ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct smb_request *VAR_1)
{
 int VAR_2 = 0;
 VAR_1->rq_rlen = FUNC_1(VAR_1->rq_header) + 4 - VAR_1->rq_bytes_recvd;

 if (VAR_1->rq_rlen > VAR_1->rq_bufsize) {
  FUNC_0("Packet too large %d > %d\n",
    VAR_1->rq_rlen, VAR_1->rq_bufsize);
  return -VAR_0;
 }

 VAR_1->rq_iov[0].iov_base = VAR_1->rq_buffer;
 VAR_1->rq_iov[0].iov_len = VAR_1->rq_rlen;
 VAR_1->rq_iovlen = 1;

 return VAR_2;
}
