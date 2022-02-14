
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef int cp_declarator ;
struct TYPE_4__ {scalar_t__ attributes; } ;
typedef TYPE_1__ cp_decl_specifier_seq ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__*,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int const*,TYPE_1__*,int ,int ,scalar_t__*) ;

tree
FUNC_2 (cp_decl_specifier_seq *VAR_2,
    const cp_declarator *VAR_3)
{
  tree VAR_4;
  tree VAR_5 = VAR_2->attributes;

  VAR_2->attributes = VAR_1;

  VAR_4 = FUNC_1 (VAR_3, VAR_2, VAR_0, 0, &VAR_5);
  if (VAR_5)
      FUNC_0 (&VAR_4, VAR_5, 0);
  return VAR_4;
}
