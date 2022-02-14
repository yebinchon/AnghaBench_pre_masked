
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_11__ {scalar_t__ value; } ;
struct TYPE_12__ {TYPE_1__ u; } ;
typedef TYPE_2__ cp_token ;
struct TYPE_13__ {int lexer; } ;
typedef TYPE_3__ cp_parser ;
struct TYPE_14__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 TYPE_9__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int,int*) ;
 int FUNC_5 (TYPE_3__*,int ,char*) ;
 int FUNC_6 (TYPE_3__*,int,int,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static tree
FUNC_10 (cp_parser* VAR_6,
      bool VAR_7,
      bool VAR_8,
      bool *VAR_9)
{
  tree VAR_10 = VAR_4;
  bool VAR_11 = VAR_7;
  tree VAR_12 = VAR_4;


  if (VAR_9)
    *VAR_9 = 0;

  if (!FUNC_5 (VAR_6, VAR_3, "`('"))
    return VAR_5;


  if (FUNC_1 (VAR_6->lexer, VAR_0))
    while (1)
      {
 tree VAR_13;



 if (VAR_7
     && FUNC_2 (VAR_6->lexer)->type == VAR_2)
   {
     cp_token *VAR_14;


     VAR_14 = FUNC_0 (VAR_6->lexer);

     VAR_12 = VAR_14->u.value;
   }
 else
   {

     if (VAR_9)
       {
  bool VAR_15;
  VAR_13 = (FUNC_4
   (VAR_6, 1,
    &VAR_15));
  if (VAR_15)
    *VAR_9 = 1;
       }
     else
       VAR_13 = FUNC_3 (VAR_6, VAR_8);

     if (VAR_11)
       VAR_13 = FUNC_7 (VAR_13);





     VAR_10 = FUNC_9 (VAR_4, VAR_13, VAR_10);

     if (VAR_13 == VAR_5)
       goto skip_comma;
   }



 VAR_7 = 0;

      get_comma:;

 if (FUNC_1 (VAR_6->lexer, VAR_1))
   break;


 FUNC_0 (VAR_6->lexer);
      }

  if (!FUNC_5 (VAR_6, VAR_0, "`)'"))
    {
      int VAR_16;

    skip_comma:;


      VAR_16 = FUNC_6 (VAR_6,
                           1,
                         1,
                              1);
      if (VAR_16 < 0)
 goto get_comma;
      if (!VAR_16)
 return VAR_5;
    }


  VAR_10 = FUNC_8 (VAR_10);
  if (VAR_12)
    VAR_10 = FUNC_9 (VAR_4, VAR_12, VAR_10);

  return VAR_10;
}
