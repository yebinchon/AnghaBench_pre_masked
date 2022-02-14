
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_21__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_19__ ;
typedef struct TYPE_26__ TYPE_17__ ;
typedef struct TYPE_25__ TYPE_15__ ;
typedef struct TYPE_24__ TYPE_13__ ;
typedef struct TYPE_23__ TYPE_11__ ;


struct regexp {int dummy; } ;
typedef TYPE_1__* regexp_t ;
typedef TYPE_2__* decl_t ;
struct TYPE_32__ {int regexps_num; TYPE_1__** regexps; } ;
struct TYPE_31__ {int name; TYPE_19__* unit_decl; } ;
struct TYPE_30__ {int mode; } ;
struct TYPE_29__ {int reserv_is_used; } ;
struct TYPE_28__ {int mode; int pos; } ;
struct TYPE_27__ {int unit_is_used; } ;
struct TYPE_26__ {int regexps_num; TYPE_1__** regexps; } ;
struct TYPE_25__ {int regexps_num; TYPE_1__** regexps; } ;
struct TYPE_24__ {TYPE_1__* regexp; } ;
struct TYPE_23__ {TYPE_21__* reserv_decl; int name; } ;


 TYPE_21__* FUNC_0 (TYPE_2__*) ;
 TYPE_19__* FUNC_1 (TYPE_2__*) ;
 TYPE_17__* FUNC_2 (TYPE_1__*) ;
 TYPE_15__* FUNC_3 (TYPE_1__*) ;
 TYPE_13__* FUNC_4 (TYPE_1__*) ;
 TYPE_11__* FUNC_5 (TYPE_1__*) ;
 TYPE_9__* FUNC_6 (TYPE_1__*) ;
 TYPE_7__* FUNC_7 (TYPE_1__*) ;
 TYPE_1__* FUNC_8 (int) ;


 int FUNC_9 (char*,int ) ;
 TYPE_2__* FUNC_10 (int ) ;
 int FUNC_11 () ;




 int VAR_0 ;



__attribute__((used)) static regexp_t
FUNC_12 (regexp_t VAR_1)
{
  decl_t VAR_2;
  regexp_t VAR_3;
  int VAR_4;

  switch (VAR_1->mode)
    {
    case 128:
      VAR_2 = FUNC_10 (FUNC_7 (VAR_1)->name);
      if (VAR_2 == ((void*)0))
        FUNC_9 ("undeclared unit or reservation `%s'",
        FUNC_7 (VAR_1)->name);
      else
 switch (VAR_2->mode)
   {
   case 134:
     FUNC_1 (VAR_2)->unit_is_used = 1;
     FUNC_7 (VAR_1)->unit_decl = FUNC_1 (VAR_2);
     break;

   case 135:
     FUNC_0 (VAR_2)->reserv_is_used = 1;
     VAR_3 = FUNC_8 (sizeof (struct regexp));
     VAR_3->mode = VAR_0;
     VAR_3->pos = VAR_1->pos;
     FUNC_5 (VAR_3)->name = FUNC_7 (VAR_1)->name;
     FUNC_5 (VAR_3)->reserv_decl
       = FUNC_0 (VAR_2);
     VAR_1 = VAR_3;
     break;

   default:
     FUNC_11 ();
 }
      break;
    case 129:
      for (VAR_4 = 0; VAR_4 <FUNC_6 (VAR_1)->regexps_num; VAR_4++)
 FUNC_6 (VAR_1)->regexps [VAR_4]
   = FUNC_12 (FUNC_6 (VAR_1)->regexps [VAR_4]);
      break;
    case 133:
      for (VAR_4 = 0; VAR_4 < FUNC_2 (VAR_1)->regexps_num; VAR_4++)
 FUNC_2 (VAR_1)->regexps [VAR_4]
   = FUNC_12 (FUNC_2 (VAR_1)->regexps [VAR_4]);
      break;
    case 131:
      for (VAR_4 = 0; VAR_4 < FUNC_3 (VAR_1)->regexps_num; VAR_4++)
 FUNC_3 (VAR_1)->regexps [VAR_4]
   = FUNC_12 (FUNC_3 (VAR_1)->regexps [VAR_4]);
      break;
    case 130:
      FUNC_4 (VAR_1)->regexp
 = FUNC_12 (FUNC_4 (VAR_1)->regexp);
      break;
    case 132:
      break;
    default:
      FUNC_11 ();
    }
  return VAR_1;
}
