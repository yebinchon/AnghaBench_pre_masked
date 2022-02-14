
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct roff_man {int roff; int flags; TYPE_1__* last; } ;
struct TYPE_2__ {scalar_t__ type; int line; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct roff_man*,int,char*,int) ;
 int FUNC_1 (struct roff_man*,int,char*,int) ;
 scalar_t__ FUNC_2 (int ,char*,int*) ;
 scalar_t__ FUNC_3 (int ,char*) ;

int
FUNC_4(struct roff_man *VAR_3, int VAR_4, char *VAR_5, int VAR_6)
{

 if (VAR_3->last->type != VAR_2 || VAR_4 > VAR_3->last->line)
  VAR_3->flags |= VAR_0;







 if (FUNC_3(VAR_3->roff, "nS"))
  VAR_3->flags |= VAR_1;
 else
  VAR_3->flags &= ~VAR_1;

 return FUNC_2(VAR_3->roff, VAR_5, &VAR_6) ?
     FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6) :
     FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);
}
