
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct show_state {scalar_t__ proto; int flags; TYPE_1__* rule; } ;
struct format_opts {int dummy; } ;
struct buf_pr {int dummy; } ;
struct TYPE_6__ {int opcode; int len; } ;
typedef TYPE_2__ ipfw_insn ;
struct TYPE_5__ {int act_ofs; TYPE_2__* cmd; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;



 int FUNC_1 (struct buf_pr*,char*) ;
 TYPE_2__* FUNC_2 (struct buf_pr*,struct format_opts*,struct show_state*,int const) ;

__attribute__((used)) static void
FUNC_3(struct buf_pr *VAR_4, struct format_opts *VAR_5,
    struct show_state *VAR_6)
{
 ipfw_insn *VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;


 VAR_9 = VAR_10 = VAR_11 = 0;
 for (VAR_8 = VAR_6->rule->act_ofs, VAR_7 = VAR_6->rule->cmd;
     VAR_8 > 0; VAR_8 -= FUNC_0(VAR_7), VAR_7 += FUNC_0(VAR_7)) {
  switch (VAR_7->opcode) {
  case 128:
   VAR_9++;
   break;
  case 130:
   VAR_10 = 1;
   if (VAR_7->len & VAR_0)
    VAR_10++;
   break;
  case 129:
   VAR_11 = 1;
   if (VAR_7->len & VAR_0)
    VAR_11++;
   break;
  default:
   continue;
  }
 }
 if (VAR_9 == 0 && VAR_10 == 0 && VAR_11 == 0) {
  VAR_6->proto = VAR_2;
  VAR_6->flags |= VAR_1;
  FUNC_1(VAR_4, " ip");
  return;
 }

 VAR_7 = ((void*)0);
 if (VAR_10 || VAR_11)
  VAR_7 = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_10 > VAR_11 ? 130: 129);
 if (VAR_7 != ((void*)0) && (VAR_7->len & VAR_0))
  VAR_7 = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_10 > VAR_11 ? 129: 130);
 if (VAR_7 == ((void*)0) || (VAR_7->len & VAR_0))
  for (VAR_8 = VAR_9; VAR_8 > 0; VAR_8--) {
   VAR_7 = FUNC_2(VAR_4, VAR_5, VAR_6, 128);
   if (VAR_7 == ((void*)0) || (VAR_7->len & VAR_0) == 0)
    break;
  }

 VAR_6->flags |= VAR_1;
 if (VAR_6->proto == 0 && VAR_11 != 0)
  VAR_6->proto = VAR_3;
}
