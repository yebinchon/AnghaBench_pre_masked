
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_core_dev {TYPE_1__* sniffer_tx_root_ns; } ;
struct fs_prio {int dummy; } ;
struct TYPE_2__ {int ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct fs_prio*) ;
 int VAR_2 ;
 int FUNC_1 (struct fs_prio*) ;
 TYPE_1__* FUNC_2 (struct mlx5_core_dev*,int ,int ) ;
 struct fs_prio* FUNC_3 (int *,int ,int,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct mlx5_core_dev *VAR_3)
{
 struct fs_prio *VAR_4;

 VAR_3->sniffer_tx_root_ns = FUNC_2(VAR_3, VAR_1,
       VAR_2);
 if (!VAR_3->sniffer_tx_root_ns)
  return -VAR_0;


 VAR_4 = FUNC_3(&VAR_3->sniffer_tx_root_ns->ns, 0, 1,
         "sniffer_prio", 0);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);
 else
  return 0;
}
