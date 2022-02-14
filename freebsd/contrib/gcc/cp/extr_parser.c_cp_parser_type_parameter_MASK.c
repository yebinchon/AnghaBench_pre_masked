
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int tree ;
struct TYPE_12__ {int keyword; } ;
typedef TYPE_1__ cp_token ;
struct TYPE_13__ {int lexer; } ;
typedef TYPE_2__ cp_parser ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int FUNC_0 (int ) ;
 int VAR_7 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_2__*,int,int,int*,int,int) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int ,int ,int,int,int,int *) ;
 TYPE_1__* FUNC_9 (TYPE_2__*,int ,char*) ;
 int FUNC_10 (TYPE_2__*,int const,char*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 () ;
 int VAR_11 ;
 int FUNC_16 () ;
 int FUNC_17 (int ) ;

__attribute__((used)) static tree
FUNC_18 (cp_parser* VAR_12)
{
  cp_token *VAR_13;
  tree VAR_14;


  VAR_13 = FUNC_9 (VAR_12, VAR_3,
        "`class', `typename', or `template'");
  if (!VAR_13)
    return VAR_10;

  switch (VAR_13->keyword)
    {
    case 130:
    case 128:
      {
 tree VAR_15;
 tree VAR_16;



 if (FUNC_4 (VAR_12->lexer, VAR_5))
   VAR_15 = FUNC_7 (VAR_12);
 else
   VAR_15 = VAR_6;


 VAR_14 = FUNC_14 (VAR_8, VAR_15);


 if (FUNC_4 (VAR_12->lexer, VAR_1))
   {

     FUNC_3 (VAR_12->lexer);

     FUNC_17 (VAR_9);
     VAR_16 = FUNC_12 (VAR_12);
     FUNC_16 ();
   }
 else
   VAR_16 = VAR_6;



 VAR_14 = FUNC_1 (VAR_16, VAR_14);
      }
      break;

    case 129:
      {
 tree VAR_17;
 tree VAR_18;
 tree VAR_19;


 FUNC_9 (VAR_12, VAR_4, "`<'");

 VAR_17 = FUNC_11 (VAR_12);

 FUNC_9 (VAR_12, VAR_2, "`>'");

 FUNC_10 (VAR_12, 130, "`class'");




 if (FUNC_5 (VAR_12->lexer, VAR_1)
     && FUNC_5 (VAR_12->lexer, VAR_2)
     && FUNC_5 (VAR_12->lexer, VAR_0))
   {
     VAR_18 = FUNC_7 (VAR_12);

     if (VAR_18 == VAR_10)
       VAR_18 = VAR_6;
   }
 else
   VAR_18 = VAR_6;


 VAR_14 = FUNC_13 (VAR_8,
         VAR_18);



 if (FUNC_4 (VAR_12->lexer, VAR_1))
   {
     bool VAR_20;


     FUNC_3 (VAR_12->lexer);

     FUNC_17 (VAR_9);
     VAR_19
       = FUNC_6 (VAR_12,
                             0,
                             1,
                     &VAR_20,
                       0,
                     0);
     if (FUNC_0 (VAR_19) == VAR_7)



   ;
     else

       VAR_19
  = FUNC_8 (VAR_12, VAR_19,
      VAR_11,
                      VAR_20,
                       0,
                           1,
                          ((void*)0));

     VAR_19
       = FUNC_2 (VAR_19);
     FUNC_16 ();
   }
 else
   VAR_19 = VAR_6;



 VAR_14 = FUNC_1 (VAR_19, VAR_14);
      }
      break;

    default:
      FUNC_15 ();
      break;
    }

  return VAR_14;
}
