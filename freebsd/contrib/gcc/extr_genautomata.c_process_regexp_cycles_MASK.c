
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_15__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_11__ ;


typedef TYPE_3__* regexp_t ;
struct TYPE_25__ {TYPE_2__* reserv_decl; } ;
struct TYPE_24__ {int regexps_num; TYPE_3__** regexps; } ;
struct TYPE_23__ {TYPE_1__* unit_decl; } ;
struct TYPE_22__ {int mode; } ;
struct TYPE_21__ {TYPE_3__* regexp; } ;
struct TYPE_20__ {int max_occ_cycle_num; int min_occ_cycle_num; } ;
struct TYPE_19__ {int regexps_num; TYPE_3__** regexps; } ;
struct TYPE_18__ {int regexps_num; TYPE_3__** regexps; } ;
struct TYPE_17__ {int repeat_num; TYPE_3__* regexp; } ;


 TYPE_15__* FUNC_0 (TYPE_3__*) ;
 TYPE_13__* FUNC_1 (TYPE_3__*) ;
 TYPE_11__* FUNC_2 (TYPE_3__*) ;
 TYPE_9__* FUNC_3 (TYPE_3__*) ;
 TYPE_7__* FUNC_4 (TYPE_3__*) ;
 TYPE_5__* FUNC_5 (TYPE_3__*) ;
 int FUNC_6 () ;
__attribute__((used)) static void
FUNC_7 (regexp_t VAR_0, int VAR_1,
         int VAR_2, int *VAR_3,
         int *VAR_4)
{
  int VAR_5;

  switch (VAR_0->mode)
    {
    case 128:
      if (FUNC_5 (VAR_0)->unit_decl->max_occ_cycle_num < VAR_1)
 FUNC_5 (VAR_0)->unit_decl->max_occ_cycle_num = VAR_1;
      if (FUNC_5 (VAR_0)->unit_decl->min_occ_cycle_num > VAR_2
   || FUNC_5 (VAR_0)->unit_decl->min_occ_cycle_num == -1)
 FUNC_5 (VAR_0)->unit_decl->min_occ_cycle_num = VAR_2;
      *VAR_3 = VAR_1;
      *VAR_4 = VAR_2;
      break;

    case 130:
      FUNC_7 (FUNC_3 (VAR_0)->reserv_decl->regexp,
        VAR_1, VAR_2,
        VAR_3, VAR_4);
      break;

    case 131:
      for (VAR_5 = 0; VAR_5 < FUNC_2 (VAR_0)->repeat_num; VAR_5++)
 {
   FUNC_7 (FUNC_2 (VAR_0)->regexp,
     VAR_1, VAR_2,
     VAR_3, VAR_4);
   VAR_1 = *VAR_3 + 1;
   VAR_2 = *VAR_4 + 1;
 }
      break;

    case 129:
      for (VAR_5 = 0; VAR_5 <FUNC_4 (VAR_0)->regexps_num; VAR_5++)
 {
   FUNC_7 (FUNC_4 (VAR_0)->regexps [VAR_5],
     VAR_1, VAR_2,
     VAR_3, VAR_4);
   VAR_1 = *VAR_3 + 1;
   VAR_2 = *VAR_4 + 1;
 }
      break;

    case 134:
      {
 int VAR_6 = 0;
 int VAR_7 = 0;

 for (VAR_5 = 0; VAR_5 < FUNC_0 (VAR_0)->regexps_num; VAR_5++)
   {
     FUNC_7 (FUNC_0 (VAR_0)->regexps [VAR_5],
       VAR_1, VAR_2,
       VAR_3, VAR_4);
     if (VAR_6 < *VAR_3)
       VAR_6 = *VAR_3;
     if (VAR_5 == 0 || VAR_7 > *VAR_4)
       VAR_7 = *VAR_4;
   }
 *VAR_3 = VAR_6;
 *VAR_4 = VAR_7;
      }
      break;

    case 132:
      {
 int VAR_8 = 0;
 int VAR_9 = 0;

 for (VAR_5 = 0; VAR_5 < FUNC_1 (VAR_0)->regexps_num; VAR_5++)
   {
     FUNC_7 (FUNC_1 (VAR_0)->regexps [VAR_5],
       VAR_1, VAR_2,
       VAR_3, VAR_4);
     if (VAR_8 < *VAR_3)
       VAR_8 = *VAR_3;
     if (VAR_5 == 0 || VAR_9 > *VAR_4)
       VAR_9 = *VAR_4;
   }
 *VAR_3 = VAR_8;
 *VAR_4 = VAR_9;
      }
      break;

    case 133:
      *VAR_3 = VAR_1;
      *VAR_4 = VAR_2;
      break;

    default:
      FUNC_6 ();
    }
}
