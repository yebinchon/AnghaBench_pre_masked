
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net {int * ipv4_sysctl_ping_group_range; } ;
typedef int gid_t ;
struct TYPE_2__ {int lock; } ;


 unsigned int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,unsigned int) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_2(struct net *VAR_1, gid_t *VAR_2,
       gid_t *VAR_3)
{
 gid_t *VAR_4 = VAR_1->ipv4_sysctl_ping_group_range;
 unsigned VAR_5;
 do {
  VAR_5 = FUNC_0(&VAR_0.lock);

  *VAR_2 = VAR_4[0];
  *VAR_3 = VAR_4[1];
 } while (FUNC_1(&VAR_0.lock, VAR_5));
}
