
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct mthca_create_cq {int set_db_index; int arm_db_index; int pdn; int lkey; int arm_db_page; int set_db_page; } ;
struct ib_cq {int dummy; } ;
struct TYPE_14__ {int lkey; } ;
struct TYPE_15__ {TYPE_2__ ibmr; } ;
struct TYPE_16__ {TYPE_3__ mr; } ;
struct mthca_cq {struct ib_cq ibcq; int * resize_buf; int cqn; int arm_db_index; int set_ci_db_index; TYPE_4__ buf; } ;
struct ib_udata {int dummy; } ;
struct ib_ucontext {int dummy; } ;
struct ib_device {int dummy; } ;
struct ib_cq_init_attr {int cqe; scalar_t__ flags; } ;
typedef int __u32 ;
struct TYPE_17__ {int pd_num; } ;
struct TYPE_13__ {int max_cqes; } ;
struct TYPE_19__ {TYPE_5__ driver_pd; TYPE_1__ limits; } ;
struct TYPE_18__ {int db_tab; int uar; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ib_cq* FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct mthca_create_cq*,struct ib_udata*,int) ;
 scalar_t__ FUNC_2 (struct ib_udata*,int *,int) ;
 int FUNC_3 (struct mthca_cq*) ;
 struct mthca_cq* FUNC_4 (int,int ) ;
 int FUNC_5 (TYPE_7__*,struct mthca_cq*) ;
 int FUNC_6 (TYPE_7__*,int,TYPE_6__*,int ,struct mthca_cq*) ;
 int FUNC_7 (TYPE_7__*,int *,int ,int ,int ) ;
 int FUNC_8 (TYPE_7__*,int *,int ,int ) ;
 TYPE_7__* FUNC_9 (struct ib_device*) ;
 TYPE_6__* FUNC_10 (struct ib_ucontext*) ;

__attribute__((used)) static struct ib_cq *FUNC_11(struct ib_device *VAR_4,
         const struct ib_cq_init_attr *VAR_5,
         struct ib_ucontext *VAR_6,
         struct ib_udata *VAR_7)
{
 int VAR_8 = VAR_5->cqe;
 struct mthca_create_cq VAR_9;
 struct mthca_cq *VAR_10;
 int VAR_11;
 int VAR_12;

 if (VAR_5->flags)
  return FUNC_0(-VAR_1);

 if (VAR_8 < 1 || VAR_8 > FUNC_9(VAR_4)->limits.max_cqes)
  return FUNC_0(-VAR_1);

 if (VAR_6) {
  if (FUNC_1(&VAR_9, VAR_7, sizeof VAR_9))
   return FUNC_0(-VAR_0);

  VAR_12 = FUNC_7(FUNC_9(VAR_4), &FUNC_10(VAR_6)->uar,
     FUNC_10(VAR_6)->db_tab,
     VAR_9.set_db_index, VAR_9.set_db_page);
  if (VAR_12)
   return FUNC_0(VAR_12);

  VAR_12 = FUNC_7(FUNC_9(VAR_4), &FUNC_10(VAR_6)->uar,
     FUNC_10(VAR_6)->db_tab,
     VAR_9.arm_db_index, VAR_9.arm_db_page);
  if (VAR_12)
   goto err_unmap_set;
 }

 VAR_10 = FUNC_4(sizeof *VAR_10, VAR_3);
 if (!VAR_10) {
  VAR_12 = -VAR_2;
  goto err_unmap_arm;
 }

 if (VAR_6) {
  VAR_10->buf.mr.ibmr.lkey = VAR_9.lkey;
  VAR_10->set_ci_db_index = VAR_9.set_db_index;
  VAR_10->arm_db_index = VAR_9.arm_db_index;
 }

 for (VAR_11 = 1; VAR_11 <= VAR_8; VAR_11 <<= 1)
  ;

 VAR_12 = FUNC_6(FUNC_9(VAR_4), VAR_11,
       VAR_6 ? FUNC_10(VAR_6) : ((void*)0),
       VAR_6 ? VAR_9.pdn : FUNC_9(VAR_4)->driver_pd.pd_num,
       VAR_10);
 if (VAR_12)
  goto err_free;

 if (VAR_6 && FUNC_2(VAR_7, &VAR_10->cqn, sizeof (__u32))) {
  FUNC_5(FUNC_9(VAR_4), VAR_10);
  VAR_12 = -VAR_0;
  goto err_free;
 }

 VAR_10->resize_buf = ((void*)0);

 return &VAR_10->ibcq;

err_free:
 FUNC_3(VAR_10);

err_unmap_arm:
 if (VAR_6)
  FUNC_8(FUNC_9(VAR_4), &FUNC_10(VAR_6)->uar,
        FUNC_10(VAR_6)->db_tab, VAR_9.arm_db_index);

err_unmap_set:
 if (VAR_6)
  FUNC_8(FUNC_9(VAR_4), &FUNC_10(VAR_6)->uar,
        FUNC_10(VAR_6)->db_tab, VAR_9.set_db_index);

 return FUNC_0(VAR_12);
}
