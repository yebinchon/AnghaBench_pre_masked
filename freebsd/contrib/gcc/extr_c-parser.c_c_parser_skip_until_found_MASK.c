
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef enum cpp_ttype { ____Placeholder_cpp_ttype } cpp_ttype ;
struct TYPE_8__ {int type; } ;
typedef TYPE_1__ c_token ;
struct TYPE_9__ {int error; scalar_t__ in_pragma; } ;
typedef TYPE_2__ c_parser ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int,char const*) ;

__attribute__((used)) static void
FUNC_3 (c_parser *VAR_8,
      enum cpp_ttype VAR_9,
      const char *VAR_10)
{
  unsigned VAR_11 = 0;

  if (FUNC_2 (VAR_8, VAR_9, VAR_10))
    return;


  while (1)
    {

      c_token *VAR_12 = FUNC_1 (VAR_8);

      if (VAR_12->type == VAR_9 && !VAR_11)
 {
   FUNC_0 (VAR_8);
   break;
 }


      if (VAR_12->type == VAR_3)
 return;
      if (VAR_12->type == VAR_7 && VAR_8->in_pragma)
 return;
      if (VAR_12->type == VAR_4
   || VAR_12->type == VAR_5
   || VAR_12->type == VAR_6)
 ++VAR_11;
      else if (VAR_12->type == VAR_0
        || VAR_12->type == VAR_1
        || VAR_12->type == VAR_2)
 {
   if (VAR_11-- == 0)
     break;
 }

      FUNC_0 (VAR_8);
    }
  VAR_8->error = 0;
}
