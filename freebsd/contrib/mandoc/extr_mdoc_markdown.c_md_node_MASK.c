
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct roff_node {scalar_t__ type; int flags; int tok; scalar_t__ end; TYPE_1__* body; int * child; int string; } ;
struct md_act {int (* pre ) (struct roff_node*) ;int (* post ) (struct roff_node*) ;scalar_t__ (* cond ) (struct roff_node*) ;} ;
struct TYPE_2__ {int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;


 struct md_act* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct roff_node*) ;
 int FUNC_3 (struct roff_node*) ;
 int FUNC_4 (int ) ;
 int VAR_15 ;
 scalar_t__ FUNC_5 (struct roff_node*) ;
 int FUNC_6 (struct roff_node*) ;
 int FUNC_7 (struct roff_node*) ;

__attribute__((used)) static void
FUNC_8(struct roff_node *VAR_16)
{
 const struct md_act *VAR_17;
 int VAR_18, VAR_19;

 if (VAR_16->type == VAR_12 || VAR_16->flags & VAR_11)
  return;

 if (VAR_15 & VAR_3)
  VAR_15 &= ~(VAR_2 | VAR_4);
 else if (VAR_15 & VAR_5 && VAR_16->flags & VAR_10)
  VAR_15 |= VAR_2;

 VAR_17 = ((void*)0);
 VAR_18 = 0;
 VAR_19 = 1;
 VAR_16->flags &= ~VAR_9;

 if (VAR_16->type == VAR_13) {
  if (VAR_16->flags & VAR_7)
   VAR_15 &= ~(VAR_5 | VAR_6);
  else if (VAR_15 & VAR_1)
   VAR_15 |= VAR_6;
  FUNC_4(VAR_16->string);
  if (VAR_16->flags & VAR_8)
   VAR_15 &= ~(VAR_5 | VAR_6);
  else if (VAR_15 & VAR_1)
   VAR_15 |= VAR_5;
 } else if (VAR_16->tok < VAR_14) {
  switch (VAR_16->tok) {
  case 129:
   VAR_19 = FUNC_3(VAR_16);
   break;
  case 128:
   VAR_19 = FUNC_2(VAR_16);
   break;
  default:
   VAR_19 = 0;
   break;
  }
 } else {
  VAR_17 = FUNC_0(VAR_16->tok);
  VAR_18 = VAR_17->cond == ((void*)0) || (*VAR_17->cond)(VAR_16);
  if (VAR_18 && VAR_17->pre != ((void*)0) &&
      (VAR_16->end == VAR_0 || VAR_16->child != ((void*)0)))
   VAR_19 = (*VAR_17->pre)(VAR_16);
 }

 if (VAR_19 && VAR_16->child != ((void*)0))
  FUNC_1(VAR_16->child);

 if (VAR_16->flags & VAR_9)
  return;

 if (VAR_18 && VAR_17->post != ((void*)0))
  (*VAR_17->post)(VAR_16);

 if (VAR_16->end != VAR_0)
  VAR_16->body->flags |= VAR_9;
}
