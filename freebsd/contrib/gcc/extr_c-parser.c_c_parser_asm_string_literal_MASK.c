
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
typedef int c_parser ;
struct TYPE_2__ {int value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 TYPE_1__* FUNC_4 (int *) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static tree
FUNC_6 (c_parser *VAR_3)
{
  tree VAR_4;
  if (FUNC_3 (VAR_3, VAR_0))
    {
      VAR_4 = FUNC_4 (VAR_3)->value;
      FUNC_1 (VAR_3);
    }
  else if (FUNC_3 (VAR_3, VAR_1))
    {
      FUNC_5 ("wide string literal in %<asm%>");
      VAR_4 = FUNC_0 (1, "");
      FUNC_1 (VAR_3);
    }
  else
    {
      FUNC_2 (VAR_3, "expected string literal");
      VAR_4 = VAR_2;
    }
  return VAR_4;
}
