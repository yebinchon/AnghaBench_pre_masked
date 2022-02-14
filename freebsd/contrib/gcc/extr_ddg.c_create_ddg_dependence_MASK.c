
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int rtx ;
typedef scalar_t__ dep_type ;
typedef scalar_t__ dep_data_type ;
typedef int ddg_ptr ;
typedef TYPE_1__* ddg_node_ptr ;
typedef int ddg_edge_ptr ;
struct TYPE_6__ {scalar_t__ cuid; int insn; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,scalar_t__,scalar_t__,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8 (ddg_ptr VAR_7, ddg_node_ptr VAR_8,
         ddg_node_ptr VAR_9, rtx VAR_10)
{
  ddg_edge_ptr VAR_11;
  int VAR_12, VAR_13 = 0;
  int VAR_14 = (VAR_8->cuid >= VAR_9->cuid);
  dep_type VAR_15 = VAR_6;
  dep_data_type VAR_16 = (FUNC_7 (VAR_8->insn)
        && FUNC_7 (VAR_9->insn) ? VAR_1
            : VAR_3);



  if (VAR_14)
     VAR_13 = 1;

  FUNC_5 (VAR_10);


  if (FUNC_0 (VAR_10) == VAR_4)
    VAR_15 = VAR_0;
  else if (FUNC_0 (VAR_10) == VAR_5)
    VAR_15 = VAR_2;
  VAR_12 = FUNC_6 (VAR_8->insn, VAR_10, VAR_9->insn);

  VAR_11 = FUNC_3 (VAR_8, VAR_9, VAR_15, VAR_16, VAR_12, VAR_13);

  if (VAR_14)
    {





      if (!(VAR_15 == VAR_2 && VAR_8 == VAR_9)
   && !(VAR_15 == VAR_0 && VAR_16 == VAR_3))
 FUNC_1 (VAR_7, VAR_11);
      else
 FUNC_4 (VAR_11);
    }
  else if (VAR_15 == VAR_0 && VAR_16 == VAR_3)
    FUNC_4 (VAR_11);
  else
    FUNC_2 (VAR_7, VAR_11);
}
