
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tag {int dummy; } ;
struct roff_node {scalar_t__ type; } ;
struct roff_meta {TYPE_1__* first; } ;
struct html {int oflags; } ;
struct TYPE_2__ {struct roff_node* child; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct roff_meta const*,struct html*) ;
 int FUNC_1 (struct roff_meta const*,struct html*) ;
 int FUNC_2 (struct html*,struct roff_node*) ;
 int FUNC_3 (struct html*) ;
 int FUNC_4 (struct roff_meta const*,struct html*) ;
 int FUNC_5 (struct roff_meta const*,struct roff_node*,struct html*) ;
 struct tag* FUNC_6 (struct html*,int ,char*,...) ;
 int FUNC_7 (struct html*,struct tag*) ;

void
FUNC_8(void *VAR_6, const struct roff_meta *VAR_7)
{
 struct html *VAR_8;
 struct roff_node *VAR_9;
 struct tag *VAR_10;

 VAR_8 = (struct html *)VAR_6;
 VAR_9 = VAR_7->first->child;

 if ((VAR_8->oflags & VAR_0) == 0) {
  FUNC_3(VAR_8);
  FUNC_6(VAR_8, VAR_5, "");
  if (VAR_9 != ((void*)0) && VAR_9->type == VAR_1)
   FUNC_2(VAR_8, VAR_9);
  VAR_10 = FUNC_6(VAR_8, VAR_4, "");
  FUNC_4(VAR_7, VAR_8);
  FUNC_7(VAR_8, VAR_10);
  FUNC_6(VAR_8, VAR_2, "");
 }

 FUNC_1(VAR_7, VAR_8);
 VAR_10 = FUNC_6(VAR_8, VAR_3, "c", "manual-text");
 FUNC_5(VAR_7, VAR_9, VAR_8);
 FUNC_7(VAR_8, VAR_10);
 FUNC_0(VAR_7, VAR_8);
 FUNC_7(VAR_8, ((void*)0));
}
