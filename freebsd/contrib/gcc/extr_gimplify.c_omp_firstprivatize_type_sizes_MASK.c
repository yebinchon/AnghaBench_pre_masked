
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int * tree ;
struct gimplify_omp_ctx {int privatized_types; } ;
struct TYPE_3__ {int (* omp_firstprivatize_type_sizes ) (struct gimplify_omp_ctx*,int *) ;} ;
struct TYPE_4__ {TYPE_1__ types; } ;




 int FUNC_0 (int *) ;

 int VAR_0 ;






 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

 int * VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_11 (struct gimplify_omp_ctx*,int ) ;
 scalar_t__ FUNC_12 (int ,int *) ;
 int FUNC_13 (struct gimplify_omp_ctx*,int *) ;

__attribute__((used)) static void
FUNC_14 (struct gimplify_omp_ctx *VAR_3, tree VAR_4)
{
  if (VAR_4 == ((void*)0) || VAR_4 == VAR_1)
    return;
  VAR_4 = FUNC_6 (VAR_4);

  if (FUNC_12 (VAR_3->privatized_types, VAR_4))
    return;

  switch (FUNC_2 (VAR_4))
    {
    case 134:
    case 135:
    case 136:
    case 131:
      FUNC_11 (VAR_3, FUNC_8 (VAR_4));
      FUNC_11 (VAR_3, FUNC_7 (VAR_4));
      break;

    case 137:
      FUNC_14 (VAR_3, FUNC_3 (VAR_4));
      FUNC_14 (VAR_3, FUNC_4 (VAR_4));
      break;

    case 130:
    case 128:
    case 132:
      {
 tree VAR_5;
 for (VAR_5 = FUNC_5 (VAR_4); VAR_5; VAR_5 = FUNC_1 (VAR_5))
   if (FUNC_2 (VAR_5) == VAR_0)
     {
       FUNC_11 (VAR_3, FUNC_0 (VAR_5));
       FUNC_14 (VAR_3, FUNC_3 (VAR_5));
     }
      }
      break;

    case 133:
    case 129:
      FUNC_14 (VAR_3, FUNC_3 (VAR_4));
      break;

    default:
      break;
    }

  FUNC_11 (VAR_3, FUNC_9 (VAR_4));
  FUNC_11 (VAR_3, FUNC_10 (VAR_4));
  VAR_2.types.omp_firstprivatize_type_sizes (VAR_3, VAR_4);
}
