
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int rtx ;
typedef scalar_t__ dep_type ;
typedef int dep_data_type ;
typedef int ddg_ptr ;
typedef TYPE_1__* ddg_node_ptr ;
typedef int ddg_edge_ptr ;
struct TYPE_6__ {int insn; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*,scalar_t__,int ,int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_7 (ddg_ptr VAR_5, ddg_node_ptr VAR_6, ddg_node_ptr VAR_7,
   dep_type VAR_8, dep_data_type VAR_9, int VAR_10)
{
  ddg_edge_ptr VAR_11;
  int VAR_12;
  rtx VAR_13 = FUNC_3 (VAR_7->insn, VAR_1);

  if (VAR_8 == VAR_0)
    FUNC_0 (VAR_13, VAR_3);
  else if (VAR_8 == VAR_2)
    FUNC_0 (VAR_13, VAR_4);

  VAR_12 = FUNC_6 (VAR_6->insn, VAR_13, VAR_7->insn);
  FUNC_5 (VAR_13);

  VAR_11 = FUNC_4 (VAR_6, VAR_7, VAR_8, VAR_9, VAR_12, VAR_10);
  if (VAR_10 > 0)
    FUNC_1 (VAR_5, VAR_11);
  else
    FUNC_2 (VAR_5, VAR_11);
}
