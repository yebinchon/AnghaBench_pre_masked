
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct decision_head {struct decision* last; struct decision* first; } ;
struct decision {scalar_t__ number; int position; struct decision_head success; } ;


 int VAR_0 ;
 struct decision* FUNC_0 (int,int) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static struct decision *
FUNC_2 (const char *VAR_1, struct decision_head *VAR_2)
{
  struct decision *VAR_3 = FUNC_0 (1, sizeof (struct decision));

  VAR_3->success = *VAR_2;
  VAR_3->position = FUNC_1 (VAR_1);
  VAR_3->number = VAR_0++;

  VAR_2->first = VAR_2->last = VAR_3;
  return VAR_3;
}
