
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef TYPE_2__* regexp_t ;
typedef TYPE_3__* automaton_t ;
struct TYPE_17__ {int regexps_num; TYPE_2__** regexps; } ;
struct TYPE_16__ {TYPE_1__* unit_decl; } ;
struct TYPE_15__ {int automaton_order_num; } ;
struct TYPE_14__ {int mode; } ;
struct TYPE_13__ {int unit_num; int corresponding_automaton_num; } ;
struct TYPE_12__ {int regexps_num; TYPE_2__** regexps; } ;


 TYPE_10__* FUNC_0 (TYPE_2__*) ;
 TYPE_8__* FUNC_1 (TYPE_2__*) ;
 TYPE_6__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 () ;




 int FUNC_4 (int ,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_5 (regexp_t VAR_1, automaton_t VAR_2,
    int VAR_3)
{
  int VAR_4;

  if (VAR_1 == ((void*)0))
    return VAR_3;

  switch (VAR_1->mode)
    {
    case 128:
      if (FUNC_2 (VAR_1)->unit_decl->corresponding_automaton_num
          == VAR_2->automaton_order_num)
        FUNC_4 (VAR_0, VAR_3,
                          FUNC_2 (VAR_1)->unit_decl->unit_num);
      return VAR_3;

    case 129:
      for (VAR_4 = 0; VAR_4 < FUNC_1 (VAR_1)->regexps_num; VAR_4++)
 VAR_3
   = FUNC_5
     (FUNC_1 (VAR_1)->regexps [VAR_4], VAR_2, VAR_3) + 1;
      return VAR_3;

    case 131:
      {
 int VAR_5 = 0;
 int VAR_6;

 for (VAR_4 = 0; VAR_4 < FUNC_0 (VAR_1)->regexps_num; VAR_4++)
   {
     VAR_6 = FUNC_5 (FUNC_0 (VAR_1)
          ->regexps [VAR_4],
          VAR_2, VAR_3);
     if (VAR_5 < VAR_6)
       VAR_5 = VAR_6;
   }
 return VAR_5;
      }

    case 130:
      return VAR_3;

    default:
      FUNC_3 ();
    }
}
