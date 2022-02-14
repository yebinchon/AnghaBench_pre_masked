
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct nvme_qpair {int id; int cpu; size_t domain; int res; } ;
struct nvme_controller {int dstrd; int max_hw_pend_io; int num_io_queues; size_t domain; int dev; struct nvme_qpair* ioq; int resource; } ;
struct TYPE_2__ {size_t pc_domain; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct nvme_controller*,int) ;
 int FUNC_3 (char*,int*) ;
 int FUNC_4 (int ,int ,int) ;
 int * VAR_7 ;
 int FUNC_5 (int ) ;
 int * VAR_8 ;
 struct nvme_qpair* FUNC_6 (int,int ,int) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct nvme_controller*,int ) ;
 int FUNC_11 (struct nvme_qpair*,int,int,struct nvme_controller*) ;
 TYPE_1__* FUNC_12 (int) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int
FUNC_14(struct nvme_controller *VAR_9)
{
 struct nvme_qpair *VAR_10;
 uint32_t VAR_11;
 uint16_t VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16;
 int VAR_17, VAR_18, VAR_19;
 VAR_19 =
     (FUNC_13(VAR_9->resource) - FUNC_9(VAR_8[0])) /
     (1 << (VAR_9->dstrd + 1));
 VAR_17 = VAR_3;
 FUNC_3("hw.nvme.io_entries", &VAR_17);
 VAR_11 = FUNC_10(VAR_9, VAR_11);
 VAR_12 = FUNC_1(VAR_11);
 VAR_17 = FUNC_8(VAR_17, VAR_12 + 1);
 VAR_17 = FUNC_8(VAR_17, VAR_19);

 VAR_18 = VAR_4;
 FUNC_3("hw.nvme.io_trackers", &VAR_18);

 VAR_18 = FUNC_7(VAR_18, VAR_6);
 VAR_18 = FUNC_8(VAR_18, VAR_5);





 VAR_18 = FUNC_8(VAR_18, (VAR_17-1));







 VAR_9->max_hw_pend_io = VAR_18 * VAR_9->num_io_queues * 3 / 4;

 VAR_9->ioq = FUNC_6(VAR_9->num_io_queues * sizeof(struct nvme_qpair),
     VAR_0, VAR_2 | VAR_1);

 for (VAR_15 = VAR_13 = VAR_16 = 0; VAR_15 < VAR_9->num_io_queues; VAR_15++, VAR_13 += VAR_16) {
  VAR_10 = &VAR_9->ioq[VAR_15];





  VAR_10->id = VAR_15 + 1;
  if (VAR_9->num_io_queues > 1) {

   for (VAR_16 = 1; FUNC_2(VAR_9, VAR_13 + VAR_16) == VAR_15; VAR_16++)
    ;

   VAR_10->cpu = VAR_13 + (FUNC_5(VAR_9->dev)+VAR_16/2) % VAR_16;
   VAR_10->domain = FUNC_12(VAR_10->cpu)->pc_domain;
  } else {
   VAR_10->cpu = FUNC_0(&VAR_7[VAR_9->domain]) - 1;
   VAR_10->domain = VAR_9->domain;
  }





  VAR_14 = FUNC_11(VAR_10, VAR_17, VAR_18,
      VAR_9);
  if (VAR_14)
   return (VAR_14);





  if (VAR_9->num_io_queues > 1)
   FUNC_4(VAR_9->dev, VAR_10->res, VAR_10->cpu);
 }

 return (0);
}
