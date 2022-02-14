
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_15__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_11__ ;


typedef TYPE_1__* regexp_t ;
typedef TYPE_2__* decl_t ;
struct TYPE_24__ {TYPE_1__* regexp; } ;
struct TYPE_23__ {TYPE_15__* reserv_decl; } ;
struct TYPE_22__ {int regexps_num; TYPE_1__** regexps; } ;
struct TYPE_21__ {int mode; } ;
struct TYPE_20__ {int mode; } ;
struct TYPE_19__ {TYPE_1__* regexp; int loop_pass_num; } ;
struct TYPE_18__ {int regexps_num; TYPE_1__** regexps; } ;
struct TYPE_17__ {int regexps_num; TYPE_1__** regexps; } ;


 TYPE_15__* FUNC_0 (TYPE_2__*) ;
 TYPE_13__* FUNC_1 (TYPE_1__*) ;
 TYPE_11__* FUNC_2 (TYPE_1__*) ;
 TYPE_9__* FUNC_3 (TYPE_1__*) ;
 TYPE_7__* FUNC_4 (TYPE_1__*) ;
 TYPE_5__* FUNC_5 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 () ;
__attribute__((used)) static int
FUNC_7 (regexp_t VAR_2, decl_t VAR_3)
{
  int VAR_4;

  if (VAR_2 == ((void*)0))
    return 0;
  switch (VAR_2->mode)
    {
      case 128:
 return 0;

    case 130:
      if (VAR_3->mode == VAR_1
          && FUNC_4 (VAR_2)->reserv_decl == FUNC_0 (VAR_3))
        return 1;
      else if (FUNC_4 (VAR_2)->reserv_decl->loop_pass_num
        == VAR_0)

        return 0;
      else
        {
   FUNC_4 (VAR_2)->reserv_decl->loop_pass_num
            = VAR_0;
          return FUNC_7 (FUNC_4 (VAR_2)->reserv_decl->regexp,
                                 VAR_3);
        }

    case 129:
      for (VAR_4 = 0; VAR_4 <FUNC_5 (VAR_2)->regexps_num; VAR_4++)
 if (FUNC_7 (FUNC_5 (VAR_2)->regexps [VAR_4], VAR_3))
   return 1;
      return 0;

    case 134:
      for (VAR_4 = 0; VAR_4 < FUNC_1 (VAR_2)->regexps_num; VAR_4++)
 if (FUNC_7 (FUNC_1 (VAR_2)->regexps [VAR_4], VAR_3))
   return 1;
      return 0;

    case 132:
      for (VAR_4 = 0; VAR_4 < FUNC_2 (VAR_2)->regexps_num; VAR_4++)
 if (FUNC_7 (FUNC_2 (VAR_2)->regexps [VAR_4], VAR_3))
   return 1;
      return 0;

    case 131:
      return FUNC_7 (FUNC_3 (VAR_2)->regexp, VAR_3);

    case 133:
      return 0;

    default:
      FUNC_6 ();
    }
}
