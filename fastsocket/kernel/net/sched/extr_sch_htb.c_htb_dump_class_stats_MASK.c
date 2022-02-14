
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {int ctokens; int tokens; } ;
struct TYPE_11__ {int qlen; } ;
struct TYPE_9__ {TYPE_2__* q; } ;
struct TYPE_10__ {TYPE_3__ leaf; } ;
struct htb_class {TYPE_6__ xstats; TYPE_5__ qstats; int rate_est; int bstats; int ctokens; int tokens; TYPE_4__ un; int level; } ;
struct gnet_dump {int dummy; } ;
struct Qdisc {int dummy; } ;
struct TYPE_7__ {int qlen; } ;
struct TYPE_8__ {TYPE_1__ q; } ;


 int FUNC_0 (struct gnet_dump*,TYPE_6__*,int) ;
 scalar_t__ FUNC_1 (struct gnet_dump*,int *) ;
 scalar_t__ FUNC_2 (struct gnet_dump*,TYPE_5__*) ;
 scalar_t__ FUNC_3 (struct gnet_dump*,int *) ;

__attribute__((used)) static int
FUNC_4(struct Qdisc *VAR_0, unsigned long VAR_1, struct gnet_dump *VAR_2)
{
 struct htb_class *VAR_3 = (struct htb_class *)VAR_1;

 if (!VAR_3->level && VAR_3->un.leaf.q)
  VAR_3->qstats.qlen = VAR_3->un.leaf.q->q.qlen;
 VAR_3->xstats.tokens = VAR_3->tokens;
 VAR_3->xstats.ctokens = VAR_3->ctokens;

 if (FUNC_1(VAR_2, &VAR_3->bstats) < 0 ||
     FUNC_3(VAR_2, &VAR_3->rate_est) < 0 ||
     FUNC_2(VAR_2, &VAR_3->qstats) < 0)
  return -1;

 return FUNC_0(VAR_2, &VAR_3->xstats, sizeof(VAR_3->xstats));
}
