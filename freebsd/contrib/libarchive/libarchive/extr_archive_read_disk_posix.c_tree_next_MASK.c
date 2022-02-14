
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tree {scalar_t__ d; int visit_type; int flags; TYPE_1__* stack; TYPE_1__* current; } ;
struct TYPE_4__ {int s; } ;
struct TYPE_3__ {int flags; TYPE_2__ name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct tree*,int ,int ) ;
 int FUNC_2 (struct tree*) ;
 int FUNC_3 (struct tree*) ;
 int FUNC_4 (struct tree*) ;
 int FUNC_5 (struct tree*) ;

__attribute__((used)) static int
FUNC_6(struct tree *VAR_10)
{
 int VAR_11;

 while (VAR_10->stack != ((void*)0)) {

  if (VAR_10->d != VAR_0) {
   VAR_11 = FUNC_4(VAR_10);
   if (VAR_11 == 0)
    continue;
   return (VAR_11);
  }

  if (VAR_10->stack->flags & VAR_8) {

   VAR_10->current = VAR_10->stack;
   FUNC_1(VAR_10, VAR_10->stack->name.s,
       FUNC_0(&(VAR_10->stack->name)));


   VAR_10->stack->flags &= ~VAR_8;
   return (VAR_10->visit_type = VAR_3);
  } else if (VAR_10->stack->flags & VAR_7) {

   VAR_10->current = VAR_10->stack;
   FUNC_1(VAR_10, VAR_10->stack->name.s,
       FUNC_0(&(VAR_10->stack->name)));
   VAR_10->stack->flags &= ~VAR_7;
   VAR_11 = FUNC_3(VAR_10);
   if (VAR_11 != 0) {
    FUNC_5(VAR_10);
    VAR_10->visit_type = VAR_11;
   } else
    VAR_10->visit_type = VAR_2;
   return (VAR_10->visit_type);
  } else if (VAR_10->stack->flags & VAR_9) {
   VAR_10->stack->flags &= ~VAR_9;
   VAR_11 = FUNC_4(VAR_10);
   if (VAR_11 == 0)
    continue;
   return (VAR_11);
  } else if (VAR_10->stack->flags & VAR_6) {

   VAR_11 = FUNC_2(VAR_10);
   FUNC_5(VAR_10);
   VAR_10->visit_type = VAR_11 != 0 ? VAR_11 : VAR_1;
   return (VAR_10->visit_type);
  } else {

   FUNC_5(VAR_10);
   VAR_10->flags &= ~VAR_4;
   VAR_10->flags &= ~VAR_5;
  }
 }
 return (VAR_10->visit_type = 0);
}
