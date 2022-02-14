
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vla_hwint_t ;
typedef TYPE_1__* ainsn_t ;
struct TYPE_4__ {int insn_equiv_class_num; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int,int) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4 (vla_hwint_t *VAR_3, ainsn_t VAR_4, int VAR_5)
{
  int VAR_6;
  int VAR_7;

  FUNC_3 (VAR_4);
  VAR_6 = VAR_4->insn_equiv_class_num;
  for (VAR_7 = FUNC_0 (VAR_2, *VAR_3);
       VAR_7 <= VAR_6;
       VAR_7++)
    FUNC_2 (VAR_2,VAR_0, *VAR_3, VAR_1);
  FUNC_1 (VAR_2, *VAR_3, VAR_6, VAR_5);
}
