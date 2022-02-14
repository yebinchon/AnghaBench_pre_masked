
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_16__ ;
typedef struct TYPE_20__ TYPE_14__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_10__ ;


typedef TYPE_1__* regexp_t ;
struct TYPE_22__ {int mode; } ;
struct TYPE_21__ {int regexps_num; TYPE_1__** regexps; } ;
struct TYPE_20__ {int regexps_num; TYPE_1__** regexps; } ;
struct TYPE_19__ {TYPE_1__* regexp; } ;
struct TYPE_18__ {int regexps_num; TYPE_1__** regexps; } ;


 TYPE_16__* FUNC_0 (TYPE_1__*) ;
 TYPE_14__* FUNC_1 (TYPE_1__*) ;
 TYPE_12__* FUNC_2 (TYPE_1__*) ;
 TYPE_10__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 () ;






 TYPE_1__* FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static regexp_t
FUNC_6 (regexp_t VAR_0, regexp_t (*VAR_1) (regexp_t VAR_2))
{
  int VAR_3;

  switch (VAR_0->mode)
    {
    case 129:
      for (VAR_3 = 0; VAR_3 < FUNC_3 (VAR_0)->regexps_num; VAR_3++)
 FUNC_3 (VAR_0)->regexps [VAR_3]
   = FUNC_6 (FUNC_3 (VAR_0)->regexps [VAR_3],
       VAR_1);
      break;

    case 133:
      for (VAR_3 = 0; VAR_3 < FUNC_0 (VAR_0)->regexps_num; VAR_3++)
 FUNC_0 (VAR_0)->regexps [VAR_3]
   = FUNC_6 (FUNC_0 (VAR_0)->regexps [VAR_3], VAR_1);
      break;

    case 131:
      for (VAR_3 = 0; VAR_3 < FUNC_1 (VAR_0)->regexps_num; VAR_3++)
 FUNC_1 (VAR_0)->regexps [VAR_3]
   = FUNC_6 (FUNC_1 (VAR_0)->regexps [VAR_3], VAR_1);
      break;

    case 130:
      FUNC_2 (VAR_0)->regexp
 = FUNC_6 (FUNC_2 (VAR_0)->regexp, VAR_1);
      break;

    case 132:
    case 128:
      break;

    default:
      FUNC_4 ();
    }
  return (*VAR_1) (VAR_0);
}
