
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_17__ ;


typedef scalar_t__ tree ;
typedef enum rid { ____Placeholder_rid } rid ;
struct TYPE_20__ {int keyword; } ;
typedef TYPE_2__ cp_token ;
typedef int cp_parser_flags ;
struct TYPE_21__ {int lexer; } ;
typedef TYPE_3__ cp_parser ;
struct TYPE_22__ {int any_specifiers_p; scalar_t__* specs; } ;
typedef TYPE_4__ cp_decl_specifier_seq ;
typedef scalar_t__ cp_decl_spec ;
struct TYPE_19__ {scalar_t__ value; } ;
struct TYPE_18__ {TYPE_1__ u; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_17__* FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int,int) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,char*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_4__*,scalar_t__,int) ;
 scalar_t__ FUNC_9 (TYPE_3__*,TYPE_4__*,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static tree
FUNC_10 (cp_parser* VAR_9,
     cp_parser_flags VAR_10,
     cp_decl_specifier_seq *VAR_11,
     bool VAR_12,
     int* VAR_13,
     bool* VAR_14)
{
  tree VAR_15 = VAR_1;
  cp_token *VAR_16;
  enum rid VAR_17;
  cp_decl_spec VAR_18 = VAR_5;


  if (VAR_13)
    *VAR_13 = 0;

  if (VAR_14)
    *VAR_14 = 0;

  VAR_16 = FUNC_1 (VAR_9->lexer);



  VAR_17 = VAR_16->keyword;
  switch (VAR_17)
    {
    case 133:

      VAR_15 = FUNC_4 (VAR_9);

      if (VAR_15)
 {
   if (VAR_13)
     *VAR_13 = 2;
   if (VAR_11)
     FUNC_8 (VAR_11,
       VAR_15,
                          1);
   return VAR_15;
 }
      else
 goto elaborated_type_specifier;



    case 136:
    case 131:
    case 129:


      FUNC_7 (VAR_9);

      VAR_15 = FUNC_2 (VAR_9);

      if (FUNC_6 (VAR_9))
 {
   if (VAR_13)
     *VAR_13 = 2;
   if (VAR_11)
     FUNC_8 (VAR_11,
       VAR_15,
                          1);
   return VAR_15;
 }


    elaborated_type_specifier:

      if (VAR_13)
 *VAR_13 = 1;


    case 130:

      VAR_15
 = (FUNC_3
    (VAR_9,
     VAR_11 && VAR_11->specs[(int) VAR_4],
     VAR_12));
      if (VAR_11)
 FUNC_8 (VAR_11,
          VAR_15,
                             1);
      return VAR_15;

    case 134:
      VAR_18 = VAR_3;
      if (VAR_14)
 *VAR_14 = 1;
      break;

    case 128:
      VAR_18 = VAR_7;
      if (VAR_14)
 *VAR_14 = 1;
      break;

    case 132:
      VAR_18 = VAR_6;
      if (VAR_14)
 *VAR_14 = 1;
      break;

    case 135:

      VAR_18 = VAR_2;
      break;

    default:
      break;
    }


  if (VAR_18 != VAR_5)
    {
      if (VAR_11)
 {
   ++VAR_11->specs[(int)VAR_18];
   VAR_11->any_specifiers_p = 1;
 }
      return FUNC_0 (VAR_9->lexer)->u.value;
    }



  VAR_15 = FUNC_9 (VAR_9,
            VAR_11,
            VAR_10);



  if (!VAR_15 && !(VAR_10 & VAR_0))
    {
      FUNC_5 (VAR_9, "expected type specifier");
      return VAR_8;
    }

  return VAR_15;
}
