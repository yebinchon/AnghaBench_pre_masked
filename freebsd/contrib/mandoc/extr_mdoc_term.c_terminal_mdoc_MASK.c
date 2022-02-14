
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct termp {size_t defindent; int flags; scalar_t__ synopsisonly; int defrmargin; int maxrmargin; TYPE_1__* tcol; } ;
struct roff_node {scalar_t__ tok; scalar_t__ sec; scalar_t__ type; int flags; struct roff_node* next; TYPE_4__* child; } ;
struct roff_meta {TYPE_2__* first; } ;
struct TYPE_8__ {TYPE_3__* next; } ;
struct TYPE_7__ {struct roff_node* child; } ;
struct TYPE_6__ {struct roff_node* child; } ;
struct TYPE_5__ {int rmargin; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct termp*,int *,struct roff_meta const*,struct roff_node*) ;
 int FUNC_1 (struct termp*,int ,int ,struct roff_meta const*) ;
 int FUNC_2 (struct termp*) ;
 int FUNC_3 (struct termp*) ;
 int FUNC_4 (struct termp*,char*) ;
 int FUNC_5 (struct termp*) ;

void
FUNC_6(void *VAR_8, const struct roff_meta *VAR_9)
{
 struct roff_node *VAR_10, *VAR_11;
 struct termp *VAR_12;
 size_t VAR_13;

 VAR_12 = (struct termp *)VAR_8;
 VAR_12->tcol->rmargin = VAR_12->maxrmargin = VAR_12->defrmargin;
 FUNC_4(VAR_12, ((void*)0));
 FUNC_4(VAR_12, "T");
 FUNC_4(VAR_12, ".5i");

 VAR_10 = VAR_9->first->child;
 if (VAR_12->synopsisonly) {
  for (VAR_11 = ((void*)0); VAR_10 != ((void*)0); VAR_10 = VAR_10->next) {
   if (VAR_10->tok != VAR_0)
    continue;
   if (VAR_10->sec == VAR_4)
    break;
   if (VAR_11 == ((void*)0) && VAR_10->sec == VAR_3)
    VAR_11 = VAR_10;
  }
  if (VAR_10 == ((void*)0))
   VAR_10 = VAR_11;
  VAR_12->flags |= VAR_5;
  if (VAR_10 != ((void*)0) && (VAR_10 = VAR_10->child->next->child) != ((void*)0))
   FUNC_0(VAR_12, ((void*)0), VAR_9, VAR_10);
  FUNC_3(VAR_12);
 } else {
  VAR_13 = VAR_12->defindent;
  if (VAR_12->defindent == 0)
   VAR_12->defindent = 5;
  FUNC_1(VAR_12, VAR_7, VAR_6, VAR_9);
  while (VAR_10 != ((void*)0) &&
      (VAR_10->type == VAR_2 ||
       VAR_10->flags & VAR_1))
   VAR_10 = VAR_10->next;
  if (VAR_10 != ((void*)0)) {
   if (VAR_10->tok != VAR_0)
    FUNC_5(VAR_12);
   FUNC_0(VAR_12, ((void*)0), VAR_9, VAR_10);
  }
  FUNC_2(VAR_12);
  VAR_12->defindent = VAR_13;
 }
}
