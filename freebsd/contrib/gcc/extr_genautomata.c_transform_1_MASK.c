
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct regexp {int dummy; } ;
typedef TYPE_1__* regexp_t ;
typedef scalar_t__ pos_t ;
struct TYPE_12__ {int repeat_num; TYPE_1__* regexp; } ;
struct TYPE_11__ {int regexps_num; int * regexps; } ;
struct TYPE_10__ {scalar_t__ mode; scalar_t__ pos; } ;


 TYPE_8__* FUNC_0 (TYPE_1__*) ;
 TYPE_6__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static regexp_t
FUNC_5 (regexp_t VAR_3)
{
  int VAR_4;
  int VAR_5;
  regexp_t VAR_6;
  pos_t VAR_7;

  if (VAR_3->mode == VAR_1)
    {
      VAR_5 = FUNC_0 (VAR_3)->repeat_num;
      FUNC_4 (VAR_5 > 1);
      VAR_6 = FUNC_0 (VAR_3)->regexp;
      VAR_7 = VAR_3->mode;
      VAR_3 = FUNC_3 (sizeof (struct regexp) + sizeof (regexp_t)
       * (VAR_5 - 1));
      VAR_3->mode = VAR_2;
      VAR_3->pos = VAR_7;
      FUNC_1 (VAR_3)->regexps_num = VAR_5;
      for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
 FUNC_1 (VAR_3)->regexps [VAR_4] = FUNC_2 (VAR_6);
      VAR_0 = 1;
    }
  return VAR_3;
}
