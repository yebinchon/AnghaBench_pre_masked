
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tree ;
typedef TYPE_1__* operand_entry_t ;
struct TYPE_4__ {unsigned int rank; int op; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 void** FUNC_1 (int ,TYPE_1__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3 (tree VAR_3, unsigned int VAR_4)
{
  void **VAR_5;
  operand_entry_t VAR_6 = FUNC_2 (VAR_1);

  VAR_6->op = VAR_3;
  VAR_6->rank = VAR_4;
  VAR_5 = FUNC_1 (VAR_2, VAR_6, VAR_0);
  FUNC_0 (*VAR_5 == ((void*)0));
  *VAR_5 = VAR_6;
}
