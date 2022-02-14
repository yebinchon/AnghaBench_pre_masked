
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct netprio_map {scalar_t__ priomap_len; } ;
struct netdev_priomap_info {int priomap; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {struct netdev_priomap_info priomap_data; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*,scalar_t__) ;
 int VAR_0 ;
 TYPE_1__* FUNC_2 (struct net_device*) ;
 struct netprio_map* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1)
{
 int VAR_2 = 0;
 u32 VAR_3;
 struct netprio_map *VAR_4;
 struct netdev_priomap_info *VAR_5;

 FUNC_4();
 VAR_3 = FUNC_0(&VAR_0) + 1;
 VAR_5 = &FUNC_2(VAR_1)->priomap_data;
 VAR_4 = FUNC_3(VAR_5->priomap);
 if (!VAR_4 || VAR_4->priomap_len < VAR_3)
  VAR_2 = FUNC_1(VAR_1, VAR_3);
 FUNC_5();

 return VAR_2;
}
