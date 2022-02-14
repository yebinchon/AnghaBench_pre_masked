
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int * addr32; } ;
struct TYPE_7__ {TYPE_5__ mask; TYPE_5__ addr; } ;
struct TYPE_8__ {int tblname; TYPE_1__ a; int ifname; } ;
struct TYPE_9__ {int type; TYPE_2__ v; int iflags; } ;
struct TYPE_10__ {scalar_t__ neg; TYPE_3__ addr; } ;
struct pf_rule {TYPE_4__ dst; } ;







 int FUNC_0 (TYPE_5__*,TYPE_5__*,int) ;
 int FUNC_1 (int ,int ) ;

int
FUNC_2(struct pf_rule *VAR_0, struct pf_rule *VAR_1)
{
 if (VAR_0->dst.neg != VAR_1->dst.neg ||
     VAR_0->dst.addr.type != VAR_1->dst.addr.type)
  return (1);





 switch (VAR_0->dst.addr.type) {
 case 132:
  if (FUNC_0(&VAR_0->dst.addr.v.a.addr, &VAR_1->dst.addr.v.a.addr,
      sizeof(VAR_0->dst.addr.v.a.addr)) ||
      FUNC_0(&VAR_0->dst.addr.v.a.mask, &VAR_1->dst.addr.v.a.mask,
      sizeof(VAR_0->dst.addr.v.a.mask)) ||
      (VAR_0->dst.addr.v.a.addr.addr32[0] == 0 &&
      VAR_0->dst.addr.v.a.addr.addr32[1] == 0 &&
      VAR_0->dst.addr.v.a.addr.addr32[2] == 0 &&
      VAR_0->dst.addr.v.a.addr.addr32[3] == 0))
   return (1);
  return (0);
 case 131:
  if (FUNC_1(VAR_0->dst.addr.v.ifname, VAR_1->dst.addr.v.ifname) != 0 ||
      VAR_0->dst.addr.iflags != VAR_1->dst.addr.iflags ||
      FUNC_0(&VAR_0->dst.addr.v.a.mask, &VAR_1->dst.addr.v.a.mask,
      sizeof(VAR_0->dst.addr.v.a.mask)))
   return (1);
  return (0);
 case 130:
 case 128:
  return (0);
 case 129:
  return (FUNC_1(VAR_0->dst.addr.v.tblname, VAR_1->dst.addr.v.tblname));
 }
 return (1);
}
