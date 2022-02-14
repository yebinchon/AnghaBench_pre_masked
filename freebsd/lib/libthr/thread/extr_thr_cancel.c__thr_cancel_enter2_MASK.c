
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread {int cancel_point; int tid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pthread*) ;
 int FUNC_1 (struct pthread*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void
FUNC_5(struct pthread *VAR_1, int VAR_2)
{
 VAR_1->cancel_point = 1;
 if (FUNC_2(FUNC_0(VAR_1) &&
     !FUNC_1(VAR_1))) {
  if (!VAR_2)
   FUNC_4(VAR_1->tid);
  else
   FUNC_3(VAR_0);
 }
}
