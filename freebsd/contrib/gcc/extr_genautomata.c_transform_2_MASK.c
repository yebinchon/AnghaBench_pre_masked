
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
struct TYPE_13__ {scalar_t__ mode; int pos; } ;
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
 scalar_t__ VAR_3 ;

__attribute__((used)) static regexp_t
FUNC_6 (regexp_t VAR_4)
{
  if (VAR_4->mode == VAR_3)
    {
      regexp_t VAR_5 = ((void*)0);
      regexp_t VAR_6;
      int VAR_7 = 0;
      int VAR_8, VAR_9;

      for (VAR_8 = 0; VAR_8 < FUNC_2 (VAR_4)->regexps_num; VAR_8++)
 if (FUNC_2 (VAR_4)->regexps [VAR_8]->mode == VAR_3)
   {
     VAR_7 = VAR_8;
     VAR_5 = FUNC_2 (VAR_4)->regexps [VAR_8];
     break;
   }
      if (VAR_8 < FUNC_2 (VAR_4)->regexps_num)
 {
   FUNC_5 (FUNC_2 (VAR_5)->regexps_num > 1
        && FUNC_2 (VAR_4)->regexps_num > 1);
   VAR_6 = FUNC_4 (sizeof (struct regexp)
                                + sizeof (regexp_t)
    * (FUNC_2 (VAR_4)->regexps_num
                                   + FUNC_2 (VAR_5)->regexps_num
                                   - 2));
   VAR_6->mode = VAR_3;
   VAR_6->pos = VAR_4->pos;
   FUNC_2 (VAR_6)->regexps_num
            = (FUNC_2 (VAR_4)->regexps_num
               + FUNC_2 (VAR_5)->regexps_num - 1);
   for (VAR_8 = 0; VAR_8 < FUNC_2 (VAR_4)->regexps_num; VAR_8++)
            if (VAR_8 < VAR_7)
              FUNC_2 (VAR_6)->regexps [VAR_8]
                = FUNC_3 (FUNC_2 (VAR_4)->regexps [VAR_8]);
            else if (VAR_8 > VAR_7)
              FUNC_2 (VAR_6)->regexps
                [VAR_8 + FUNC_2 (VAR_5)->regexps_num - 1]
                = FUNC_3 (FUNC_2 (VAR_4)->regexps [VAR_8]);
            else
              for (VAR_9 = 0; VAR_9 < FUNC_2 (VAR_5)->regexps_num; VAR_9++)
                FUNC_2 (VAR_6)->regexps [VAR_8 + VAR_9]
                  = FUNC_3 (FUNC_2 (VAR_5)->regexps [VAR_9]);
   VAR_0 = 1;
   VAR_4 = VAR_6;
 }
    }
  else if (VAR_4->mode == VAR_1)
    {
      regexp_t VAR_10 = ((void*)0);
      regexp_t VAR_11;
      int VAR_12 = 0;
      int VAR_13, VAR_14;

      for (VAR_13 = 0; VAR_13 < FUNC_0 (VAR_4)->regexps_num; VAR_13++)
 if (FUNC_0 (VAR_4)->regexps [VAR_13]->mode == VAR_1)
   {
     VAR_12 = VAR_13;
     VAR_10 = FUNC_0 (VAR_4)->regexps [VAR_13];
     break;
   }
      if (VAR_13 < FUNC_0 (VAR_4)->regexps_num)
 {
   FUNC_5 (FUNC_0 (VAR_10)->regexps_num > 1
        && FUNC_0 (VAR_4)->regexps_num > 1);
   VAR_11 = FUNC_4 (sizeof (struct regexp)
                                + sizeof (regexp_t)
    * (FUNC_0 (VAR_4)->regexps_num
                                   + FUNC_0 (VAR_10)->regexps_num - 2));
   VAR_11->mode = VAR_1;
   VAR_11->pos = VAR_4->pos;
   FUNC_0 (VAR_11)->regexps_num
            = (FUNC_0 (VAR_4)->regexps_num
               + FUNC_0 (VAR_10)->regexps_num - 1);
   for (VAR_13 = 0; VAR_13 < FUNC_0 (VAR_4)->regexps_num; VAR_13++)
            if (VAR_13 < VAR_12)
              FUNC_0 (VAR_11)->regexps [VAR_13]
                = FUNC_3 (FUNC_0 (VAR_4)->regexps [VAR_13]);
            else if (VAR_13 > VAR_12)
              FUNC_0 (VAR_11)->regexps
                [VAR_13 + FUNC_0 (VAR_10)->regexps_num - 1]
                = FUNC_3 (FUNC_0 (VAR_4)->regexps [VAR_13]);
            else
              for (VAR_14 = 0; VAR_14 < FUNC_0 (VAR_10)->regexps_num; VAR_14++)
                FUNC_0 (VAR_11)->regexps [VAR_13 + VAR_14]
                  = FUNC_3 (FUNC_0 (VAR_10)->regexps [VAR_14]);
   VAR_0 = 1;
   VAR_4 = VAR_11;
 }
    }
  else if (VAR_4->mode == VAR_2)
    {
      regexp_t VAR_15 = ((void*)0);
      regexp_t VAR_16;
      int VAR_17 = 0;
      int VAR_18, VAR_19;

      for (VAR_18 = 0; VAR_18 < FUNC_1 (VAR_4)->regexps_num; VAR_18++)
 if (FUNC_1 (VAR_4)->regexps [VAR_18]->mode == VAR_2)
   {
     VAR_17 = VAR_18;
     VAR_15 = FUNC_1 (VAR_4)->regexps [VAR_18];
     break;
   }
      if (VAR_18 < FUNC_1 (VAR_4)->regexps_num)
 {
   FUNC_5 (FUNC_1 (VAR_15)->regexps_num > 1
        && FUNC_1 (VAR_4)->regexps_num > 1);
   VAR_16 = FUNC_4 (sizeof (struct regexp)
    + sizeof (regexp_t)
    * (FUNC_1 (VAR_4)->regexps_num
                                   + FUNC_1 (VAR_15)->regexps_num - 2));
   VAR_16->mode = VAR_2;
   VAR_16->pos = VAR_4->pos;
   FUNC_1 (VAR_16)->regexps_num
     = (FUNC_1 (VAR_4)->regexps_num
               + FUNC_1 (VAR_15)->regexps_num - 1);
   for (VAR_18 = 0; VAR_18 < FUNC_1 (VAR_4)->regexps_num; VAR_18++)
            if (VAR_18 < VAR_17)
              FUNC_1 (VAR_16)->regexps [VAR_18]
                = FUNC_3 (FUNC_1 (VAR_4)->regexps [VAR_18]);
            else if (VAR_18 > VAR_17)
              FUNC_1 (VAR_16)->regexps
                [VAR_18 + FUNC_1 (VAR_15)->regexps_num - 1]
                = FUNC_3 (FUNC_1 (VAR_4)->regexps [VAR_18]);
            else
              for (VAR_19 = 0; VAR_19 < FUNC_1 (VAR_15)->regexps_num; VAR_19++)
                FUNC_1 (VAR_16)->regexps [VAR_18 + VAR_19]
                  = FUNC_3 (FUNC_1 (VAR_15)->regexps [VAR_19]);
   VAR_0 = 1;
   VAR_4 = VAR_16;
 }
    }
  return VAR_4;
}
