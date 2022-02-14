
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_6__ {TYPE_1__* cur; TYPE_1__* end; } ;
typedef TYPE_2__ reshape_iter ;
struct TYPE_5__ {char* index; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int FUNC_8 (char*,scalar_t__,...) ;
 scalar_t__ VAR_3 ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (scalar_t__,char*,int) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ,TYPE_2__*,int) ;

__attribute__((used)) static tree
FUNC_13 (tree VAR_4, reshape_iter *VAR_5, bool VAR_6)
{
  tree VAR_7;
  tree VAR_8;

  FUNC_9 (FUNC_0 (VAR_4));


  VAR_8 = FUNC_7 (VAR_1, ((void*)0));
  VAR_7 = FUNC_11 (FUNC_6 (VAR_4));

  if (!VAR_7)
    {





      if (!VAR_6)
 {
   FUNC_8 ("initializer for %qT must be brace-enclosed", VAR_4);
   return VAR_3;
 }
      return VAR_8;
    }


  while (VAR_5->cur != VAR_5->end)
    {
      tree VAR_9;


      if (VAR_5->cur->index)
 {
   VAR_7 = FUNC_10 (VAR_4, VAR_5->cur->index, 0);

   if (!VAR_7 || FUNC_4 (VAR_7) != VAR_0)
     {
       FUNC_8 ("%qT has no non-static data member named %qD", VAR_4,
      VAR_5->cur->index);
       return VAR_3;
     }
 }


      if (!VAR_7)
 break;

      VAR_9 = FUNC_12 (FUNC_5 (VAR_7), VAR_5,
                               0);
      FUNC_1 (FUNC_2 (VAR_8), VAR_7, VAR_9);






      if (FUNC_4 (VAR_4) == VAR_2)
 break;

      VAR_7 = FUNC_11 (FUNC_3 (VAR_7));
    }

  return VAR_8;
}
