
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int tree ;
struct TYPE_7__ {int lexer; } ;
typedef TYPE_1__ cp_parser ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int,int *) ;
 int FUNC_2 (TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,int ,char*) ;
 int VAR_1 ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static tree
FUNC_6 (cp_parser *VAR_2,
       tree VAR_3,
       bool VAR_4)
{
  tree VAR_5;


  FUNC_0 (VAR_2->lexer);
  if (VAR_4)
    VAR_5 = FUNC_1 (VAR_2, 0, ((void*)0));
  else
    VAR_5 = FUNC_2 (VAR_2, 0);


  FUNC_4 (VAR_2, VAR_0, "`]'");


  VAR_3 = FUNC_5 (VAR_3, VAR_5);



  if (!VAR_4
      && (FUNC_3
   (VAR_2, "an array reference")))
    VAR_3 = VAR_1;

  return VAR_3;
}
