
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* tree ;
struct nb_iter_bound {struct nb_iter_bound* next; void* at_stmt; void* bound; } ;
struct loop {int num; struct nb_iter_bound* bounds; } ;
typedef int double_int ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*,void*) ;
 void* FUNC_2 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (scalar_t__,char*,...) ;
 int FUNC_4 (scalar_t__,void*,int ) ;
 int FUNC_5 (int ) ;
 struct nb_iter_bound* FUNC_6 (int) ;

void
FUNC_7 (struct loop *VAR_4, tree VAR_5, tree VAR_6, tree VAR_7)
{
  struct nb_iter_bound *VAR_8 = FUNC_6 (sizeof (struct nb_iter_bound));
  double_int VAR_9 = FUNC_1 (VAR_5, VAR_6);
  tree VAR_10 = FUNC_2 (FUNC_5 (FUNC_0 (VAR_5)),
         VAR_9);

  if (VAR_2 && (VAR_3 & VAR_0))
    {
      FUNC_3 (VAR_2, "Statements after ");
      FUNC_4 (VAR_2, VAR_7, VAR_1);
      FUNC_3 (VAR_2, " are executed at most ");
      FUNC_4 (VAR_2, VAR_5, VAR_1);
      FUNC_3 (VAR_2, " (bounded by ");
      FUNC_4 (VAR_2, VAR_10, VAR_1);
      FUNC_3 (VAR_2, ") times in loop %d.\n", VAR_4->num);
    }

  VAR_8->bound = VAR_10;
  VAR_8->at_stmt = VAR_7;
  VAR_8->next = VAR_4->bounds;
  VAR_4->bounds = VAR_8;
}
