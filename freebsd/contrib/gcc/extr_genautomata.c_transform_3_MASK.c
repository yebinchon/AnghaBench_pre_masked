
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct regexp {int dummy; } ;
typedef TYPE_1__* regexp_t ;
struct TYPE_15__ {int regexps_num; TYPE_1__** regexps; } ;
struct TYPE_14__ {int regexps_num; TYPE_1__** regexps; } ;
struct TYPE_13__ {int mode; int pos; } ;
struct TYPE_12__ {int regexps_num; TYPE_1__** regexps; } ;


 TYPE_10__* FUNC_0 (TYPE_1__*) ;
 TYPE_8__* FUNC_1 (TYPE_1__*) ;
 TYPE_6__* FUNC_2 (TYPE_1__*) ;
 void* FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

 scalar_t__ VAR_2 ;



__attribute__((used)) static regexp_t
FUNC_6 (regexp_t VAR_3)
{
  if (VAR_3->mode == 129)
    {
      regexp_t VAR_4 = ((void*)0);
      int VAR_5 = 0;
      regexp_t VAR_6;
      regexp_t VAR_7;
      int VAR_8, VAR_9;

      for (VAR_8 = 0; VAR_8 <FUNC_2 (VAR_3)->regexps_num; VAR_8++)
 if (FUNC_2 (VAR_3)->regexps [VAR_8]->mode == VAR_2)
   {
     VAR_5 = VAR_8;
     VAR_4 = FUNC_2 (VAR_3)->regexps [VAR_8];
     break;
   }
      if (VAR_8 < FUNC_2 (VAR_3)->regexps_num)
 {
   FUNC_5 (FUNC_1 (VAR_4)->regexps_num > 1
        && FUNC_2 (VAR_3)->regexps_num > 1);
   VAR_6 = FUNC_4 (sizeof (struct regexp)
    + sizeof (regexp_t)
    * (FUNC_1 (VAR_4)->regexps_num - 1));
   VAR_6->mode = VAR_2;
   VAR_6->pos = VAR_3->pos;
   FUNC_1 (VAR_6)->regexps_num
     = FUNC_1 (VAR_4)->regexps_num;
   for (VAR_8 = 0; VAR_8 < FUNC_1 (VAR_6)->regexps_num; VAR_8++)
     {
       VAR_7
                = FUNC_4 (sizeof (struct regexp)
                               + sizeof (regexp_t)
                               * (FUNC_2 (VAR_3)->regexps_num - 1));
       VAR_7->mode = 129;
       VAR_7->pos = VAR_3->pos;
       FUNC_2 (VAR_7)->regexps_num
                = FUNC_2 (VAR_3)->regexps_num;
              FUNC_1 (VAR_6)->regexps [VAR_8] = VAR_7;
       for (VAR_9 = 0; VAR_9 < FUNC_2 (VAR_7)->regexps_num; VAR_9++)
  if (VAR_9 != VAR_5)
    FUNC_2 (VAR_7)->regexps [VAR_9]
      = FUNC_3 (FUNC_2 (VAR_3)->regexps [VAR_9]);
  else
    FUNC_2 (VAR_7)->regexps [VAR_9]
      = FUNC_3 (FUNC_1 (VAR_4)->regexps [VAR_8]);
     }
   VAR_0 = 1;
   VAR_3 = VAR_6;
 }
    }
  else if (VAR_3->mode == VAR_1)
    {
      regexp_t VAR_10 = ((void*)0);
      regexp_t VAR_11;
      int VAR_12 = 0;
      int VAR_13, VAR_14;
      regexp_t VAR_15;
      regexp_t VAR_16 = ((void*)0);
      regexp_t VAR_17 = ((void*)0);
      int VAR_18, VAR_19;

      for (VAR_18 = 0; VAR_18 < FUNC_0 (VAR_3)->regexps_num; VAR_18++)
 if (FUNC_0 (VAR_3)->regexps [VAR_18]->mode == VAR_2)
   {
     VAR_12 = VAR_18;
     VAR_10 = FUNC_0 (VAR_3)->regexps [VAR_18];
     break;
   }
      if (VAR_18 < FUNC_0 (VAR_3)->regexps_num)
 {
   FUNC_5 (FUNC_1 (VAR_10)->regexps_num > 1
        && FUNC_0 (VAR_3)->regexps_num > 1);
   VAR_15 = FUNC_4 (sizeof (struct regexp)
    + sizeof (regexp_t)
    * (FUNC_1 (VAR_10)->regexps_num - 1));
   VAR_15->mode = VAR_2;
   VAR_15->pos = VAR_3->pos;
   FUNC_1 (VAR_15)->regexps_num
     = FUNC_1 (VAR_10)->regexps_num;
   for (VAR_18 = 0; VAR_18 < FUNC_1 (VAR_15)->regexps_num; VAR_18++)
     {
       VAR_16
  = FUNC_4 (sizeof (struct regexp)
                               + sizeof (regexp_t)
          * (FUNC_0 (VAR_3)->regexps_num - 1));
       VAR_16->mode = VAR_1;
       VAR_16->pos = VAR_3->pos;
       FUNC_0 (VAR_16)->regexps_num
                = FUNC_0 (VAR_3)->regexps_num;
              FUNC_1 (VAR_15)->regexps [VAR_18] = VAR_16;
       for (VAR_19 = 0; VAR_19 < FUNC_0 (VAR_16)->regexps_num; VAR_19++)
  if (VAR_19 != VAR_12)
    FUNC_0 (VAR_16)->regexps [VAR_19]
      = FUNC_3 (FUNC_0 (VAR_3)->regexps [VAR_19]);
  else
    FUNC_0 (VAR_16)->regexps [VAR_19]
      = FUNC_3 (FUNC_1 (VAR_10)->regexps [VAR_18]);
     }
   VAR_0 = 1;
   VAR_3 = VAR_15;
 }
      VAR_13 = 0;
      if (VAR_3->mode == VAR_1)
 for (VAR_18 = 0; VAR_18 < FUNC_0 (VAR_3)->regexps_num; VAR_18++)
   {
     switch (FUNC_0 (VAR_3)->regexps [VAR_18]->mode)
       {
       case 129:
  VAR_11 = FUNC_0 (VAR_3)->regexps [VAR_18];
  if (VAR_13 < FUNC_2 (VAR_11)->regexps_num)
    VAR_13 = FUNC_2 (VAR_11)->regexps_num;
  break;

       case 128:
       case 130:
  break;

       default:
  VAR_13 = 0;
  goto break_for;
       }
   }
    break_for:
      if (VAR_13 != 0)
 {
   FUNC_5 (VAR_13 != 1
        && FUNC_0 (VAR_3)->regexps_num > 1);
   VAR_15 = FUNC_4 (sizeof (struct regexp)
    + sizeof (regexp_t) * (VAR_13 - 1));
   VAR_15->mode = 129;
   VAR_15->pos = VAR_3->pos;
   FUNC_2 (VAR_15)->regexps_num = VAR_13;
   for (VAR_18 = 0; VAR_18 < VAR_13; VAR_18++)
     {
       VAR_14 = 0;
       for (VAR_19 = 0; VAR_19 < FUNC_0 (VAR_3)->regexps_num; VAR_19++)
  switch (FUNC_0 (VAR_3)->regexps [VAR_19]->mode)
    {
    case 129:
      if (VAR_18 < (FUNC_2 (FUNC_0 (VAR_3)
           ->regexps [VAR_19])->regexps_num))
        {
   VAR_17
     = (FUNC_2 (FUNC_0 (VAR_3)
           ->regexps [VAR_19])
        ->regexps [VAR_18]);
   VAR_14++;
        }
      break;
    case 128:
    case 130:
      if (VAR_18 == 0)
        {
   VAR_17 = FUNC_0 (VAR_3)->regexps [VAR_19];
   VAR_14++;
        }
      break;
    default:
      break;
    }

       if (VAR_14 == 1)
  FUNC_2 (VAR_15)->regexps [VAR_18] = VAR_17;
       else
  {
    VAR_16 = FUNC_4 (sizeof (struct regexp)
           + sizeof (regexp_t)
           * (VAR_14 - 1));
    VAR_16->mode = VAR_1;
    VAR_16->pos = VAR_3->pos;
    FUNC_0 (VAR_16)->regexps_num = VAR_14;
    FUNC_2 (VAR_15)->regexps [VAR_18] = VAR_16;
    VAR_14 = 0;
    for (VAR_19 = 0; VAR_19 < FUNC_0 (VAR_3)->regexps_num; VAR_19++)
      if (FUNC_0 (VAR_3)->regexps [VAR_19]->mode == 129
   && (VAR_18 <
       (FUNC_2 (FUNC_0 (VAR_3)
           ->regexps [VAR_19])->regexps_num)))
        {
   VAR_17 = (FUNC_2 (FUNC_0 (VAR_3)
           ->regexps [VAR_19])
        ->regexps [VAR_18]);
   FUNC_0 (VAR_16)->regexps [VAR_14]
     = VAR_17;
   VAR_14++;
        }
      else if (VAR_18 == 0
        && (FUNC_0 (VAR_3)->regexps [VAR_19]->mode
     == 128
     || (FUNC_0 (VAR_3)->regexps [VAR_19]->mode
         == 130)))
        {
   VAR_17 = FUNC_0 (VAR_3)->regexps [VAR_19];
   FUNC_0 (VAR_16)->regexps [VAR_14]
     = VAR_17;
   VAR_14++;
        }
  }
     }
   VAR_0 = 1;
   VAR_3 = VAR_15;
 }
    }
  return VAR_3;
}
