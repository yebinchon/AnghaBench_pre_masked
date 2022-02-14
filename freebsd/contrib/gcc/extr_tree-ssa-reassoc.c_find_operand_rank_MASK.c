
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct operand_entry {int op; } ;
typedef int * operand_entry_t ;


 int VAR_0 ;
 void** FUNC_0 (int ,struct operand_entry*,int ) ;
 int VAR_1 ;

__attribute__((used)) static operand_entry_t
FUNC_1 (tree VAR_2)
{
  void **VAR_3;
  struct operand_entry VAR_4;

  VAR_4.op = VAR_2;
  VAR_3 = FUNC_0 (VAR_1, &VAR_4, VAR_0);
  if (!VAR_3)
    return ((void*)0);
  return ((operand_entry_t) *VAR_3);
}
