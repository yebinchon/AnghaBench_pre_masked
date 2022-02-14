
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int dev; int rt_next; } ;
struct TYPE_6__ {TYPE_4__ dst; } ;
struct TYPE_5__ {scalar_t__ fl4_dst; scalar_t__ fl4_src; scalar_t__ iif; scalar_t__ oif; scalar_t__ mark; int fl4_tos; } ;
struct rtable {TYPE_2__ u; TYPE_1__ fl; } ;
struct net {int dummy; } ;
struct flowi {scalar_t__ fl4_dst; scalar_t__ fl4_src; scalar_t__ oif; scalar_t__ mark; int fl4_tos; } ;
struct TYPE_7__ {int chain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (struct net*,struct rtable**,struct flowi const*) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ,struct net*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct rtable* FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct net*) ;
 int FUNC_9 (struct net*) ;
 unsigned int FUNC_10 (scalar_t__,scalar_t__,scalar_t__,int ) ;
 TYPE_3__* VAR_5 ;
 int FUNC_11 (struct rtable*) ;

int FUNC_12(struct net *VAR_6, struct rtable **VAR_7,
     const struct flowi *VAR_8)
{
 unsigned VAR_9;
 struct rtable *VAR_10;

 if (!FUNC_8(VAR_6))
  goto slow_output;

 VAR_9 = FUNC_10(VAR_8->fl4_dst, VAR_8->fl4_src, VAR_8->oif, FUNC_9(VAR_6));

 FUNC_6();
 for (VAR_10 = FUNC_5(VAR_5[VAR_9].chain); VAR_10;
  VAR_10 = FUNC_5(VAR_10->u.dst.rt_next)) {
  if (VAR_10->fl.fl4_dst == VAR_8->fl4_dst &&
      VAR_10->fl.fl4_src == VAR_8->fl4_src &&
      VAR_10->fl.iif == 0 &&
      VAR_10->fl.oif == VAR_8->oif &&
      VAR_10->fl.mark == VAR_8->mark &&
      !((VAR_10->fl.fl4_tos ^ VAR_8->fl4_tos) &
       (VAR_0 | VAR_1)) &&
      FUNC_4(FUNC_1(VAR_10->u.dst.dev), VAR_6) &&
      !FUNC_11(VAR_10)) {
   FUNC_2(&VAR_10->u.dst, VAR_2);
   FUNC_0(VAR_3);
   FUNC_7();
   *VAR_7 = VAR_10;
   return 0;
  }
  FUNC_0(VAR_4);
 }
 FUNC_7();

slow_output:
 return FUNC_3(VAR_6, VAR_7, VAR_8);
}
