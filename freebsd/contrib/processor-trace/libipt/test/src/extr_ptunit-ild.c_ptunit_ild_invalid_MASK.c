
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ptunit_result {int dummy; } ;
struct pt_insn_ext {int mode; int size; int raw; } ;
struct pt_insn {int mode; int size; int raw; } ;
typedef int insn ;
typedef int iext ;
typedef enum pt_exec_mode { ____Placeholder_pt_exec_mode } pt_exec_mode ;


 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (struct pt_insn_ext*,int ,int) ;
 int FUNC_2 (struct pt_insn_ext*,struct pt_insn_ext*) ;
 int VAR_0 ;
 int FUNC_3 (int,int ) ;
 struct ptunit_result FUNC_4 () ;

__attribute__((used)) static struct ptunit_result FUNC_5(uint8_t *VAR_1, uint8_t VAR_2,
            enum pt_exec_mode VAR_3)
{
 struct pt_insn_ext VAR_4;
 struct pt_insn VAR_5;
 int VAR_6;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 FUNC_1(&VAR_5, 0, sizeof(VAR_5));

 FUNC_0(VAR_5.raw, VAR_1, VAR_2);
 VAR_5.size = VAR_2;
 VAR_5.mode = VAR_3;

 VAR_6 = FUNC_2(&VAR_5, &VAR_4);
 FUNC_3(VAR_6, -VAR_0);

 return FUNC_4();
}
