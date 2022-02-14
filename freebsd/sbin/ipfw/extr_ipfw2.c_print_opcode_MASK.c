
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct show_state {TYPE_1__* rule; } ;
struct format_opts {int dummy; } ;
struct buf_pr {int dummy; } ;
struct TYPE_7__ {int opcode; } ;
typedef TYPE_2__ ipfw_insn ;
struct TYPE_6__ {int act_ofs; TYPE_2__* cmd; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (struct buf_pr*,struct format_opts*,struct show_state*,TYPE_2__*) ;

__attribute__((used)) static ipfw_insn *
FUNC_2(struct buf_pr *VAR_1, struct format_opts *VAR_2,
    struct show_state *VAR_3, int VAR_4)
{
 ipfw_insn *VAR_5;
 int VAR_6;

 for (VAR_6 = VAR_3->rule->act_ofs, VAR_5 = VAR_3->rule->cmd;
     VAR_6 > 0; VAR_6 -= FUNC_0(VAR_5), VAR_5 += FUNC_0(VAR_5)) {

  if (VAR_4 >= 0 && VAR_5->opcode != VAR_4)
   continue;




  if (VAR_5->opcode == VAR_0 && VAR_4 != VAR_0)
   continue;
  if (!FUNC_1(VAR_1, VAR_2, VAR_3, VAR_5))
   continue;
  return (VAR_5);
 }
 return (((void*)0));
}
