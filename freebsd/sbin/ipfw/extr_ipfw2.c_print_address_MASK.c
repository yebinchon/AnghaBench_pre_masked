
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct show_state {int flags; TYPE_1__* rule; } ;
struct format_opts {int dummy; } ;
struct buf_pr {int dummy; } ;
struct TYPE_6__ {int opcode; int len; } ;
typedef TYPE_2__ ipfw_insn ;
struct TYPE_5__ {int act_ofs; TYPE_2__* cmd; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (struct buf_pr*,char*) ;
 scalar_t__ FUNC_2 (int,int const*,size_t) ;
 int FUNC_3 (struct buf_pr*,struct format_opts*,struct show_state*,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_4(struct buf_pr *VAR_1, struct format_opts *VAR_2,
    struct show_state *VAR_3, const int VAR_4[], size_t VAR_5, int VAR_6,
    int VAR_7)
{
 ipfw_insn *VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12;

 VAR_9 = VAR_11 = 0;
 for (VAR_10 = VAR_3->rule->act_ofs, VAR_8 = VAR_3->rule->cmd;
     VAR_10 > 0; VAR_10 -= FUNC_0(VAR_8), VAR_8 += FUNC_0(VAR_8)) {
  if (FUNC_2(VAR_8->opcode, VAR_4, VAR_5))
   VAR_9++;
  else if (VAR_8->opcode == VAR_6)
   VAR_11++;
 }
 if (VAR_9 == 0)
  FUNC_1(VAR_1, " any");
 for (VAR_10 = VAR_3->rule->act_ofs, VAR_8 = VAR_3->rule->cmd;
     VAR_10 > 0 && VAR_9 > 0; VAR_10 -= FUNC_0(VAR_8), VAR_8 += FUNC_0(VAR_8)) {
  if (!FUNC_2(VAR_8->opcode, VAR_4, VAR_5))
   continue;
  FUNC_3(VAR_1, VAR_2, VAR_3, VAR_8);
  if ((VAR_8->len & VAR_0) == 0)
   break;
  VAR_9--;
 }




 if (VAR_11 == 1) {
  for (VAR_10 = VAR_3->rule->act_ofs, VAR_8 = VAR_3->rule->cmd, VAR_12 = 0;
      VAR_10 > 0; VAR_10 -= FUNC_0(VAR_8), VAR_8 += FUNC_0(VAR_8)) {
   if (VAR_8->opcode != VAR_6) {
    VAR_12 = (VAR_8->len & VAR_0);
    continue;
   }

   if (VAR_12 == 0 && (VAR_8->len & VAR_0) == 0)
    FUNC_3(VAR_1, VAR_2, VAR_3, VAR_8);
   break;
  }
 }
 VAR_3->flags |= VAR_7;
}
