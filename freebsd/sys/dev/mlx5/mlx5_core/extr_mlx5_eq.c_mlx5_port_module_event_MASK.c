
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx5_eqe_port_module_event {scalar_t__ error_type; scalar_t__ module_status; scalar_t__ module; } ;
struct TYPE_4__ {struct mlx5_eqe_port_module_event port_module_event; } ;
struct mlx5_eqe {TYPE_1__ data; } ;
struct TYPE_5__ {int * error_counters; int * status_counters; } ;
struct TYPE_6__ {TYPE_2__ pme_stats; } ;
struct mlx5_core_dev {unsigned int* module_status; TYPE_3__ priv; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

 unsigned int VAR_2 ;


 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (struct mlx5_core_dev*,char*,unsigned int,int ,unsigned int) ;
 int FUNC_1 (struct mlx5_core_dev*,char*,unsigned int,...) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static void FUNC_3(struct mlx5_core_dev *VAR_5,
       struct mlx5_eqe *VAR_6)
{
 unsigned int VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;
 struct mlx5_eqe_port_module_event *VAR_10;

 VAR_10 = &VAR_6->data.port_module_event;

 VAR_7 = (unsigned int)VAR_10->module;
 VAR_8 = (unsigned int)VAR_10->module_status &
     VAR_4;
 VAR_9 = (unsigned int)VAR_10->error_type &
     VAR_3;

 if (VAR_8 < VAR_2)
  VAR_5->priv.pme_stats.status_counters[VAR_8]++;
 switch (VAR_8) {
 case 129:
  FUNC_1(VAR_5,
      "Module %u, status: plugged and enabled\n",
      VAR_7);
  break;

 case 128:
  FUNC_1(VAR_5,
      "Module %u, status: unplugged\n", VAR_7);
  break;

 case 130:
  FUNC_0(VAR_5,
      "Module %u, status: error, %s (%d)\n",
      VAR_7,
      FUNC_2(VAR_9),
      VAR_9);
  if (VAR_9 < VAR_1)
   VAR_5->priv.pme_stats.error_counters[VAR_9]++;
  break;

 default:
  FUNC_1(VAR_5,
      "Module %u, unknown status %d\n", VAR_7, VAR_8);
 }

 if (VAR_7 < VAR_0)
  VAR_5->module_status[VAR_7] = VAR_8;
}
