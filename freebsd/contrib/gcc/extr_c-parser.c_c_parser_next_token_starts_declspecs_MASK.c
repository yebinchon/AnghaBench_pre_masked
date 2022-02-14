
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ id_kind; } ;
typedef TYPE_1__ c_token ;
typedef int c_parser ;
struct TYPE_6__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_4__* FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static inline bool
FUNC_3 (c_parser *VAR_2)
{
  c_token *VAR_3 = FUNC_1 (VAR_2);



  return FUNC_2 (VAR_3)
  && (VAR_3->id_kind != VAR_1
      || FUNC_0 (VAR_2)->type != VAR_0);

}
