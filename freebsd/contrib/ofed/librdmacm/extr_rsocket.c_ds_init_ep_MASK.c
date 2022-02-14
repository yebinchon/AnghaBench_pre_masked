
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsocket {int sq_size; int rq_size; int sqe_avail; int rqe_avail; int state; struct ds_smsg* smsg_free; void* sbuf; void* dmsg; } ;
struct ds_smsg {struct ds_smsg* next; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (struct rsocket*) ;
 int FUNC_3 (int *,struct rsocket*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_4(struct rsocket *VAR_6)
{
 struct ds_smsg *VAR_7;
 int VAR_8, VAR_9;

 FUNC_2(VAR_6);

 VAR_6->sbuf = FUNC_1(VAR_6->sq_size, VAR_1);
 if (!VAR_6->sbuf)
  return FUNC_0(VAR_0);

 VAR_6->dmsg = FUNC_1(VAR_6->rq_size + 1, sizeof(*VAR_6->dmsg));
 if (!VAR_6->dmsg)
  return FUNC_0(VAR_0);

 VAR_6->sqe_avail = VAR_6->sq_size;
 VAR_6->rqe_avail = VAR_6->rq_size;

 VAR_6->smsg_free = (struct ds_smsg *) VAR_6->sbuf;
 VAR_7 = VAR_6->smsg_free;
 for (VAR_8 = 0; VAR_8 < VAR_6->sq_size - 1; VAR_8++) {
  VAR_7->next = (void *) VAR_7 + VAR_1;
  VAR_7 = VAR_7->next;
 }
 VAR_7->next = ((void*)0);

 VAR_9 = FUNC_3(&VAR_5, VAR_6, VAR_2);
 if (VAR_9)
  return VAR_9;

 VAR_6->state = VAR_3 | VAR_4;
 return 0;
}
