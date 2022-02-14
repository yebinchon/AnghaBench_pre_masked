
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int daddr; int saddr; int scope; } ;
struct TYPE_4__ {TYPE_1__ dn_u; } ;
struct flowi {int mark; int oif; int iif; TYPE_2__ nl_u; } ;



__attribute__((used)) static inline int FUNC_0(struct flowi *VAR_0, struct flowi *VAR_1)
{
 return ((VAR_0->nl_u.dn_u.daddr ^ VAR_1->nl_u.dn_u.daddr) |
  (VAR_0->nl_u.dn_u.saddr ^ VAR_1->nl_u.dn_u.saddr) |
  (VAR_0->mark ^ VAR_1->mark) |
  (VAR_0->nl_u.dn_u.scope ^ VAR_1->nl_u.dn_u.scope) |
  (VAR_0->oif ^ VAR_1->oif) |
  (VAR_0->iif ^ VAR_1->iif)) == 0;
}
