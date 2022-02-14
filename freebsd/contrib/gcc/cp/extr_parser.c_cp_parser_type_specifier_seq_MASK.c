
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int tree ;
typedef int cp_parser_flags ;
struct TYPE_11__ {int lexer; } ;
typedef TYPE_1__ cp_parser ;
struct TYPE_12__ {int type; int attributes; } ;
typedef TYPE_2__ cp_decl_specifier_seq ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*,int ,TYPE_2__*,int,int *,int*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_7 (cp_parser* VAR_4,
         bool VAR_5,
         cp_decl_specifier_seq *VAR_6)
{
  bool VAR_7 = 0;
  cp_parser_flags VAR_8 = VAR_1;


  FUNC_1 (VAR_6);


  while (1)
    {
      tree VAR_9;
      bool VAR_10;


      if (FUNC_2 (VAR_4->lexer, VAR_2))
 {
   VAR_6->attributes =
     FUNC_0 (VAR_6->attributes,
       FUNC_3 (VAR_4));
   continue;
 }


      VAR_9 = FUNC_6 (VAR_4,
       VAR_8,
       VAR_6,
                          0,
       ((void*)0),
       &VAR_10);
      if (!VAR_9)
 {


   if (!VAR_7)
     {
       FUNC_5 (VAR_4, "expected type-specifier");
       VAR_6->type = VAR_3;
       return;
     }


   break;
 }

      VAR_7 = 1;
      if (VAR_5 && !VAR_10)
 VAR_8 |= VAR_0;
    }

  FUNC_4 (VAR_6);
}
