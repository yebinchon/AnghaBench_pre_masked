
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tree ;
struct TYPE_7__ {scalar_t__ keyword; } ;
typedef TYPE_1__ cp_token ;
struct TYPE_8__ {int lexer; } ;
typedef TYPE_2__ cp_parser ;
typedef int cp_cv_quals ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static cp_cv_quals
FUNC_4 (cp_parser *VAR_3, tree *VAR_4)
{
  cp_cv_quals VAR_5 = VAR_2;
  cp_cv_quals VAR_6;
  cp_token *VAR_7;

  *VAR_4 = VAR_0;
  while (1)
    {

      VAR_7 = FUNC_1 (VAR_3->lexer);

      if (VAR_7->keyword == VAR_1)
 {

   *VAR_4 = FUNC_0 (*VAR_4,
         FUNC_2 (VAR_3));
   continue;
 }

      VAR_6 = FUNC_3 (VAR_3);
      if (VAR_6 == VAR_2)
 break;
      VAR_5 |= VAR_6;
    }
  return VAR_5;
}
