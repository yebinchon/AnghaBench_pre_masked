
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct iter_diff_data {char* fabric1_prefix; int diff_flags; char* fabric2_prefix; int fabric2; } ;
struct TYPE_9__ {scalar_t__ type; scalar_t__ smalid; scalar_t__ numports; int nodedesc; int guid; } ;
typedef TYPE_1__ ibnd_node_t ;


 int FUNC_0 (char*,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int*,struct iter_diff_data*) ;
 TYPE_1__* FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,int*,char*) ;
 int FUNC_6 (char*,char*,scalar_t__) ;

void FUNC_7(ibnd_node_t * VAR_6, void *VAR_7)
{
 struct iter_diff_data *VAR_8 = VAR_7;
 ibnd_node_t *VAR_9;
 int VAR_10 = 0;

 FUNC_0("DEBUG: fabric1_node %p\n", VAR_6);

 VAR_9 = FUNC_2(VAR_8->fabric2, VAR_6->guid);
 if (!VAR_9)
  FUNC_4(VAR_6, VAR_8->fabric1_prefix);
 else if (VAR_8->diff_flags &
   (VAR_2 | VAR_3
    | VAR_0 | VAR_1)) {

  if ((VAR_6->type == VAR_4
       && VAR_8->diff_flags & VAR_0
       && VAR_6->smalid != VAR_9->smalid) ||
      (VAR_8->diff_flags & VAR_1
       && FUNC_3(VAR_6->nodedesc, VAR_9->nodedesc,
          VAR_5))) {
   FUNC_5(VAR_6,
         ((void*)0),
         VAR_8->fabric1_prefix);
   FUNC_5(VAR_9,
         ((void*)0),
         VAR_8->fabric2_prefix);
   VAR_10++;
  }

  if (VAR_6->numports != VAR_9->numports) {
   FUNC_5(VAR_6,
         &VAR_10,
         ((void*)0));
   FUNC_6("%snumports = %d\n", VAR_8->fabric1_prefix,
          VAR_6->numports);
   FUNC_6("%snumports = %d\n", VAR_8->fabric2_prefix,
          VAR_9->numports);
   return;
  }

  FUNC_1(VAR_6, VAR_9,
      &VAR_10, VAR_8);
 }
}
