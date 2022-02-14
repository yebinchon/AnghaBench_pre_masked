
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char* tree ;
struct TYPE_6__ {TYPE_1__* cur; } ;
typedef TYPE_2__ reshape_iter ;
struct TYPE_5__ {char* value; } ;


 scalar_t__ FUNC_0 (char*) ;
 char* VAR_0 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ) ;
 char* FUNC_5 (char*) ;
 scalar_t__ VAR_1 ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (char*,int ,char*) ;
 char* VAR_2 ;
 int FUNC_8 (int) ;
 char* FUNC_9 (int ,char*,TYPE_2__*) ;
 int FUNC_10 (int ,char*) ;

__attribute__((used)) static tree
FUNC_11 (tree VAR_3, reshape_iter *VAR_4)
{
  tree VAR_5 = VAR_0;
  tree VAR_6;

  FUNC_8 (FUNC_1 (VAR_3) == VAR_1);

  if (FUNC_0 (VAR_4->cur->value))
    {
      tree VAR_7 = VAR_4->cur->value;
      if (!FUNC_10 (FUNC_2 (VAR_7), VAR_3))
 {
   FUNC_7 ("invalid type %qT as initializer for a vector of type %qT",
  FUNC_2 (VAR_4->cur->value), VAR_3);
   VAR_7 = VAR_2;
 }
      ++VAR_4->cur;
      return VAR_7;
    }




  VAR_6 = FUNC_3 (VAR_3);
  if (VAR_6 && FUNC_4 (FUNC_2 (FUNC_5 (VAR_6))))
    VAR_5 = FUNC_6 (FUNC_2 (FUNC_5 (VAR_6)));

  return FUNC_9 (FUNC_2 (VAR_3), VAR_5, VAR_4);
}
