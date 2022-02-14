
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_20__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_23__ {int keyword; } ;
typedef TYPE_2__ cp_token ;
typedef int cp_parser_flags ;
struct TYPE_24__ {scalar_t__ scope; int lexer; } ;
typedef TYPE_3__ cp_parser ;
struct TYPE_25__ {int explicit_char_p; int explicit_int_p; int any_specifiers_p; scalar_t__ type; int * specs; } ;
typedef TYPE_4__ cp_decl_specifier_seq ;
struct TYPE_21__ {scalar_t__ value; } ;
struct TYPE_22__ {TYPE_1__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ VAR_6 ;
 TYPE_20__* FUNC_6 (int ) ;
 TYPE_2__* FUNC_7 (int ) ;
 int FUNC_8 (TYPE_3__*,scalar_t__) ;
 int FUNC_9 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_10 (TYPE_3__*,int) ;
 scalar_t__ FUNC_11 (TYPE_3__*,int,int,int,int) ;
 scalar_t__ FUNC_12 (TYPE_3__*) ;
 scalar_t__ FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (TYPE_4__*,scalar_t__,int) ;
 scalar_t__ FUNC_17 (TYPE_3__*,int const) ;
 scalar_t__ FUNC_18 (TYPE_3__*,int,int,int) ;
 scalar_t__ FUNC_19 (TYPE_3__*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_20 (scalar_t__) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_21 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_22 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_23 (scalar_t__) ;
 scalar_t__ FUNC_24 (scalar_t__) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;

__attribute__((used)) static tree
FUNC_25 (cp_parser* VAR_20,
     cp_decl_specifier_seq *VAR_21,
     cp_parser_flags VAR_22)
{
  tree VAR_23 = VAR_3;
  cp_token *VAR_24;


  VAR_24 = FUNC_7 (VAR_20->lexer);


  switch (VAR_24->keyword)
    {
    case 138:
      if (VAR_21)
 VAR_21->explicit_char_p = 1;
      VAR_23 = VAR_6;
      break;
    case 128:
      VAR_23 = VAR_19;
      break;
    case 139:
      VAR_23 = VAR_5;
      break;
    case 133:
      if (VAR_21)
 ++VAR_21->specs[(int) VAR_9];
      VAR_23 = VAR_16;
      break;
    case 135:
      if (VAR_21)
 VAR_21->explicit_int_p = 1;
      VAR_23 = VAR_14;
      break;
    case 134:
      if (VAR_21)
 ++VAR_21->specs[(int) VAR_8];
      VAR_23 = VAR_15;
      break;
    case 132:
      if (VAR_21)
 ++VAR_21->specs[(int) VAR_10];
      VAR_23 = VAR_14;
      break;
    case 130:
      if (VAR_21)
 ++VAR_21->specs[(int) VAR_11];
      VAR_23 = VAR_17;
      break;
    case 136:
      VAR_23 = VAR_13;
      break;
    case 137:
      VAR_23 = VAR_7;
      break;
    case 129:
      VAR_23 = VAR_18;
      break;

    case 131:

      FUNC_6 (VAR_20->lexer);

      VAR_23 = FUNC_17 (VAR_20, 131);

      if (!FUNC_4 (VAR_23))
 VAR_23 = FUNC_20 (VAR_23);

      if (VAR_21)
 FUNC_16 (VAR_21, VAR_23,
                             1);

      return VAR_23;

    default:
      break;
    }


  if (VAR_23)
    {
      tree VAR_25;


      if (VAR_21
   && (VAR_24->keyword != 132
       && VAR_24->keyword != 130
       && VAR_24->keyword != 133
       && VAR_24->keyword != 134))
 FUNC_16 (VAR_21,
          VAR_23,
                           0);
      if (VAR_21)
 VAR_21->any_specifiers_p = 1;


      VAR_25 = FUNC_6 (VAR_20->lexer)->u.value;




      FUNC_8 (VAR_20, VAR_23);

      return FUNC_3 (VAR_23);
    }


  if (!(VAR_22 & VAR_0))
    {
      bool VAR_26;
      bool VAR_27;



      if (VAR_22 & VAR_1)
 FUNC_15 (VAR_20);


      VAR_27
 = (FUNC_10 (VAR_20,
                                     0)
    != VAR_3);

      VAR_26
 = (FUNC_11 (VAR_20,
                             0,
                             1,
                 0,
                         0)
    != VAR_3);


      if (VAR_20->scope
   && FUNC_13 (VAR_20))
 {

   VAR_23 = FUNC_18 (VAR_20,
                            1,
                            1,
                        0);


   if (FUNC_1 (VAR_23) != VAR_4)
     {
       FUNC_9 (VAR_20, "expected template-id for type");
       VAR_23 = VAR_3;
     }
 }

      else
 VAR_23 = FUNC_19 (VAR_20);

      if (VAR_23
   && !VAR_27
   && !VAR_26
   && FUNC_1 (VAR_23) == VAR_4
   && FUNC_1 (FUNC_0 (VAR_23)) == VAR_2)
 FUNC_21 (FUNC_0 (VAR_23), VAR_23);

      if ((VAR_22 & VAR_1)
   && !FUNC_14 (VAR_20))
 VAR_23 = VAR_3;
      if (VAR_23 && VAR_21)
 FUNC_16 (VAR_21, VAR_23,
                           1);
    }


  if (!VAR_23 && !(VAR_22 & VAR_1))
    {
      FUNC_9 (VAR_20, "expected type-name");
      return VAR_12;
    }




  if (VAR_23 && VAR_23 != VAR_12)
    {



      if (FUNC_5 ()
   && (FUNC_24 (VAR_23) || FUNC_23 (VAR_23)))
 {
   tree VAR_28 = FUNC_12 (VAR_20);
   tree VAR_29 = FUNC_22 (VAR_23, VAR_28);



   if (VAR_21)
     VAR_21->type = VAR_29;

   return VAR_29;
 }

      FUNC_8 (VAR_20, FUNC_2 (VAR_23));
    }

  return VAR_23;
}
