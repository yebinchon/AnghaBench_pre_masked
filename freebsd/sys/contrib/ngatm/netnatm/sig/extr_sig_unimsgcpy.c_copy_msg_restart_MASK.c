
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uni_restart {int unrec; int restart; int connid; } ;


 scalar_t__ FUNC_0 (int ) ;

void
FUNC_1(struct uni_restart *VAR_0, struct uni_restart *VAR_1)
{
 if(FUNC_0(VAR_0->connid))
  VAR_1->connid = VAR_0->connid;
 if(FUNC_0(VAR_0->restart))
  VAR_1->restart = VAR_0->restart;
 if(FUNC_0(VAR_0->unrec))
  VAR_1->unrec = VAR_0->unrec;
}
