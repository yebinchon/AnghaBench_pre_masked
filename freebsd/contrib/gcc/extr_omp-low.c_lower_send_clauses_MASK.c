
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_5__ {scalar_t__ is_nested; } ;
typedef TYPE_1__ omp_context ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

 scalar_t__ FUNC_2 (scalar_t__) ;


 int FUNC_3 (scalar_t__) ;

 scalar_t__ FUNC_4 (int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,TYPE_1__*) ;
 int FUNC_7 () ;
 int FUNC_8 (scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__,TYPE_1__*) ;
 int FUNC_13 (scalar_t__,int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_14 (tree VAR_2, tree *VAR_3, tree *VAR_4, omp_context *VAR_5)
{
  tree VAR_6;

  for (VAR_6 = VAR_2; VAR_6 ; VAR_6 = FUNC_0 (VAR_6))
    {
      tree VAR_7, VAR_8, VAR_9, VAR_10;
      bool VAR_11, VAR_12 = 0, VAR_13 = 0;

      switch (FUNC_1 (VAR_6))
 {
 case 130:
 case 131:
 case 129:
 case 128:
   break;
 default:
   continue;
 }

      VAR_10 = VAR_7 = FUNC_2 (VAR_6);
      if (VAR_5->is_nested)
 VAR_10 = FUNC_12 (VAR_7, VAR_5);

      if (FUNC_1 (VAR_6) != 131
   && FUNC_9 (VAR_10))
 continue;
      if (FUNC_11 (VAR_7))
 continue;
      VAR_11 = FUNC_13 (VAR_7, 0);

      switch (FUNC_1 (VAR_6))
 {
 case 130:
 case 131:
   VAR_12 = 1;
   break;

 case 129:
   if (VAR_11 || FUNC_10 (VAR_7))
     {
       if (FUNC_3 (VAR_6))
  continue;
       VAR_12 = 1;
     }
   else
     VAR_13 = 1;
   break;

 case 128:
   VAR_12 = 1;
   VAR_13 = !(VAR_11 || FUNC_10 (VAR_7));
   break;

 default:
   FUNC_7 ();
 }

      if (VAR_12)
 {
   VAR_8 = FUNC_6 (VAR_7, VAR_5);
   VAR_9 = VAR_11 ? FUNC_5 (VAR_10) : VAR_10;
   VAR_9 = FUNC_4 (VAR_0, VAR_1, VAR_8, VAR_9);
   FUNC_8 (VAR_9, VAR_3);
 }

      if (VAR_13)
 {
   VAR_8 = FUNC_6 (VAR_7, VAR_5);
   VAR_9 = FUNC_4 (VAR_0, VAR_1, VAR_10, VAR_8);
   FUNC_8 (VAR_9, VAR_4);
 }
    }
}
