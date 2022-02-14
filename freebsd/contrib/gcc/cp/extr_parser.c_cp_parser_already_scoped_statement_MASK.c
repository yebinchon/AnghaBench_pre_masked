
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int lexer; } ;
typedef TYPE_1__ cp_parser ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ,char*) ;
 int FUNC_2 (TYPE_1__*,int ,int,int *) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_4 (cp_parser* VAR_3)
{

  if (FUNC_0 (VAR_3->lexer, VAR_1))
    FUNC_2 (VAR_3, VAR_2, 0, ((void*)0));
  else
    {


      FUNC_1 (VAR_3, VAR_1, "`{'");
      FUNC_3 (VAR_3, VAR_2);
      FUNC_1 (VAR_3, VAR_0, "`}'");
    }
}
