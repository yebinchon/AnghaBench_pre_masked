
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_request {int rq_slen; int * rq_trans2buffer; scalar_t__ rq_fragment; scalar_t__ rq_errno; scalar_t__ rq_err; scalar_t__ rq_rcls; scalar_t__ rq_bytes_sent; int rq_setup_read; scalar_t__ rq_resp_bcc; int rq_header; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct smb_request *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1->rq_header) + 4;
 VAR_1->rq_slen = VAR_2;


 if (VAR_1->rq_resp_bcc)
  VAR_1->rq_setup_read = VAR_0;


 VAR_1->rq_bytes_sent = 0;
 VAR_1->rq_rcls = 0;
 VAR_1->rq_err = 0;
 VAR_1->rq_errno = 0;
 VAR_1->rq_fragment = 0;
 FUNC_0(VAR_1->rq_trans2buffer);
 VAR_1->rq_trans2buffer = ((void*)0);

 return 0;
}
