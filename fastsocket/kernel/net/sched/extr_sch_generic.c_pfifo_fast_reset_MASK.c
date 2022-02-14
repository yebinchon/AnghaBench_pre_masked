
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pfifo_fast_priv {scalar_t__ bitmap; } ;
struct TYPE_4__ {scalar_t__ qlen; } ;
struct TYPE_3__ {scalar_t__ backlog; } ;
struct Qdisc {TYPE_2__ q; TYPE_1__ qstats; } ;


 int VAR_0 ;
 int FUNC_0 (struct Qdisc*,int ) ;
 int FUNC_1 (struct pfifo_fast_priv*,int) ;
 struct pfifo_fast_priv* FUNC_2 (struct Qdisc*) ;

__attribute__((used)) static void FUNC_3(struct Qdisc* VAR_1)
{
 int VAR_2;
 struct pfifo_fast_priv *VAR_3 = FUNC_2(VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_0(VAR_1, FUNC_1(VAR_3, VAR_2));

 VAR_3->bitmap = 0;
 VAR_1->qstats.backlog = 0;
 VAR_1->q.qlen = 0;
}
