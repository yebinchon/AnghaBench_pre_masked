
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
struct TYPE_3__ {int stmt; struct TYPE_3__* outer; } ;
typedef TYPE_1__ omp_context ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

 int FUNC_1 (int ) ;






 int const FUNC_2 (int ) ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void
FUNC_5 (tree VAR_1, omp_context *VAR_2)
{
  switch (FUNC_2 (VAR_1))
    {
    case 133:
    case 129:
    case 128:
      for (; VAR_2 != ((void*)0); VAR_2 = VAR_2->outer)
 switch (FUNC_2 (VAR_2->stmt))
   {
   case 133:
   case 129:
   case 128:
   case 131:
   case 132:
     FUNC_4 (0, "work-sharing region may not be closely nested inside "
   "of work-sharing, critical, ordered or master region");
     return;
   case 130:
     return;
   default:
     break;
   }
      break;
    case 132:
      for (; VAR_2 != ((void*)0); VAR_2 = VAR_2->outer)
 switch (FUNC_2 (VAR_2->stmt))
   {
   case 133:
   case 129:
   case 128:
     FUNC_4 (0, "master region may not be closely nested inside "
   "of work-sharing region");
     return;
   case 130:
     return;
   default:
     break;
   }
      break;
    case 131:
      for (; VAR_2 != ((void*)0); VAR_2 = VAR_2->outer)
 switch (FUNC_2 (VAR_2->stmt))
   {
   case 134:
     FUNC_4 (0, "ordered region may not be closely nested inside "
   "of critical region");
     return;
   case 133:
     if (FUNC_3 (FUNC_0 (VAR_2->stmt),
     VAR_0) == ((void*)0))
       FUNC_4 (0, "ordered region must be closely nested inside "
     "a loop region with an ordered clause");
     return;
   case 130:
     return;
   default:
     break;
   }
      break;
    case 134:
      for (; VAR_2 != ((void*)0); VAR_2 = VAR_2->outer)
 if (FUNC_2 (VAR_2->stmt) == 134
     && FUNC_1 (VAR_1) == FUNC_1 (VAR_2->stmt))
   {
     FUNC_4 (0, "critical region may not be nested inside a critical "
   "region with the same name");
     return;
   }
      break;
    default:
      break;
    }
}
