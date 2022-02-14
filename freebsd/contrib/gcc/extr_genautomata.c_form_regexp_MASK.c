
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_13__ ;
typedef struct TYPE_15__ TYPE_11__ ;


typedef TYPE_1__* regexp_t ;
struct TYPE_21__ {int repeat_num; TYPE_1__* regexp; } ;
struct TYPE_20__ {char* name; } ;
struct TYPE_19__ {int regexps_num; TYPE_1__** regexps; } ;
struct TYPE_18__ {char* name; } ;
struct TYPE_17__ {int mode; } ;
struct TYPE_16__ {int regexps_num; TYPE_1__** regexps; } ;
struct TYPE_15__ {int regexps_num; TYPE_1__** regexps; } ;


 char* VAR_0 ;
 TYPE_13__* FUNC_0 (TYPE_1__*) ;
 TYPE_11__* FUNC_1 (TYPE_1__*) ;
 TYPE_9__* FUNC_2 (TYPE_1__*) ;
 TYPE_7__* FUNC_3 (TYPE_1__*) ;
 TYPE_5__* FUNC_4 (TYPE_1__*) ;
 TYPE_3__* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 () ;
 int VAR_1 ;
 int FUNC_7 (int *,char) ;
 int FUNC_8 (int *,char const*,int ) ;







 int FUNC_9 (char*,char*,int) ;
 int FUNC_10 (char const*) ;

__attribute__((used)) static void
FUNC_11 (regexp_t VAR_2)
{
  int VAR_3;

  switch (VAR_2->mode)
    {
    case 128: case 130:
      {
 const char *VAR_4 = (VAR_2->mode == 128
       ? FUNC_5 (VAR_2)->name
       : FUNC_3 (VAR_2)->name);

 FUNC_8 (&VAR_1, VAR_4, FUNC_10 (VAR_4));
 break;
      }

    case 129:
      for (VAR_3 = 0; VAR_3 < FUNC_4 (VAR_2)->regexps_num; VAR_3++)
 {
   if (VAR_3 != 0)
     FUNC_7 (&VAR_1, ',');
   FUNC_11 (FUNC_4 (VAR_2)->regexps [VAR_3]);
 }
      break;

    case 134:
      FUNC_7 (&VAR_1, '(');
      for (VAR_3 = 0; VAR_3 < FUNC_0 (VAR_2)->regexps_num; VAR_3++)
 {
   if (VAR_3 != 0)
            FUNC_7 (&VAR_1, '+');
   if (FUNC_0 (VAR_2)->regexps[VAR_3]->mode == 129
              || FUNC_0 (VAR_2)->regexps[VAR_3]->mode == 132)
            FUNC_7 (&VAR_1, '(');
   FUNC_11 (FUNC_0 (VAR_2)->regexps [VAR_3]);
   if (FUNC_0 (VAR_2)->regexps[VAR_3]->mode == 129
              || FUNC_0 (VAR_2)->regexps[VAR_3]->mode == 132)
            FUNC_7 (&VAR_1, ')');
        }
      FUNC_7 (&VAR_1, ')');
      break;

    case 132:
      for (VAR_3 = 0; VAR_3 < FUNC_1 (VAR_2)->regexps_num; VAR_3++)
 {
   if (VAR_3 != 0)
     FUNC_7 (&VAR_1, '|');
   if (FUNC_1 (VAR_2)->regexps[VAR_3]->mode == 129)
     FUNC_7 (&VAR_1, '(');
   FUNC_11 (FUNC_1 (VAR_2)->regexps [VAR_3]);
   if (FUNC_1 (VAR_2)->regexps[VAR_3]->mode == 129)
          FUNC_7 (&VAR_1, ')');
 }
      break;

    case 131:
      {
 char VAR_5 [30];

 if (FUNC_2 (VAR_2)->regexp->mode == 129
     || FUNC_2 (VAR_2)->regexp->mode == 134
     || FUNC_2 (VAR_2)->regexp->mode == 132)
   FUNC_7 (&VAR_1, '(');
 FUNC_11 (FUNC_2 (VAR_2)->regexp);
 if (FUNC_2 (VAR_2)->regexp->mode == 129
     || FUNC_2 (VAR_2)->regexp->mode == 134
     || FUNC_2 (VAR_2)->regexp->mode == 132)
   FUNC_7 (&VAR_1, ')');
 FUNC_9 (VAR_5, "*%d", FUNC_2 (VAR_2)->repeat_num);
 FUNC_8 (&VAR_1, VAR_5, FUNC_10 (VAR_5));
 break;
      }

    case 133:
      FUNC_8 (&VAR_1, VAR_0, FUNC_10 (VAR_0));
      break;

    default:
      FUNC_6 ();
    }
}
