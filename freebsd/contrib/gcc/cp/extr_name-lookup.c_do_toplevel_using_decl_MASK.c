
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_3__ {scalar_t__ value; scalar_t__ type; } ;
typedef TYPE_1__ cxx_binding ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__,scalar_t__) ;

void
FUNC_5 (tree VAR_3, tree VAR_4, tree VAR_5)
{
  tree VAR_6, VAR_7, VAR_8, VAR_9;
  tree VAR_10 = VAR_3;
  cxx_binding *VAR_11;

  VAR_3 = FUNC_4 (VAR_3, VAR_4, VAR_5);
  if (VAR_3 == VAR_0)
    return;

  VAR_11 = FUNC_1 (FUNC_0 (VAR_1), VAR_5);

  VAR_6 = VAR_11->value;
  VAR_7 = VAR_11->type;

  FUNC_3 (VAR_4, VAR_5, VAR_6, VAR_7, &VAR_8, &VAR_9);


  if (!VAR_2)
    FUNC_2 (VAR_10, VAR_1);


  if (VAR_8)
    VAR_11->value = VAR_8;
  if (VAR_9)
    VAR_11->type = VAR_9;
}
