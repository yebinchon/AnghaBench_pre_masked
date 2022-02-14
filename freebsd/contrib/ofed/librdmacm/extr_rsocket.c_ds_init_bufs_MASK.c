
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibv_grh {int dummy; } ;
struct ds_qp {void* rmr; TYPE_1__* rs; int rbuf; int cm_id; void* smr; } ;
struct TYPE_2__ {scalar_t__ rbuf_size; scalar_t__ sbuf_size; int sbuf; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int) ;
 void* FUNC_2 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct ds_qp *VAR_1)
{
 VAR_1->rbuf = FUNC_1(VAR_1->rs->rbuf_size + sizeof(struct ibv_grh), 1);
 if (!VAR_1->rbuf)
  return FUNC_0(VAR_0);

 VAR_1->smr = FUNC_2(VAR_1->cm_id, VAR_1->rs->sbuf, VAR_1->rs->sbuf_size);
 if (!VAR_1->smr)
  return -1;

 VAR_1->rmr = FUNC_2(VAR_1->cm_id, VAR_1->rbuf, VAR_1->rs->rbuf_size +
           sizeof(struct ibv_grh));
 if (!VAR_1->rmr)
  return -1;

 return 0;
}
