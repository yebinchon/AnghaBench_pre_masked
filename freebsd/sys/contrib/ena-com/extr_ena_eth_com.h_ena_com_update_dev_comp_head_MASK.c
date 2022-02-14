
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ena_com_io_cq {int head; int last_head_update; int q_depth; int cq_head_db_reg; int bus; int qid; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static inline int FUNC_2(struct ena_com_io_cq *VAR_1)
{
 u16 VAR_2, VAR_3;
 bool VAR_4;

 VAR_3 = VAR_1->head;
 VAR_2 = VAR_3 - VAR_1->last_head_update;
 VAR_4 = VAR_2 > (VAR_1->q_depth / VAR_0);

 if (VAR_1->cq_head_db_reg && VAR_4) {
  FUNC_1("Write completion queue doorbell for queue %d: head: %d\n",
       VAR_1->qid, VAR_3);
  FUNC_0(VAR_1->bus, VAR_3, VAR_1->cq_head_db_reg);
  VAR_1->last_head_update = VAR_3;
 }

 return 0;
}
