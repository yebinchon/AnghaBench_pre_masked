
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_15__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_11__ ;


struct regexp {int dummy; } ;
typedef TYPE_2__* regexp_t ;
struct TYPE_23__ {TYPE_1__* reserv_decl; } ;
struct TYPE_22__ {int regexps_num; TYPE_2__** regexps; } ;
struct TYPE_21__ {int mode; } ;
struct TYPE_20__ {TYPE_2__* regexp; } ;
struct TYPE_19__ {int regexps_num; TYPE_2__** regexps; } ;
struct TYPE_18__ {int regexps_num; TYPE_2__** regexps; } ;
struct TYPE_17__ {TYPE_2__* regexp; } ;


 TYPE_15__* FUNC_0 (TYPE_2__*) ;
 TYPE_13__* FUNC_1 (TYPE_2__*) ;
 TYPE_11__* FUNC_2 (TYPE_2__*) ;
 TYPE_9__* FUNC_3 (TYPE_2__*) ;
 TYPE_7__* FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 () ;
__attribute__((used)) static regexp_t
FUNC_7 (regexp_t VAR_0)
{
  regexp_t VAR_1;
  int VAR_2;

  switch (VAR_0->mode)
    {
    case 130:
      VAR_1 = FUNC_7 (FUNC_3 (VAR_0)->reserv_decl->regexp);
      break;

    case 128:
      VAR_1 = FUNC_5 (VAR_0, sizeof (struct regexp));
      break;

    case 131:
      VAR_1 = FUNC_5 (VAR_0, sizeof (struct regexp));
      FUNC_2 (VAR_1)->regexp
        = FUNC_7 (FUNC_2 (VAR_0)->regexp);
      break;

    case 129:
      VAR_1 = FUNC_5 (VAR_0,
                          sizeof (struct regexp) + sizeof (regexp_t)
     * (FUNC_4 (VAR_0)->regexps_num - 1));
      for (VAR_2 = 0; VAR_2 <FUNC_4 (VAR_0)->regexps_num; VAR_2++)
 FUNC_4 (VAR_1)->regexps [VAR_2]
   = FUNC_7 (FUNC_4 (VAR_0)->regexps [VAR_2]);
      break;

    case 134:
      VAR_1 = FUNC_5 (VAR_0,
                          sizeof (struct regexp) + sizeof (regexp_t)
     * (FUNC_0 (VAR_0)->regexps_num - 1));
      for (VAR_2 = 0; VAR_2 < FUNC_0 (VAR_0)->regexps_num; VAR_2++)
 FUNC_0 (VAR_1)->regexps [VAR_2]
   = FUNC_7 (FUNC_0 (VAR_0)->regexps [VAR_2]);
      break;

    case 132:
      VAR_1 = FUNC_5 (VAR_0,
                          sizeof (struct regexp) + sizeof (regexp_t)
     * (FUNC_1 (VAR_0)->regexps_num - 1));
      for (VAR_2 = 0; VAR_2 < FUNC_1 (VAR_0)->regexps_num; VAR_2++)
 FUNC_1 (VAR_1)->regexps [VAR_2]
   = FUNC_7 (FUNC_1 (VAR_0)->regexps [VAR_2]);
      break;

    case 133:
      VAR_1 = FUNC_5 (VAR_0, sizeof (struct regexp));
      break;

    default:
      FUNC_6 ();
    }
  return VAR_1;
}
