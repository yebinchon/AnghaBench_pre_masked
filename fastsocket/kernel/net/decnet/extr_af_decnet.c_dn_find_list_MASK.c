
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct hlist_head {int dummy; } ;
struct TYPE_2__ {int sdn_flags; } ;
struct dn_scp {int addrloc; TYPE_1__ addr; } ;


 struct dn_scp* FUNC_0 (struct sock*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 struct hlist_head* VAR_2 ;
 struct hlist_head VAR_3 ;
 scalar_t__ FUNC_1 (struct hlist_head*) ;
 size_t FUNC_2 (int ) ;

__attribute__((used)) static struct hlist_head *FUNC_3(struct sock *VAR_4)
{
 struct dn_scp *VAR_5 = FUNC_0(VAR_4);

 if (VAR_5->addr.sdn_flags & VAR_1)
  return FUNC_1(&VAR_3) ? &VAR_3 : ((void*)0);

 return &VAR_2[FUNC_2(VAR_5->addrloc) & VAR_0];
}
