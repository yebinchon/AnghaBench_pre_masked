
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


typedef scalar_t__ tree ;
typedef enum cpp_ttype { ____Placeholder_cpp_ttype } cpp_ttype ;
struct TYPE_15__ {scalar_t__ value; } ;
struct TYPE_16__ {scalar_t__ keyword; TYPE_1__ u; } ;
typedef TYPE_2__ cp_token ;
struct TYPE_17__ {int lexer; } ;
typedef TYPE_3__ cp_parser ;
typedef int cp_declarator ;
typedef int cp_decl_specifier_seq ;
struct TYPE_14__ {int type; } ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int * VAR_6 ;
 int FUNC_3 (scalar_t__,int ,int,int ,int ) ;
 int FUNC_4 (int ) ;
 TYPE_13__* FUNC_5 (int ,int) ;
 TYPE_2__* FUNC_6 (int ) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int * FUNC_9 (TYPE_3__*,int ,int *,int *,int) ;
 scalar_t__ FUNC_10 (TYPE_3__*,int) ;
 int FUNC_11 (TYPE_3__*) ;
 scalar_t__ FUNC_12 (TYPE_2__*) ;
 scalar_t__ FUNC_13 (TYPE_3__*,int ,int *,int,int*,int*) ;
 int FUNC_14 (char*) ;
 scalar_t__ VAR_7 ;
 scalar_t__* VAR_8 ;
 scalar_t__ FUNC_15 (int *,int *,int,int ,int ,scalar_t__*) ;

__attribute__((used)) static bool
FUNC_16 (cp_parser *VAR_9)
{
  int VAR_10;
  bool VAR_11;
  tree VAR_12;
  cp_decl_specifier_seq VAR_13;
  tree VAR_14;
  cp_token *VAR_15;
  bool VAR_16 = 0;
  cp_declarator *VAR_17;




  VAR_15 = FUNC_6 (VAR_9->lexer);
  if (FUNC_12 (VAR_15) || VAR_15->keyword == VAR_4)
    return 0;

  FUNC_11 (VAR_9);
  FUNC_2 (&VAR_13);
  VAR_12
    = FUNC_13 (VAR_9, VAR_1,
     &VAR_13,
                        1,
     &VAR_10,
     &VAR_11);
  VAR_17
    = FUNC_9 (VAR_9, VAR_0,
        ((void*)0),
                            ((void*)0),
                     0);
  if (VAR_17 == VAR_6)
    {
      FUNC_7 (VAR_9);
      return 0;
    }

  VAR_15 = FUNC_6 (VAR_9->lexer);

  VAR_14 = VAR_15->u.value;
  if (VAR_14 && FUNC_0 (VAR_14) == VAR_2
      && VAR_14 == VAR_8 [(int) VAR_5])
    {
      enum cpp_ttype VAR_18 = FUNC_5 (VAR_9->lexer, 2)->type;
      switch (VAR_18)
  {
    case 132:
    case 131:
    case 133:
    case 129: case 128:
    case 135: case 134:
    case 130:
       VAR_16 = 1;
        default:
         break;
  }
    }
  if (VAR_16)
    {
      tree VAR_19 = ((void*)0);
      tree VAR_20;
      if (VAR_12)
 {

   FUNC_8 (VAR_9);
    VAR_20 = FUNC_15 (VAR_17, &VAR_13,
         0 ,
         VAR_3 ,
         VAR_3 ,
         &VAR_19);

    if (!VAR_20 || VAR_20 == VAR_7)
      {
        FUNC_14 ("selector is undeclared");
        VAR_16 = 0;
      }
    else
      FUNC_3 (VAR_20,
        VAR_3 ,
       0 ,
        VAR_3 ,
        0 );
 }
      else {
  tree VAR_21;


  FUNC_7 (VAR_9);
  VAR_21 = FUNC_10 (VAR_9, 0);
  FUNC_1 (VAR_21);
      }


      FUNC_4 (VAR_9->lexer);
    }
  else
    FUNC_7 (VAR_9);
  return VAR_16;
}
