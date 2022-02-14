
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef int cp_parser ;
typedef int cp_declarator ;
struct TYPE_4__ {scalar_t__ type; } ;
typedef TYPE_1__ cp_decl_specifier_seq ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int,TYPE_1__*) ;
 int FUNC_3 (scalar_t__*,scalar_t__,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (int *,TYPE_1__*,int ,int ,scalar_t__*) ;

__attribute__((used)) static tree
FUNC_5 (cp_parser* VAR_2)
{
  tree VAR_3;
  cp_decl_specifier_seq VAR_4;
  cp_declarator *VAR_5;
  tree VAR_6;


  VAR_3 = FUNC_0 (VAR_2);

  FUNC_2 (VAR_2, 0,
    &VAR_4);

  if (VAR_4.type == VAR_1)
    return VAR_1;

  VAR_5 = FUNC_1 (VAR_2);

  VAR_6 = FUNC_4 (VAR_5, &VAR_4, VAR_0,
                        0, &VAR_3);
  if (VAR_3)
    FUNC_3 (&VAR_6, VAR_3, 0);
  return VAR_6;
}
