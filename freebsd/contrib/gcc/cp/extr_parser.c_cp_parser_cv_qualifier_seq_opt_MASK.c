
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int keyword; } ;
typedef TYPE_1__ cp_token ;
struct TYPE_6__ {int lexer; } ;
typedef TYPE_2__ cp_parser ;
typedef int cp_cv_quals ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static cp_cv_quals
FUNC_4 (cp_parser* VAR_4)
{
  cp_cv_quals VAR_5 = VAR_3;

  while (1)
    {
      cp_token *VAR_6;
      cp_cv_quals VAR_7;


      VAR_6 = FUNC_1 (VAR_4->lexer);

      switch (VAR_6->keyword)
 {
 case 130:
   VAR_7 = VAR_0;
   break;

 case 128:
   VAR_7 = VAR_2;
   break;

 case 129:
   VAR_7 = VAR_1;
   break;

 default:
   VAR_7 = VAR_3;
   break;
 }

      if (!VAR_7)
 break;

      if (VAR_5 & VAR_7)
 {
   FUNC_3 ("duplicate cv-qualifier");
   FUNC_2 (VAR_4->lexer);
 }
      else
 {
   FUNC_0 (VAR_4->lexer);
   VAR_5 |= VAR_7;
 }
    }

  return VAR_5;
}
