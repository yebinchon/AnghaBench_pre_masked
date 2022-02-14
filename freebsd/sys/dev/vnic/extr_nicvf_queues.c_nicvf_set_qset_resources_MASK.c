
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue_set {int sq_cnt; int rq_cnt; int cq_len; int sq_len; int rbdr_len; int cq_cnt; int rbdr_cnt; } ;
struct nicvf {int tx_queues; int rx_queues; struct queue_set* qs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct queue_set* FUNC_0 (int,int ,int) ;

int
FUNC_1(struct nicvf *VAR_10)
{
 struct queue_set *VAR_11;

 VAR_11 = FUNC_0(sizeof(*VAR_11), VAR_2, (VAR_4 | VAR_3));
 VAR_10->qs = VAR_11;


 VAR_11->rbdr_cnt = VAR_5;
 VAR_11->rq_cnt = VAR_7;

 VAR_11->sq_cnt = VAR_8;
 VAR_11->cq_cnt = VAR_0;


 VAR_11->rbdr_len = VAR_6;
 VAR_11->sq_len = VAR_9;
 VAR_11->cq_len = VAR_1;

 VAR_10->rx_queues = VAR_11->rq_cnt;
 VAR_10->tx_queues = VAR_11->sq_cnt;

 return (0);
}
