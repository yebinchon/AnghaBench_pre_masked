
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int value; } ;
struct TYPE_11__ {scalar_t__ type; TYPE_1__ u; } ;
typedef TYPE_2__ cp_token ;
struct TYPE_12__ {int lexer; } ;
typedef TYPE_3__ cp_parser ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char const*,scalar_t__,int ) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6 (cp_parser* VAR_3, const char* VAR_4)
{
  if (!FUNC_3 (VAR_3))
    {
      cp_token *VAR_5 = FUNC_1 (VAR_3->lexer);


      FUNC_2 (VAR_5);

      if (VAR_5->type == VAR_2)
 {
   FUNC_5 ("%<#pragma%> is not allowed here");
   FUNC_4 (VAR_3, VAR_5);
   return;
 }

      FUNC_0 (VAR_4,



       (VAR_5->type == VAR_0 ? VAR_1 : VAR_5->type),
       VAR_5->u.value);
    }
}
