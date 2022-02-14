
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct roff_node {int flags; scalar_t__ type; size_t tok; struct roff_node* parent; } ;
struct roff_man {struct roff_node* last; } ;
typedef enum roff_tok { ____Placeholder_roff_tok } roff_tok ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct roff_node*,struct roff_node*) ;
 int FUNC_1 (int ,int,int,char*,int ,int ) ;
 int FUNC_2 (struct roff_man*,int,int,int,struct roff_node*) ;
 TYPE_1__* FUNC_3 (size_t) ;
 int * VAR_6 ;

__attribute__((used)) static int
FUNC_4(struct roff_man *VAR_7, enum roff_tok VAR_8, int VAR_9, int VAR_10,
 struct roff_node *VAR_11)
{
 struct roff_node *VAR_12;
 int VAR_13;

 if (VAR_11->flags & VAR_3)
  return 0;

 VAR_13 = 0;
 for (VAR_12 = VAR_7->last; VAR_12 != ((void*)0) && VAR_12 != VAR_11; VAR_12 = VAR_12->parent) {
  if (VAR_12->flags & VAR_2)
   continue;
  if (VAR_12->type == VAR_4 &&
      FUNC_3(VAR_12->tok)->flags & VAR_1) {
   VAR_13 = 1;
   FUNC_0(VAR_7->last, VAR_11);
   if (VAR_11->type == VAR_5)
    VAR_11->flags |= VAR_2;
   else if ( ! (VAR_11->flags & VAR_2)) {
    FUNC_1(VAR_0,
        VAR_9, VAR_10, "%s breaks %s",
        VAR_6[VAR_8], VAR_6[VAR_12->tok]);
    FUNC_2(VAR_7, VAR_9, VAR_10,
        VAR_8, VAR_11);
   }
  }
 }
 return VAR_13;
}
