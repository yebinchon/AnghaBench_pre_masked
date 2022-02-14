
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tree ;
struct TYPE_5__ {int scope; } ;
typedef TYPE_1__ cp_parser ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,int,int,int,int) ;

__attribute__((used)) static tree
FUNC_2 (cp_parser *VAR_1,
     bool VAR_2,
     bool VAR_3,
     bool VAR_4,
     bool VAR_5)
{
  tree VAR_6;


  VAR_6 = FUNC_1 (VAR_1,
            VAR_2,
            VAR_3,
            VAR_4,
            VAR_5);

  if (!VAR_6)
    {
      FUNC_0 (VAR_1, "expected nested-name-specifier");
      VAR_1->scope = VAR_0;
    }

  return VAR_6;
}
