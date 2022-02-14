
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct show_state {TYPE_6__* rule; } ;
struct format_opts {int dummy; } ;
struct buf_pr {int dummy; } ;
struct TYPE_7__ {scalar_t__ opcode; } ;
typedef TYPE_1__ ipfw_insn ;
struct TYPE_8__ {int cmd_len; int act_ofs; } ;


 TYPE_1__* FUNC_0 (TYPE_6__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct buf_pr*,struct format_opts*,struct show_state*,TYPE_1__*) ;

__attribute__((used)) static ipfw_insn *
FUNC_3(struct buf_pr *VAR_0, struct format_opts *VAR_1,
    struct show_state *VAR_2, uint8_t VAR_3)
{
 ipfw_insn *VAR_4;
 int VAR_5;

 for (VAR_5 = VAR_2->rule->cmd_len - VAR_2->rule->act_ofs,
     VAR_4 = FUNC_0(VAR_2->rule); VAR_5 > 0;
     VAR_5 -= FUNC_1(VAR_4), VAR_4 += FUNC_1(VAR_4)) {
  if (VAR_4->opcode != VAR_3)
   continue;
  if (!FUNC_2(VAR_0, VAR_1, VAR_2, VAR_4))
   continue;
  return (VAR_4);
 }
 return (((void*)0));
}
