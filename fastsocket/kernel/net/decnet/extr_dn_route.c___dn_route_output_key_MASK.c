
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct flowi {scalar_t__ fld_src; scalar_t__ fld_dst; scalar_t__ mark; scalar_t__ oif; } ;
struct dst_entry {int dn_next; } ;
struct TYPE_5__ {struct dst_entry dst; } ;
struct TYPE_4__ {scalar_t__ fld_dst; scalar_t__ fld_src; scalar_t__ mark; scalar_t__ iif; scalar_t__ oif; } ;
struct dn_route {TYPE_2__ u; TYPE_1__ fl; } ;
struct TYPE_6__ {int chain; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (struct dst_entry**,struct flowi const*,int) ;
 TYPE_3__* VAR_1 ;
 int FUNC_2 (struct dst_entry*,int ) ;
 int VAR_2 ;
 struct dn_route* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct dst_entry **VAR_3, const struct flowi *VAR_4, int VAR_5)
{
 unsigned VAR_6 = FUNC_0(VAR_4->fld_src, VAR_4->fld_dst);
 struct dn_route *VAR_7 = ((void*)0);

 if (!(VAR_5 & VAR_0)) {
  FUNC_4();
  for(VAR_7 = FUNC_3(VAR_1[VAR_6].chain); VAR_7;
   VAR_7 = FUNC_3(VAR_7->u.dst.dn_next)) {
   if ((VAR_4->fld_dst == VAR_7->fl.fld_dst) &&
       (VAR_4->fld_src == VAR_7->fl.fld_src) &&
       (VAR_4->mark == VAR_7->fl.mark) &&
       (VAR_7->fl.iif == 0) &&
       (VAR_7->fl.oif == VAR_4->oif)) {
    FUNC_2(&VAR_7->u.dst, VAR_2);
    FUNC_5();
    *VAR_3 = &VAR_7->u.dst;
    return 0;
   }
  }
  FUNC_5();
 }

 return FUNC_1(VAR_3, VAR_4, VAR_5);
}
