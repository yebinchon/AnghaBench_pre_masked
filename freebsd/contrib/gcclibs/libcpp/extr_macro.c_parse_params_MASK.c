
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int node; } ;
struct TYPE_20__ {int type; TYPE_1__ val; } ;
typedef TYPE_4__ cpp_token ;
struct TYPE_19__ {int va_args_ok; } ;
struct TYPE_18__ {int n__VA_ARGS__; } ;
struct TYPE_21__ {TYPE_3__ state; TYPE_2__ spec_nodes; } ;
typedef TYPE_5__ cpp_reader ;
struct TYPE_22__ {int variadic; int paramc; } ;
typedef TYPE_6__ cpp_macro ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (TYPE_5__*,int ) ;
 TYPE_4__* FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,TYPE_6__*,int ) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_5__*,int ,char*,...) ;
 int FUNC_4 (TYPE_5__*,TYPE_4__ const*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static bool
FUNC_5 (cpp_reader *VAR_7, cpp_macro *VAR_8)
{
  unsigned int VAR_9 = 0;

  for (;;)
    {
      const cpp_token *VAR_10 = FUNC_1 (VAR_7);

      switch (VAR_10->type)
 {
 default:


   if (VAR_10->type == VAR_0
       && ! FUNC_0 (VAR_7, VAR_4))
     continue;

   FUNC_3 (VAR_7, VAR_1,
       "\"%s\" may not appear in macro parameter list",
       FUNC_4 (VAR_7, VAR_10));
   return 0;

 case 128:
   if (VAR_9)
     {
       FUNC_3 (VAR_7, VAR_1,
    "macro parameters must be comma-separated");
       return 0;
     }
   VAR_9 = 1;

   if (FUNC_2 (VAR_7, VAR_8, VAR_10->val.node))
     return 0;
   continue;

 case 132:
   if (VAR_9 || VAR_8->paramc == 0)
     return 1;


 case 131:
   if (!VAR_9)
     {
       FUNC_3 (VAR_7, VAR_1, "parameter name missing");
       return 0;
     }
   VAR_9 = 0;
   continue;

 case 130:
   VAR_8->variadic = 1;
   if (!VAR_9)
     {
       FUNC_2 (VAR_7, VAR_8,
       VAR_7->spec_nodes.n__VA_ARGS__);
       VAR_7->state.va_args_ok = 1;
       if (! FUNC_0 (VAR_7, VAR_3)
    && FUNC_0 (VAR_7, VAR_5)
    && FUNC_0 (VAR_7, VAR_6))
  FUNC_3 (VAR_7, VAR_2,
      "anonymous variadic macros were introduced in C99");
     }
   else if (FUNC_0 (VAR_7, VAR_5)
     && FUNC_0 (VAR_7, VAR_6))
     FUNC_3 (VAR_7, VAR_2,
         "ISO C does not permit named variadic macros");


   VAR_10 = FUNC_1 (VAR_7);
   if (VAR_10->type == 132)
     return 1;


 case 129:
   FUNC_3 (VAR_7, VAR_1, "missing ')' in macro parameter list");
   return 0;
 }
    }
}
