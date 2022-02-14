
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
 int * FUNC_0 (int *,int ,int *,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (TYPE_1__*,int *) ;

__attribute__((used)) static tree
FUNC_5 (cp_parser* VAR_2)
{
  cp_decl_specifier_seq VAR_3;
  cp_declarator *VAR_4;


  FUNC_3 (VAR_2, 0,
    &VAR_3);
  if (VAR_3.type == VAR_1)
    return VAR_1;


  FUNC_2 (VAR_2);

  VAR_4
    = FUNC_0 (VAR_2, VAR_0, ((void*)0),
                           ((void*)0),
                    0);

  if (!FUNC_1 (VAR_2))
    VAR_4 = ((void*)0);

  return FUNC_4 (&VAR_3, VAR_4);
}
