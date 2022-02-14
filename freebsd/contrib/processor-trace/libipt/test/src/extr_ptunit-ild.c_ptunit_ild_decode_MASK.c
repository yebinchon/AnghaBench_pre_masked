
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ptunit_result {int dummy; } ;
struct pt_insn_ext {int mode; int iclass; int size; int raw; } ;
struct pt_insn {int mode; int iclass; int size; int raw; } ;
typedef int insn ;
typedef int iext ;
typedef enum pt_exec_mode { ____Placeholder_pt_exec_mode } pt_exec_mode ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (struct pt_insn_ext*,int ,int) ;
 int FUNC_2 (struct pt_insn_ext*,struct pt_insn_ext*) ;
 int VAR_1 ;
 int FUNC_3 (int,int ) ;
 struct ptunit_result FUNC_4 () ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static struct ptunit_result FUNC_6(uint8_t *VAR_2, uint8_t VAR_3,
           enum pt_exec_mode VAR_4)
{
 struct pt_insn_ext VAR_5;
 struct pt_insn VAR_6;
 int VAR_7;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 FUNC_1(&VAR_6, 0, sizeof(VAR_6));

 FUNC_0(VAR_6.raw, VAR_2, VAR_3);
 VAR_6.size = VAR_3;
 VAR_6.mode = VAR_4;

 VAR_7 = FUNC_2(&VAR_6, &VAR_5);
 FUNC_3(VAR_7, 0);

 FUNC_5(VAR_6.size, VAR_3);
 FUNC_3(VAR_6.iclass, VAR_1);
 FUNC_3(VAR_5.iclass, VAR_0);

 return FUNC_4();
}
