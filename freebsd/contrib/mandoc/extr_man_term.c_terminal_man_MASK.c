
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct termp {size_t defindent; scalar_t__ synopsisonly; int flags; int defrmargin; int maxrmargin; TYPE_1__* tcol; } ;
struct roff_node {scalar_t__ tok; scalar_t__ type; TYPE_4__* child; int string; struct roff_node* next; } ;
struct roff_meta {TYPE_2__* first; } ;
struct mtermp {size_t lmargincur; int pardist; void* offset; void** lmargin; } ;
typedef int mt ;
struct TYPE_8__ {TYPE_3__* next; struct roff_node* child; } ;
struct TYPE_7__ {struct roff_node* child; } ;
struct TYPE_6__ {struct roff_node* child; } ;
struct TYPE_5__ {int rmargin; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mtermp*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct termp*,struct mtermp*,struct roff_node*,struct roff_meta const*) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 (struct termp*,int ,int ,struct roff_meta const*) ;
 int FUNC_4 (struct termp*) ;
 void* FUNC_5 (struct termp*,int) ;
 int FUNC_6 (struct termp*) ;
 int FUNC_7 (struct termp*,char*) ;

void
FUNC_8(void *VAR_5, const struct roff_meta *VAR_6)
{
 struct mtermp VAR_7;
 struct termp *VAR_8;
 struct roff_node *VAR_9, *VAR_10, *VAR_11;
 size_t VAR_12;

 VAR_8 = (struct termp *)VAR_5;
 VAR_12 = VAR_8->defindent;
 if (VAR_8->synopsisonly == 0 && VAR_8->defindent == 0)
  VAR_8->defindent = 7;
 VAR_8->tcol->rmargin = VAR_8->maxrmargin = VAR_8->defrmargin;
 FUNC_7(VAR_8, ((void*)0));
 FUNC_7(VAR_8, "T");
 FUNC_7(VAR_8, ".5i");

 FUNC_0(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.lmargin[VAR_7.lmargincur] = FUNC_5(VAR_8, VAR_8->defindent);
 VAR_7.offset = FUNC_5(VAR_8, VAR_8->defindent);
 VAR_7.pardist = 1;

 VAR_9 = VAR_6->first->child;
 if (VAR_8->synopsisonly) {
  for (VAR_11 = ((void*)0); VAR_9 != ((void*)0); VAR_9 = VAR_9->next) {
   if (VAR_9->tok != VAR_0)
    continue;
   VAR_10 = VAR_9->child->child;
   if (VAR_10->type != VAR_1)
    continue;
   if (FUNC_2(VAR_10->string, "SYNOPSIS") == 0)
    break;
   if (VAR_11 == ((void*)0) && FUNC_2(VAR_10->string, "NAME") == 0)
    VAR_11 = VAR_9;
  }
  if (VAR_9 == ((void*)0))
   VAR_9 = VAR_11;
  VAR_8->flags |= VAR_2;
  if (VAR_9 != ((void*)0) && (VAR_9 = VAR_9->child->next->child) != ((void*)0))
   FUNC_1(VAR_8, &VAR_7, VAR_9, VAR_6);
  FUNC_6(VAR_8);
 } else {
  FUNC_3(VAR_8, VAR_4, VAR_3, VAR_6);
  VAR_8->flags |= VAR_2;
  if (VAR_9 != ((void*)0))
   FUNC_1(VAR_8, &VAR_7, VAR_9, VAR_6);
  FUNC_4(VAR_8);
 }
 VAR_8->defindent = VAR_12;
}
