
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int end_addr; int begin_addr; scalar_t__ func_num; TYPE_3__* patches; } ;
typedef TYPE_1__ scope_t ;
struct TYPE_8__ {scalar_t__ skip_instr; int skip_patch; int begin; scalar_t__ patch_func; } ;
typedef TYPE_2__ patch_t ;
struct TYPE_9__ {scalar_t__ skip_instr; int skip_patch; } ;
typedef TYPE_3__ patch_info_t ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int VAR_2 ;
 int FUNC_3 (char*,int ) ;

void
FUNC_4(scope_t *VAR_3, int VAR_4)
{
 patch_info_t *VAR_5;
 patch_t *VAR_6;

 VAR_5 = &VAR_3->patches[VAR_4];

 if (VAR_5->skip_instr == 0)

  return;

 VAR_6 = (patch_t *)FUNC_1(sizeof(*VAR_6));

 if (VAR_6 == ((void*)0))
  FUNC_3("Could not malloc patch structure", VAR_0);

 FUNC_2(VAR_6, 0, sizeof(*VAR_6));

 if (VAR_4 == 0) {
  VAR_6->patch_func = VAR_3->func_num;
  VAR_6->begin = VAR_3->begin_addr;
 } else {
  VAR_6->patch_func = 0;
  VAR_6->begin = VAR_3->end_addr;
 }
 VAR_6->skip_instr = VAR_5->skip_instr;
 VAR_6->skip_patch = VAR_5->skip_patch;
 FUNC_0(&VAR_2, VAR_6, VAR_1);
}
