
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct slave_list {int dummy; } ;
struct resource_allocator {int* quota; int* guaranteed; int* allocated; int res_free; int* res_port_free; int res_reserved; int * res_port_rsvd; int alloc_lock; } ;
struct mlx4_slaves_pport {int slaves; } ;
struct TYPE_9__ {struct resource_allocator* res_alloc; int lock; int * res_tree; TYPE_2__* slave_list; } ;
struct TYPE_10__ {TYPE_3__ res_tracker; } ;
struct TYPE_11__ {TYPE_4__ master; } ;
struct mlx4_priv {TYPE_5__ mfunc; } ;
struct TYPE_7__ {int max_counters; int num_ports; scalar_t__ reserved_mtts; scalar_t__ num_mtts; scalar_t__ reserved_mrws; scalar_t__ num_mpts; scalar_t__ reserved_srqs; scalar_t__ num_srqs; scalar_t__ reserved_cqs; scalar_t__ num_cqs; scalar_t__ reserved_qps; scalar_t__ num_qps; } ;
struct mlx4_dev {int num_slaves; TYPE_1__ caps; TYPE_6__* persist; } ;
struct mlx4_active_ports {int ports; } ;
struct TYPE_12__ {int num_vfs; } ;
struct TYPE_8__ {int mutex; int * res_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct mlx4_dev*) ;
 int FUNC_3 (struct mlx4_dev*,struct resource_allocator*,int const,int,scalar_t__) ;
 int FUNC_4 (int*) ;
 void* FUNC_5 (int,int ) ;
 void* FUNC_6 (int,int ) ;
 int FUNC_7 (struct mlx4_dev*,char*,int) ;
 struct mlx4_active_ports FUNC_8 (struct mlx4_dev*,int) ;
 int FUNC_9 (struct mlx4_dev*) ;
 scalar_t__ FUNC_10 (struct mlx4_dev*) ;
 struct mlx4_slaves_pport FUNC_11 (struct mlx4_dev*,int) ;
 struct mlx4_priv* FUNC_12 (struct mlx4_dev*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int,int ) ;

int FUNC_16(struct mlx4_dev *VAR_9)
{
 struct mlx4_priv *VAR_10 = FUNC_12(VAR_9);
 int VAR_11, VAR_12;
 int VAR_13;
 int VAR_14 = FUNC_2(VAR_9);

 VAR_10->mfunc.master.res_tracker.slave_list =
  FUNC_6(VAR_9->num_slaves * sizeof(struct slave_list),
   VAR_1);
 if (!VAR_10->mfunc.master.res_tracker.slave_list)
  return -VAR_0;

 for (VAR_11 = 0 ; VAR_11 < VAR_9->num_slaves; VAR_11++) {
  for (VAR_13 = 0; VAR_13 < VAR_5; ++VAR_13)
   FUNC_0(&VAR_10->mfunc.master.res_tracker.
           slave_list[VAR_11].res_list[VAR_13]);
  FUNC_13(&VAR_10->mfunc.master.res_tracker.slave_list[VAR_11].mutex);
 }

 FUNC_7(VAR_9, "Started init_resource_tracker: %ld slaves\n",
   VAR_9->num_slaves);
 for (VAR_11 = 0 ; VAR_11 < VAR_5; VAR_11++)
  VAR_10->mfunc.master.res_tracker.res_tree[VAR_11] = VAR_8;

 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
  struct resource_allocator *VAR_15 =
   &VAR_10->mfunc.master.res_tracker.res_alloc[VAR_11];
  VAR_15->quota = FUNC_5((VAR_9->persist->num_vfs + 1) *
        sizeof(int), VAR_1);
  VAR_15->guaranteed = FUNC_5((VAR_9->persist->num_vfs + 1) *
      sizeof(int), VAR_1);
  if (VAR_11 == 133 || VAR_11 == 128)
   VAR_15->allocated = FUNC_6(VAR_3 *
             (VAR_9->persist->num_vfs
             + 1) *
             sizeof(int), VAR_1);
  else
   VAR_15->allocated = FUNC_6((VAR_9->persist->
       num_vfs + 1) *
             sizeof(int), VAR_1);

  if (VAR_11 == 135)
   VAR_15->res_free = VAR_9->caps.max_counters - 1;

  if (!VAR_15->quota || !VAR_15->guaranteed ||
      !VAR_15->allocated)
   goto no_mem_err;

  FUNC_14(&VAR_15->alloc_lock);
  for (VAR_13 = 0; VAR_13 < VAR_9->persist->num_vfs + 1; VAR_13++) {
   struct mlx4_active_ports VAR_16 =
    FUNC_8(VAR_9, VAR_13);
   switch (VAR_11) {
   case 130:
    FUNC_3(VAR_9, VAR_15, 130,
            VAR_13, VAR_9->caps.num_qps -
            VAR_9->caps.reserved_qps -
            FUNC_10(VAR_9));
    break;
   case 134:
    FUNC_3(VAR_9, VAR_15, 134,
            VAR_13, VAR_9->caps.num_cqs -
            VAR_9->caps.reserved_cqs);
    break;
   case 129:
    FUNC_3(VAR_9, VAR_15, 129,
            VAR_13, VAR_9->caps.num_srqs -
            VAR_9->caps.reserved_srqs);
    break;
   case 132:
    FUNC_3(VAR_9, VAR_15, 132,
            VAR_13, VAR_9->caps.num_mpts -
            VAR_9->caps.reserved_mrws);
    break;
   case 131:
    FUNC_3(VAR_9, VAR_15, 131,
            VAR_13, VAR_9->caps.num_mtts -
            VAR_9->caps.reserved_mtts);
    break;
   case 133:
    if (VAR_13 == FUNC_9(VAR_9)) {
     int VAR_17 = 0;


     for (VAR_12 = 0; VAR_12 < VAR_9->caps.num_ports;
          VAR_12++) {
      struct mlx4_slaves_pport VAR_18 =
       FUNC_11(VAR_9, VAR_12 + 1);
      unsigned VAR_19 =
       FUNC_1(VAR_18.slaves,
              VAR_9->caps.num_ports) - 1;
      if (VAR_17 < VAR_19)
       VAR_17 =
        VAR_19;
     }
     VAR_15->quota[VAR_13] =
      VAR_2 -
      2 * VAR_17;
     VAR_15->guaranteed[VAR_13] = 2;
     for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++)
      VAR_15->res_port_free[VAR_12] =
       VAR_2;
    } else {
     VAR_15->quota[VAR_13] = VAR_2;
     VAR_15->guaranteed[VAR_13] = 2;
    }
    break;
   case 128:
    if (VAR_13 == FUNC_9(VAR_9)) {
     VAR_15->quota[VAR_13] = VAR_4;
     VAR_15->guaranteed[VAR_13] = VAR_4 / 2;
     for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++)
      VAR_15->res_port_free[VAR_12] =
       VAR_15->quota[VAR_13];
    } else {
     VAR_15->quota[VAR_13] = VAR_4 / 2;
     VAR_15->guaranteed[VAR_13] = 0;
    }
    break;
   case 135:
    VAR_15->quota[VAR_13] = VAR_9->caps.max_counters;
    if (VAR_13 == FUNC_9(VAR_9))
     VAR_15->guaranteed[VAR_13] =
      VAR_6 *
      VAR_3;
    else if (VAR_13 <= VAR_14)
     VAR_15->guaranteed[VAR_13] =
      VAR_7 *
      VAR_3;
    else
     VAR_15->guaranteed[VAR_13] = 0;
    VAR_15->res_free -= VAR_15->guaranteed[VAR_13];
    break;
   default:
    break;
   }
   if (VAR_11 == 133 || VAR_11 == 128) {
    for (VAR_12 = 0; VAR_12 < VAR_9->caps.num_ports; VAR_12++)
     if (FUNC_15(VAR_12, VAR_16.ports))
      VAR_15->res_port_rsvd[VAR_12] +=
       VAR_15->guaranteed[VAR_13];
   } else {
    VAR_15->res_reserved += VAR_15->guaranteed[VAR_13];
   }
  }
 }
 FUNC_14(&VAR_10->mfunc.master.res_tracker.lock);
 return 0;

no_mem_err:
 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
  FUNC_4(VAR_10->mfunc.master.res_tracker.res_alloc[VAR_11].allocated);
  VAR_10->mfunc.master.res_tracker.res_alloc[VAR_11].allocated = ((void*)0);
  FUNC_4(VAR_10->mfunc.master.res_tracker.res_alloc[VAR_11].guaranteed);
  VAR_10->mfunc.master.res_tracker.res_alloc[VAR_11].guaranteed = ((void*)0);
  FUNC_4(VAR_10->mfunc.master.res_tracker.res_alloc[VAR_11].quota);
  VAR_10->mfunc.master.res_tracker.res_alloc[VAR_11].quota = ((void*)0);
 }
 return -VAR_0;
}
