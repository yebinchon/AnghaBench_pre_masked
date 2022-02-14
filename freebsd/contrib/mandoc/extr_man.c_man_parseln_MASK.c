
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct roff_man {int roff; int flags; TYPE_1__* last; } ;
struct TYPE_2__ {scalar_t__ type; int line; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct roff_man*,int,char*,int) ;
 int FUNC_1 (struct roff_man*,int,char*,int) ;
 scalar_t__ FUNC_2 (int ,char*,int*) ;

int
FUNC_3(struct roff_man *VAR_2, int VAR_3, char *VAR_4, int VAR_5)
{

 if (VAR_2->last->type != VAR_1 || VAR_3 > VAR_2->last->line)
  VAR_2->flags |= VAR_0;

 return FUNC_2(VAR_2->roff, VAR_4, &VAR_5) ?
     FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5) :
     FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
}
