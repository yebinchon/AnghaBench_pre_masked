
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef void* tree ;
struct occurrence {int num_divisions; scalar_t__ bb; struct occurrence* next; struct occurrence* children; void* recip_def; void* recip_def_stmt; scalar_t__ bb_has_division; } ;
struct TYPE_9__ {scalar_t__ bb; } ;
typedef TYPE_1__ block_stmt_iterator ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (void*) ;
 TYPE_1__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__) ;
 int FUNC_3 (TYPE_1__*,void*,int ) ;
 int FUNC_4 (TYPE_1__*,void*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__) ;
 void* FUNC_7 (int ,int ,void*,int ) ;
 int FUNC_8 (void*) ;
 int VAR_4 ;
 int FUNC_9 (int ,void*,int ,void*) ;
 int FUNC_10 (int ,void*) ;
 void* FUNC_11 (void*,char*) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_12 (block_stmt_iterator *VAR_6, struct occurrence *VAR_7,
      tree VAR_8, tree VAR_9, int VAR_10)
{
  tree VAR_11, VAR_12;
  block_stmt_iterator VAR_13;
  struct occurrence *VAR_14;

  if (!VAR_9
      && (VAR_7->bb_has_division || !VAR_4)
      && VAR_7->num_divisions >= VAR_10)
    {

      VAR_11 = FUNC_0 (VAR_8);
      VAR_9 = FUNC_11 (VAR_11, "reciptmp");
      VAR_12 = FUNC_7 (VAR_2, VAR_5, VAR_9,
           FUNC_9 (VAR_3, VAR_11, FUNC_8 (VAR_11),
          VAR_8));


      if (VAR_7->bb_has_division)
        {

          VAR_13 = FUNC_1 (VAR_7->bb);
          while (!FUNC_2 (VAR_13) && !FUNC_10 (FUNC_6 (VAR_13), VAR_8))
     FUNC_5 (&VAR_13);

          FUNC_4 (&VAR_13, VAR_12, VAR_1);
        }
      else if (VAR_6 && VAR_7->bb == VAR_6->bb)
        {




          FUNC_3 (VAR_6, VAR_12, VAR_0);
        }
      else
        {

          VAR_13 = FUNC_1 (VAR_7->bb);
          FUNC_4 (&VAR_13, VAR_12, VAR_1);
        }

      VAR_7->recip_def_stmt = VAR_12;
    }

  VAR_7->recip_def = VAR_9;
  for (VAR_14 = VAR_7->children; VAR_14; VAR_14 = VAR_14->next)
    FUNC_12 (VAR_6, VAR_14, VAR_8, VAR_9, VAR_10);
}
