
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct roff_node {scalar_t__ tok; TYPE_2__* norm; struct roff_node* parent; } ;
struct roff_man {struct roff_node* last; } ;
typedef enum roff_tok { ____Placeholder_roff_tok } roff_tok ;
typedef enum margserr { ____Placeholder_margserr } margserr ;
typedef enum argsflag { ____Placeholder_argsflag } argsflag ;
struct TYPE_6__ {int flags; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_5__ {TYPE_1__ Bl; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct roff_man*,int,int*,char*,int,char**) ;
 TYPE_3__* VAR_7 ;

enum margserr
FUNC_1(struct roff_man *VAR_8, int VAR_9, int *VAR_10,
 char *VAR_11, enum roff_tok VAR_12, char **VAR_13)
{
 struct roff_node *VAR_14;
 enum argsflag VAR_15;

 VAR_15 = VAR_12 == VAR_6 ? VAR_0 : VAR_7[VAR_12 - VAR_4].flags;
 if (VAR_12 == VAR_5) {
  for (VAR_14 = VAR_8->last; VAR_14 != ((void*)0); VAR_14 = VAR_14->parent) {
   if (VAR_14->tok != VAR_3)
    continue;
   if (VAR_14->norm->Bl.type == VAR_2)
    VAR_15 = VAR_1;
   break;
  }
 }

 return FUNC_0(VAR_8, VAR_9, VAR_10, VAR_11, VAR_15, VAR_13);
}
