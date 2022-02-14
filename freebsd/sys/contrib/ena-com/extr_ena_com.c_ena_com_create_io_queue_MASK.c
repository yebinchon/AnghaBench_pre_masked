
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_com_io_sq {scalar_t__ direction; size_t qid; int idx; int tx_max_header_size; int mem_queue_type; int q_depth; int msix_vector; } ;
struct ena_com_io_cq {scalar_t__ direction; size_t qid; int idx; int tx_max_header_size; int mem_queue_type; int q_depth; int msix_vector; } ;
struct ena_com_dev {int tx_max_header_size; struct ena_com_io_sq* io_cq_queues; struct ena_com_io_sq* io_sq_queues; } ;
struct ena_com_create_io_ctx {size_t qid; scalar_t__ direction; int mem_queue_type; int queue_size; int msix_vector; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ena_com_dev*,struct ena_com_io_sq*) ;
 int FUNC_2 (struct ena_com_dev*,struct ena_com_io_sq*,int ) ;
 int FUNC_3 (struct ena_com_dev*,struct ena_com_io_sq*) ;
 int FUNC_4 (struct ena_com_dev*,struct ena_com_create_io_ctx*,struct ena_com_io_sq*) ;
 int FUNC_5 (struct ena_com_dev*,struct ena_com_create_io_ctx*,struct ena_com_io_sq*) ;
 int FUNC_6 (struct ena_com_dev*,struct ena_com_io_sq*,struct ena_com_io_sq*) ;
 int FUNC_7 (char*,size_t,size_t) ;
 int FUNC_8 (struct ena_com_io_sq*,int,int) ;

int FUNC_9(struct ena_com_dev *VAR_4,
       struct ena_com_create_io_ctx *VAR_5)
{
 struct ena_com_io_sq *VAR_6;
 struct ena_com_io_cq *VAR_7;
 int VAR_8;

 if (VAR_5->qid >= VAR_2) {
  FUNC_7("Qid (%d) is bigger than max num of queues (%d)\n",
       VAR_5->qid, VAR_2);
  return VAR_0;
 }

 VAR_6 = &VAR_4->io_sq_queues[VAR_5->qid];
 VAR_7 = &VAR_4->io_cq_queues[VAR_5->qid];

 FUNC_8(VAR_6, 0x0, sizeof(*VAR_6));
 FUNC_8(VAR_7, 0x0, sizeof(*VAR_7));


 VAR_7->q_depth = VAR_5->queue_size;
 VAR_7->direction = VAR_5->direction;
 VAR_7->qid = VAR_5->qid;

 VAR_7->msix_vector = VAR_5->msix_vector;

 VAR_6->q_depth = VAR_5->queue_size;
 VAR_6->direction = VAR_5->direction;
 VAR_6->qid = VAR_5->qid;

 VAR_6->mem_queue_type = VAR_5->mem_queue_type;

 if (VAR_5->direction == VAR_1)

  VAR_6->tx_max_header_size =
   FUNC_0(VAR_4->tx_max_header_size, VAR_3);

 VAR_8 = FUNC_5(VAR_4, VAR_5, VAR_6);
 if (VAR_8)
  goto error;
 VAR_8 = FUNC_4(VAR_4, VAR_5, VAR_7);
 if (VAR_8)
  goto error;

 VAR_8 = FUNC_1(VAR_4, VAR_7);
 if (VAR_8)
  goto error;

 VAR_8 = FUNC_2(VAR_4, VAR_6, VAR_7->idx);
 if (VAR_8)
  goto destroy_io_cq;

 return 0;

destroy_io_cq:
 FUNC_3(VAR_4, VAR_7);
error:
 FUNC_6(VAR_4, VAR_6, VAR_7);
 return VAR_8;
}
