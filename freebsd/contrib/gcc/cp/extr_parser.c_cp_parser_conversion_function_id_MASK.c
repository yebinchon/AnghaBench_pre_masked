
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_5__ {scalar_t__ scope; scalar_t__ qualifying_scope; scalar_t__ object_scope; } ;
typedef TYPE_1__ cp_parser ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static tree
FUNC_5 (cp_parser* VAR_3)
{
  tree VAR_4;
  tree VAR_5;
  tree VAR_6;
  tree VAR_7;
  tree VAR_8 = VAR_0;


  if (!FUNC_1 (VAR_3, VAR_1, "`operator'"))
    return VAR_2;



  VAR_5 = VAR_3->scope;
  VAR_6 = VAR_3->qualifying_scope;
  VAR_7 = VAR_3->object_scope;
  if (VAR_5)
    VAR_8 = FUNC_4 (VAR_5);

  VAR_4 = FUNC_0 (VAR_3);

  if (VAR_8)
    FUNC_3 (VAR_8);

  VAR_3->scope = VAR_5;
  VAR_3->qualifying_scope = VAR_6;
  VAR_3->object_scope = VAR_7;

  if (VAR_4 == VAR_2)
    return VAR_2;
  return FUNC_2 (VAR_4);
}
