
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* tree ;
struct goto_queue_node {int repl_stmt; void* stmt; void* cont_stmt; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (void*,int) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (void*,int *) ;
 void* FUNC_5 (int ,int ,void*) ;
 void* FUNC_6 (int const,int ,void*,void*) ;
 void* FUNC_7 (int ,char*) ;
 void* VAR_2 ;
 int FUNC_8 (int) ;
 int FUNC_9 () ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_10 (struct goto_queue_node *VAR_4, tree VAR_5, tree VAR_6,
         tree *VAR_7)
{
  tree VAR_8 = FUNC_1 (VAR_4->stmt, 0);
  tree VAR_9;

  if (VAR_8)
    {
      switch (FUNC_0 (VAR_8))
 {
 case 128:
   if (!*VAR_7)
     *VAR_7 = VAR_8;
   else
     FUNC_8 (*VAR_7 == VAR_8);
   VAR_4->cont_stmt = VAR_4->stmt;
   break;

 case 129:
   {
     tree VAR_10 = FUNC_1 (VAR_8, 0);
     tree VAR_11, VAR_12 = FUNC_1 (VAR_8, 1);

     if (!*VAR_7)
       {
  if (FUNC_3 (FUNC_2 (VAR_10),
          FUNC_2 (VAR_2)))





    VAR_11 = VAR_10;
  else
    VAR_11 = FUNC_7 (FUNC_2 (VAR_12), "rettmp");
  *VAR_7 = VAR_11;
       }
     else
       VAR_11 = *VAR_7;

     VAR_9 = FUNC_6 (129, FUNC_2 (VAR_11), VAR_11, VAR_12);
     FUNC_4 (VAR_9, &VAR_4->repl_stmt);

     if (VAR_11 == VAR_10)
       VAR_9 = VAR_10;
     else
       VAR_9 = FUNC_6 (129, FUNC_2 (VAR_10), VAR_10, VAR_11);
     VAR_4->cont_stmt = FUNC_5 (VAR_1, VAR_3, VAR_9);
   }

 default:
   FUNC_9 ();
 }
    }
  else
    {

      VAR_4->cont_stmt = VAR_4->stmt;
    }

  if (VAR_6)
    FUNC_4 (VAR_6, &VAR_4->repl_stmt);

  VAR_9 = FUNC_5 (VAR_0, VAR_3, VAR_5);
  FUNC_4 (VAR_9, &VAR_4->repl_stmt);
}
