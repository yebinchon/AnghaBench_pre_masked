
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef void* tree ;
struct TYPE_16__ {int type; int keyword; } ;
typedef TYPE_1__ cp_token ;
struct TYPE_17__ {int lexer; void* qualifying_scope; void* object_scope; void* scope; } ;
typedef TYPE_2__ cp_parser ;




 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int) ;
 void* FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int,int,int,int) ;
 int FUNC_5 (TYPE_2__*,int) ;
 void* FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 void* FUNC_10 (TYPE_2__*,int,int,int) ;
 void* FUNC_11 (TYPE_2__*,int,int,int,int) ;
 void* VAR_2 ;

__attribute__((used)) static tree
FUNC_12 (cp_parser *VAR_3,
    bool VAR_4,
    bool VAR_5,
    bool *VAR_6,
    bool VAR_7,
    bool VAR_8)
{
  bool VAR_9;
  bool VAR_10;


  if (VAR_6)
    *VAR_6 = VAR_4;


  VAR_9
    = (FUNC_2 (VAR_3, 0)
       != VAR_0);

  VAR_10
    = (FUNC_4 (VAR_3,
                                0,
         VAR_5,
                    0,
         VAR_7)
       != VAR_0);


  if (VAR_10)
    {
      tree VAR_11;
      tree VAR_12;
      tree VAR_13;
      tree VAR_14;
      bool VAR_15;


      if (!VAR_6)
 VAR_6 = &VAR_15;
      *VAR_6 = FUNC_7 (VAR_3);


      VAR_11 = VAR_3->scope;
      VAR_12 = VAR_3->object_scope;
      VAR_13 = VAR_3->qualifying_scope;

      VAR_14 = FUNC_11 (VAR_3, *VAR_6,
       VAR_5,
       VAR_7,
                      0);

      VAR_3->scope = VAR_11;
      VAR_3->object_scope = VAR_12;
      VAR_3->qualifying_scope = VAR_13;

      return VAR_14;
    }


  else if (VAR_9)
    {
      cp_token *VAR_16;
      tree VAR_17;


      VAR_16 = FUNC_0 (VAR_3->lexer);




      if (VAR_16->type == 128
   && !FUNC_5
        (VAR_3, 2))
 return FUNC_3 (VAR_3);

      FUNC_9 (VAR_3);

      VAR_17 = FUNC_10 (VAR_3,
                             0,
                             1,
      VAR_7);

      if (FUNC_8 (VAR_3))
 return VAR_17;



      VAR_16 = FUNC_0 (VAR_3->lexer);

      switch (VAR_16->type)
 {
 case 128:
   return FUNC_3 (VAR_3);

 case 129:
   if (VAR_16->keyword == VAR_1)
     return FUNC_6 (VAR_3);


 default:
   FUNC_1 (VAR_3, "expected id-expression");
   return VAR_2;
 }
    }
  else
    return FUNC_11 (VAR_3, VAR_4,
                                1,
         VAR_7,
         VAR_8);
}
