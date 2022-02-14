
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_6__ {scalar_t__ is_nested; int * record_type; } ;
typedef TYPE_1__ omp_context ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,TYPE_1__*) ;
 int FUNC_7 (scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_8 (scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_9 (scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_10 (scalar_t__,int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_11 (tree *VAR_2, tree *VAR_3, omp_context *VAR_4)
{
  tree VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

  if (VAR_4->record_type == ((void*)0))
    return;

  for (VAR_8 = FUNC_3 (VAR_4->record_type); VAR_8 ; VAR_8 = FUNC_2 (VAR_8))
    {
      VAR_6 = FUNC_0 (VAR_8);
      VAR_7 = FUNC_9 (VAR_6, VAR_4);
      if (!VAR_7 || !FUNC_1 (VAR_7))
 continue;

      VAR_5 = VAR_6;




      if (VAR_4->is_nested)
 VAR_5 = FUNC_8 (VAR_6, VAR_4);

      if (FUNC_10 (VAR_6, 1))
 {
   VAR_9 = FUNC_6 (VAR_6, VAR_4);
   VAR_5 = FUNC_5 (VAR_5);
   VAR_9 = FUNC_4 (VAR_0, VAR_1, VAR_9, VAR_5);
   FUNC_7 (VAR_9, VAR_2);
 }
      else
 {
   VAR_9 = FUNC_6 (VAR_6, VAR_4);
   VAR_9 = FUNC_4 (VAR_0, VAR_1, VAR_9, VAR_5);
   FUNC_7 (VAR_9, VAR_2);

   VAR_9 = FUNC_6 (VAR_6, VAR_4);
   VAR_9 = FUNC_4 (VAR_0, VAR_1, VAR_5, VAR_9);
   FUNC_7 (VAR_9, VAR_3);
 }
    }
}
