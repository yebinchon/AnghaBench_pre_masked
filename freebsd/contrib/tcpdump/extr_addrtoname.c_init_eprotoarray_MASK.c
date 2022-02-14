
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hnamemem {int addr; struct hnamemem* nxt; scalar_t__ name; } ;
typedef int netdissect_options ;
struct TYPE_2__ {int p; scalar_t__ s; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 struct hnamemem* VAR_2 ;
 int FUNC_0 (int ) ;
 struct hnamemem* FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(netdissect_options *VAR_3)
{
 register int VAR_4;
 register struct hnamemem *VAR_5;

 for (VAR_4 = 0; VAR_1[VAR_4].s; VAR_4++) {
  int VAR_6 = FUNC_0(VAR_1[VAR_4].p) & (VAR_0-1);
  VAR_5 = &VAR_2[VAR_6];
  while (VAR_5->name)
   VAR_5 = VAR_5->nxt;
  VAR_5->name = VAR_1[VAR_4].s;
  VAR_5->addr = FUNC_0(VAR_1[VAR_4].p);
  VAR_5->nxt = FUNC_1(VAR_3);
 }
}
