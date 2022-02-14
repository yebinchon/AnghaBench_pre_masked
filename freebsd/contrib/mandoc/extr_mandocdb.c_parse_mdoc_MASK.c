
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff_node {scalar_t__ tok; int flags; int type; struct roff_node* child; struct roff_node* next; } ;
struct roff_meta {int dummy; } ;
struct mpage {int dummy; } ;
struct mdoc_handler {int taboo; int mask; int (* fp ) (struct mpage*,struct roff_meta const*,struct roff_node const*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;





 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 struct mdoc_handler* VAR_4 ;
 int FUNC_1 (struct mpage*,struct roff_node*,int ,int) ;
 int FUNC_2 (struct mpage*,struct roff_meta const*,struct roff_node const*) ;

__attribute__((used)) static void
FUNC_3(struct mpage *VAR_5, const struct roff_meta *VAR_6,
 const struct roff_node *VAR_7)
{
 const struct mdoc_handler *VAR_8;

 for (VAR_7 = VAR_7->child; VAR_7 != ((void*)0); VAR_7 = VAR_7->next) {
  if (VAR_7->tok == VAR_3 || VAR_7->tok < VAR_2)
   continue;
  FUNC_0(VAR_7->tok >= VAR_0 && VAR_7->tok < VAR_1);
  VAR_8 = VAR_4 + (VAR_7->tok - VAR_0);
  if (VAR_7->flags & VAR_8->taboo)
   continue;

  switch (VAR_7->type) {
  case 130:
  case 132:
  case 129:
  case 131:
  case 128:
   if (VAR_8->fp != ((void*)0) &&
       (*VAR_8->fp)(VAR_5, VAR_6, VAR_7) == 0)
    break;
   if (VAR_8->mask)
    FUNC_1(VAR_5, VAR_7->child,
        VAR_8->mask, VAR_8->taboo);
   break;
  default:
   continue;
  }
  if (((void*)0) != VAR_7->child)
   FUNC_3(VAR_5, VAR_6, VAR_7);
 }
}
