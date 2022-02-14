
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nicvf {double cq_coalesce_usecs; int dev; } ;
struct TYPE_2__ {int base; } ;
struct cmp_queue {int idx; int cmp_taskq; int cmp_task; int mtx; int rx_br; struct nicvf* nic; int thresh; TYPE_1__ dmem; int desc; int mtx_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 double VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int ,int ,struct cmp_queue*) ;
 int FUNC_1 (int,int ,int ,int *) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,int ,int *,int ) ;
 int FUNC_5 (struct nicvf*,TYPE_1__*,int,int ,int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,int,char*,char*,int) ;
 int FUNC_8 (char*,int ,int ,int *) ;
 int FUNC_9 (int *,int,int ,char*,char*,int) ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_10(struct nicvf *VAR_11, struct cmp_queue *VAR_12, int VAR_13,
    int VAR_14)
{
 int VAR_15;


 FUNC_7(VAR_12->mtx_name, sizeof(VAR_12->mtx_name), "%s: CQ(%d) lock",
     FUNC_2(VAR_11->dev), VAR_14);
 FUNC_4(&VAR_12->mtx, VAR_12->mtx_name, ((void*)0), VAR_4);

 VAR_15 = FUNC_5(VAR_11, &VAR_12->dmem, VAR_13, VAR_1,
         VAR_7);

 if (VAR_15 != 0) {
  FUNC_3(VAR_11->dev,
      "Could not allocate DMA memory for CQ\n");
  return (VAR_15);
 }

 VAR_12->desc = VAR_12->dmem.base;
 VAR_12->thresh = FUNC_6(VAR_11->dev) ? 0 : VAR_0;
 VAR_12->nic = VAR_11;
 VAR_12->idx = VAR_14;
 VAR_11->cq_coalesce_usecs = (VAR_3 * 0.05) - 1;

 VAR_12->rx_br = FUNC_1(VAR_2 * 8, VAR_5, VAR_6,
     &VAR_12->mtx);


 FUNC_0(&VAR_12->cmp_task, 0, VAR_9, VAR_12);
 VAR_12->cmp_taskq = FUNC_8("nicvf_cmp_taskq", VAR_6,
     VAR_10, &VAR_12->cmp_taskq);
 FUNC_9(&VAR_12->cmp_taskq, 1, VAR_8, "%s: cmp_taskq(%d)",
     FUNC_2(VAR_11->dev), VAR_14);

 return (0);
}
