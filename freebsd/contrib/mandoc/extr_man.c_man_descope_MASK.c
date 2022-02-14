
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct roff_man {int flags; TYPE_1__* last; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {scalar_t__ type; int tok; } ;
struct TYPE_4__ {int tok; TYPE_2__* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (char*) ;
 TYPE_3__* FUNC_1 (int ) ;
 int FUNC_2 (struct roff_man*,TYPE_2__*) ;
 int FUNC_3 (struct roff_man*,int,int,int ) ;

void
FUNC_4(struct roff_man *VAR_5, int VAR_6, int VAR_7, char *VAR_8)
{


 if (VAR_8 != ((void*)0) && FUNC_0(VAR_8) != ((void*)0))
  return;







 if (VAR_5->flags & VAR_1) {
  while (VAR_5->last->parent->type != VAR_3 &&
      FUNC_1(VAR_5->last->parent->tok)->flags & VAR_2)
   FUNC_2(VAR_5, VAR_5->last->parent);
  VAR_5->flags &= ~VAR_1;
 }
 if ( ! (VAR_5->flags & VAR_0))
  return;
 FUNC_2(VAR_5, VAR_5->last->parent);
 FUNC_3(VAR_5, VAR_6, VAR_7, VAR_5->last->tok);
 VAR_5->flags &= ~(VAR_0 | VAR_4);
}
