
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
struct nvme_namespace {int dummy; } ;
struct nvme_io_test_internal {scalar_t__ opc; int td_active; int time; int size; int io_completed; int start; int flags; struct nvme_namespace* ns; } ;
struct nvme_io_test {scalar_t__ opc; int size; int num_threads; int time; int io_completed; int flags; } ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct nvme_io_test_internal*,int ) ;
 int FUNC_2 (int *) ;
 int VAR_6 ;
 int FUNC_3 (void (*) (void*),struct nvme_io_test_internal*,int *,int *,int ,int ,char*,int) ;
 struct nvme_io_test_internal* FUNC_4 (int,int ,int) ;
 int FUNC_5 (int ,int ,int) ;
 void FUNC_6 (void*) ;
 int FUNC_7 (struct nvme_namespace*) ;
 void FUNC_8 (void*) ;
 int FUNC_9 (struct nvme_io_test_internal*,int ,char*,int) ;

void
FUNC_10(struct nvme_namespace *VAR_7, u_long VAR_8, caddr_t VAR_9)
{
 struct nvme_io_test *VAR_10;
 struct nvme_io_test_internal *VAR_11;
 void (*VAR_12)(void *);
 int VAR_13;

 VAR_10 = (struct nvme_io_test *)VAR_9;

 if ((VAR_10->opc != VAR_4) &&
     (VAR_10->opc != VAR_5))
  return;

 if (VAR_10->size % FUNC_7(VAR_7))
  return;

 VAR_11 = FUNC_4(sizeof(*VAR_11), VAR_0,
     VAR_1 | VAR_2);
 VAR_11->opc = VAR_10->opc;
 VAR_11->ns = VAR_7;
 VAR_11->td_active = VAR_10->num_threads;
 VAR_11->time = VAR_10->time;
 VAR_11->size = VAR_10->size;
 VAR_11->flags = VAR_10->flags;

 if (VAR_8 == VAR_3)
  VAR_12 = FUNC_8;
 else
  VAR_12 = FUNC_6;

 FUNC_2(&VAR_11->start);

 for (VAR_13 = 0; VAR_13 < VAR_10->num_threads; VAR_13++)
  FUNC_3(VAR_12, VAR_11,
      ((void*)0), ((void*)0), 0, 0, "nvme_io_test[%d]", VAR_13);

 FUNC_9(VAR_11, 0, "nvme_test", VAR_10->time * 2 * VAR_6);

 while (VAR_11->td_active > 0)
  FUNC_0(10);

 FUNC_5(VAR_10->io_completed, VAR_11->io_completed,
     sizeof(VAR_10->io_completed));

 FUNC_1(VAR_11, VAR_0);
}
