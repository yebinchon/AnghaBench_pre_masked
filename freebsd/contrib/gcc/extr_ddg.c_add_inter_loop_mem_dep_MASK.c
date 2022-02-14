
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int ddg_ptr ;
typedef TYPE_1__* ddg_node_ptr ;
struct TYPE_6__ {scalar_t__ cuid; int insn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_1__*,TYPE_1__*,int ,int ,int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3 (ddg_ptr VAR_4, ddg_node_ptr VAR_5, ddg_node_ptr VAR_6)
{
  if (FUNC_2 (VAR_5->insn))
    {
      if (FUNC_1 (VAR_6->insn))
   FUNC_0 (VAR_4, VAR_5, VAR_6, VAR_3, VAR_1, 1);
      else if (VAR_5->cuid != VAR_6->cuid)
   FUNC_0 (VAR_4, VAR_5, VAR_6, VAR_2, VAR_1, 1);
    }
  else
    {
      if (FUNC_1 (VAR_6->insn))
 return;
      else if (VAR_5->cuid != VAR_6->cuid)
 {
     FUNC_0 (VAR_4, VAR_5, VAR_6, VAR_0, VAR_1, 1);
     FUNC_0 (VAR_4, VAR_6, VAR_5, VAR_3, VAR_1, 1);
 }
    }

}
