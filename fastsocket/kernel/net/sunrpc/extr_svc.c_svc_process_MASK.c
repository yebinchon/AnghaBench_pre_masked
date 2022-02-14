
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct svc_serv {TYPE_4__* sv_stats; } ;
struct TYPE_7__ {TYPE_2__* tail; int buflen; scalar_t__ page_len; scalar_t__ page_base; scalar_t__ len; int * pages; struct kvec* head; } ;
struct TYPE_5__ {struct kvec* head; } ;
struct svc_rqst {int rq_resused; int rq_xid; TYPE_3__ rq_res; int * rq_respages; struct svc_serv* rq_server; TYPE_1__ rq_arg; } ;
struct kvec {scalar_t__ iov_len; int iov_base; } ;
struct TYPE_8__ {int rpcbadfmt; } ;
struct TYPE_6__ {scalar_t__ iov_len; int * iov_base; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct svc_rqst*) ;
 scalar_t__ FUNC_2 (struct kvec*) ;
 int FUNC_3 (struct kvec*) ;
 int FUNC_4 (struct svc_rqst*,char*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct svc_rqst*,struct kvec*,struct kvec*) ;
 int FUNC_6 (struct svc_rqst*) ;

int
FUNC_7(struct svc_rqst *VAR_1)
{
 struct kvec *VAR_2 = &VAR_1->rq_arg.head[0];
 struct kvec *VAR_3 = &VAR_1->rq_res.head[0];
 struct svc_serv *VAR_4 = VAR_1->rq_server;
 u32 VAR_5;





 VAR_1->rq_resused = 1;
 VAR_3->iov_base = FUNC_0(VAR_1->rq_respages[0]);
 VAR_3->iov_len = 0;
 VAR_1->rq_res.pages = VAR_1->rq_respages + 1;
 VAR_1->rq_res.len = 0;
 VAR_1->rq_res.page_base = 0;
 VAR_1->rq_res.page_len = 0;
 VAR_1->rq_res.buflen = VAR_0;
 VAR_1->rq_res.tail[0].iov_base = ((void*)0);
 VAR_1->rq_res.tail[0].iov_len = 0;

 VAR_1->rq_xid = FUNC_3(VAR_2);

 VAR_5 = FUNC_2(VAR_2);
 if (VAR_5 != 0) {

  FUNC_4(VAR_1, "bad direction %d, dropping request\n", VAR_5);
  VAR_4->sv_stats->rpcbadfmt++;
  FUNC_1(VAR_1);
  return 0;
 }


 if (FUNC_5(VAR_1, VAR_2, VAR_3))
  return FUNC_6(VAR_1);
 else {
  FUNC_1(VAR_1);
  return 0;
 }
}
