
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ifindex; } ;
struct sel_netif {int list; TYPE_1__ nsec; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int * VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_2(struct sel_netif *VAR_4)
{
 int VAR_5;

 if (VAR_3 >= VAR_1)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_4->nsec.ifindex);
 FUNC_0(&VAR_4->list, &VAR_2[VAR_5]);
 VAR_3++;

 return 0;
}
