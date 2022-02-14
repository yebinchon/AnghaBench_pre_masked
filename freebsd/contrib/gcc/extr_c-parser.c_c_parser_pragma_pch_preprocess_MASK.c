
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * tree ;
typedef int c_parser ;
struct TYPE_2__ {int * value; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 TYPE_1__* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_8 (c_parser *VAR_2)
{
  tree VAR_3 = ((void*)0);

  FUNC_2 (VAR_2);
  if (FUNC_5 (VAR_2, VAR_0))
    {
      VAR_3 = FUNC_6 (VAR_2)->value;
      FUNC_3 (VAR_2);
    }
  else
    FUNC_4 (VAR_2, "expected string literal");
  FUNC_7 (VAR_2);

  if (VAR_3)
    FUNC_1 (VAR_1, FUNC_0 (VAR_3));
}
