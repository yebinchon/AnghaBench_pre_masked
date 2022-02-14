
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct pt_insn_ext {int dummy; } ;
struct pt_insn {int mode; scalar_t__ ip; } ;
struct pt_image {int dummy; } ;
struct pt_asid {int dummy; } ;
typedef int insn ;
typedef enum pt_exec_mode { ____Placeholder_pt_exec_mode } pt_exec_mode ;


 int FUNC_0 (struct pt_insn*,int ,int) ;
 int FUNC_1 (struct pt_insn*,struct pt_insn_ext*,struct pt_image*,struct pt_asid const*) ;
 int FUNC_2 (scalar_t__*,struct pt_insn*,struct pt_insn_ext*) ;

int FUNC_3(uint64_t VAR_0, uint64_t VAR_1,
    enum pt_exec_mode VAR_2, struct pt_image *VAR_3,
    const struct pt_asid *VAR_4, size_t VAR_5)
{
 struct pt_insn_ext VAR_6;
 struct pt_insn VAR_7;

 FUNC_0(&VAR_7, 0, sizeof(VAR_7));

 VAR_7.mode = VAR_2;
 VAR_7.ip = VAR_0;

 while (VAR_7.ip != VAR_1) {
  int VAR_8;

  if (!VAR_5--)
   return 0;

  VAR_8 = FUNC_1(&VAR_7, &VAR_6, VAR_3, VAR_4);
  if (VAR_8 < 0)
   return VAR_8;

  VAR_8 = FUNC_2(&VAR_7.ip, &VAR_7, &VAR_6);
  if (VAR_8 < 0)
   return VAR_8;
 }

 return 1;
}
