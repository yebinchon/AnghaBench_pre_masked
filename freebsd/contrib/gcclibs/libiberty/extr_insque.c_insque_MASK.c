
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qelem {struct qelem* q_forw; struct qelem* q_back; } ;



void
FUNC_0 (struct qelem *VAR_0, struct qelem *VAR_1)
{
  VAR_0 -> q_forw = VAR_1 -> q_forw;
  VAR_1 -> q_forw -> q_back = VAR_0;
  VAR_0 -> q_back = VAR_1;
  VAR_1 -> q_forw = VAR_0;
}
