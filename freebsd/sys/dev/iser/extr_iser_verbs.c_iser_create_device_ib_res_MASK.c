
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct iser_device {int comps_used; struct iser_comp* comps; TYPE_2__* pd; int event_handler; struct ib_device* ib_device; TYPE_2__* mr; } ;
struct iser_comp {TYPE_2__* cq; scalar_t__ tq; int task; struct iser_device* device; } ;
struct TYPE_8__ {int device_cap_flags; int max_cqe; } ;
struct ib_device {int num_comp_vectors; int name; TYPE_1__ attrs; } ;
struct ib_cq_init_attr {int cqe; int comp_vector; } ;
struct TYPE_9__ {struct TYPE_9__* __internal_mr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct ib_device*,int ) ;
 int FUNC_1 (char*,int,int ,int ,int) ;
 int FUNC_2 (char*,...) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int *,int ,int ,struct iser_comp*) ;
 int FUNC_5 (struct iser_comp*,int ) ;
 TYPE_2__* FUNC_6 (struct ib_device*,int ) ;
 TYPE_2__* FUNC_7 (struct ib_device*,int ,int ,void*,struct ib_cq_init_attr*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (TYPE_2__*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct iser_comp* FUNC_12 (int,int ,int) ;
 void* FUNC_13 (int ,int ) ;
 int VAR_13 ;
 scalar_t__ FUNC_14 (char*,int ,int ,scalar_t__*) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (scalar_t__*,int,int ,char*) ;
 int VAR_14 ;

__attribute__((used)) static int
FUNC_17(struct iser_device *VAR_15)
{
 struct ib_device *VAR_16 = VAR_15->ib_device;
 int VAR_17, VAR_18;

 if (!(VAR_16->attrs.device_cap_flags & VAR_1)) {
  FUNC_2("device %s doesn't support Fastreg, "
    "can't register memory", VAR_15->ib_device->name);
  return (1);
 }

 VAR_15->comps_used = FUNC_13(VAR_13, VAR_15->ib_device->num_comp_vectors);

 VAR_15->comps = FUNC_12(VAR_15->comps_used * sizeof(*VAR_15->comps),
  VAR_4, VAR_6 | VAR_7);
 if (!VAR_15->comps)
  goto comps_err;

 VAR_18 = FUNC_13(VAR_3, VAR_16->attrs.max_cqe);

 FUNC_1("using %d CQs, device %s supports %d vectors max_cqe %d",
   VAR_15->comps_used, VAR_15->ib_device->name,
   VAR_15->ib_device->num_comp_vectors, VAR_18);

 VAR_15->pd = FUNC_6(VAR_15->ib_device, VAR_2);
 if (FUNC_3(VAR_15->pd))
  goto pd_err;

 for (VAR_17 = 0; VAR_17 < VAR_15->comps_used; VAR_17++) {
  struct iser_comp *VAR_19 = &VAR_15->comps[VAR_17];
  struct ib_cq_init_attr VAR_20 = {
   .cqe = VAR_18,
   .comp_vector = VAR_17,
  };

  VAR_19->device = VAR_15;
  VAR_19->cq = FUNC_7(VAR_15->ib_device,
     VAR_9,
     VAR_10,
     (void *)VAR_19,
     &VAR_20);
  if (FUNC_3(VAR_19->cq)) {
   VAR_19->cq = ((void*)0);
   goto cq_err;
  }

  if (FUNC_11(VAR_19->cq, VAR_0))
   goto cq_err;

  FUNC_4(&VAR_19->task, 0, VAR_11, VAR_19);
  VAR_19->tq = FUNC_14("iser_taskq", VAR_5,
    VAR_14, &VAR_19->tq);
  if (!VAR_19->tq)
   goto tq_err;
  FUNC_16(&VAR_19->tq, 1, VAR_8, "iser taskq");
 }

 VAR_15->mr = VAR_15->pd->__internal_mr;
 if (FUNC_3(VAR_15->mr))
  goto tq_err;

 FUNC_0(&VAR_15->event_handler, VAR_15->ib_device,
    VAR_12);
 if (FUNC_10(&VAR_15->event_handler))
  goto tq_err;

 return (0);

tq_err:
 for (VAR_17 = 0; VAR_17 < VAR_15->comps_used; VAR_17++) {
  struct iser_comp *VAR_21 = &VAR_15->comps[VAR_17];
  if (VAR_21->tq)
   FUNC_15(VAR_21->tq);
 }
cq_err:
 for (VAR_17 = 0; VAR_17 < VAR_15->comps_used; VAR_17++) {
  struct iser_comp *VAR_22 = &VAR_15->comps[VAR_17];
  if (VAR_22->cq)
   FUNC_9(VAR_22->cq);
 }
 FUNC_8(VAR_15->pd);
pd_err:
 FUNC_5(VAR_15->comps, VAR_4);
comps_err:
 FUNC_2("failed to allocate an IB resource");
 return (1);
}
