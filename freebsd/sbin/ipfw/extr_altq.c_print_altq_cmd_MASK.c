
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct buf_pr {int dummy; } ;
struct TYPE_3__ {char const* qid; } ;
typedef TYPE_1__ ipfw_insn_altq ;


 char* FUNC_0 (char const*) ;
 int FUNC_1 (struct buf_pr*,char*,char const*) ;

void
FUNC_2(struct buf_pr *VAR_0, ipfw_insn_altq *VAR_1)
{
 if (VAR_1) {
  const char *VAR_2;

  VAR_2 = FUNC_0(VAR_1->qid);
  if (VAR_2 == ((void*)0))
   FUNC_1(VAR_0, " altq ?<%u>", VAR_1->qid);
  else
   FUNC_1(VAR_0, " altq %s", VAR_2);
 }
}
