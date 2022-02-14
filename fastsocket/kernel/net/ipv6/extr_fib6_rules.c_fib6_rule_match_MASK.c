
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct flowi {int fl6_flowlabel; int fl6_src; int fl6_dst; } ;
struct fib_rule {int dummy; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {scalar_t__ plen; int addr; } ;
struct TYPE_4__ {scalar_t__ plen; int addr; } ;
struct fib6_rule {int tclass; TYPE_3__ common; TYPE_2__ src; TYPE_1__ dst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,scalar_t__) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct fib_rule *VAR_2, struct flowi *VAR_3, int VAR_4)
{
 struct fib6_rule *VAR_5 = (struct fib6_rule *) VAR_2;

 if (VAR_5->dst.plen &&
     !FUNC_0(&VAR_3->fl6_dst, &VAR_5->dst.addr, VAR_5->dst.plen))
  return 0;






 if (VAR_5->src.plen) {
  if (VAR_4 & VAR_1) {
   if (!FUNC_0(&VAR_3->fl6_src, &VAR_5->src.addr,
            VAR_5->src.plen))
    return 0;
  } else if (!(VAR_5->common.flags & VAR_0))
   return 0;
 }

 if (VAR_5->tclass && VAR_5->tclass != ((FUNC_1(VAR_3->fl6_flowlabel) >> 20) & 0xff))
  return 0;

 return 1;
}
