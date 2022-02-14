
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int is_direct; int displacement; } ;
struct TYPE_4__ {TYPE_1__ branch; } ;
struct pt_insn_ext {TYPE_2__ variant; } ;
struct pt_ild {int disp_bytes; int disp_pos; } ;
typedef int int8_t ;
typedef int int32_t ;
typedef int int16_t ;


 scalar_t__ FUNC_0 (struct pt_ild const*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct pt_insn_ext *VAR_2, const struct pt_ild *VAR_3)
{
 if (!VAR_2 || !VAR_3)
  return -VAR_1;

 VAR_2->variant.branch.is_direct = 1;

 if (VAR_3->disp_bytes == 1) {
  const int8_t *VAR_4 = (const int8_t *)
   FUNC_0(VAR_3, VAR_3->disp_pos);

  VAR_2->variant.branch.displacement = *VAR_4;
 } else if (VAR_3->disp_bytes == 2) {
  const int16_t *VAR_5 = (const int16_t *)
   FUNC_0(VAR_3, VAR_3->disp_pos);

  VAR_2->variant.branch.displacement = *VAR_5;
 } else if (VAR_3->disp_bytes == 4) {
  const int32_t *VAR_6 = (const int32_t *)
   FUNC_0(VAR_3, VAR_3->disp_pos);

  VAR_2->variant.branch.displacement = *VAR_6;
 } else
  return -VAR_0;

 return 0;
}
