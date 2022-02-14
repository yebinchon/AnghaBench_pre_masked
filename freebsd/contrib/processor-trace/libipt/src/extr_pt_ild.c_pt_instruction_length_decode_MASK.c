
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ i; } ;
struct pt_ild {int mode; int map; scalar_t__ modrm_byte; scalar_t__ disp_bytes; scalar_t__ imm2_bytes; scalar_t__ imm1_bytes; TYPE_1__ u; } ;


 int VAR_0 ;
 int FUNC_0 (struct pt_ild*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct pt_ild *VAR_3)
{
 if (!VAR_3)
  return -VAR_2;

 VAR_3->u.i = 0;
 VAR_3->imm1_bytes = 0;
 VAR_3->imm2_bytes = 0;
 VAR_3->disp_bytes = 0;
 VAR_3->modrm_byte = 0;
 VAR_3->map = VAR_0;

 if (!VAR_3->mode)
  return -VAR_1;

 return FUNC_0(VAR_3);
}
