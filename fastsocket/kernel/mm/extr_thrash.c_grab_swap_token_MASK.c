
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {void* faultstamp; scalar_t__ token_priority; int last_interval; } ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 struct mm_struct* VAR_2 ;

void FUNC_3(struct mm_struct *VAR_3)
{
 int VAR_4;

 VAR_0++;

 VAR_4 = VAR_0 - VAR_3->faultstamp;

 if (!FUNC_1(&VAR_1))
  return;


 if (VAR_2 == ((void*)0)) {
  VAR_3->token_priority = VAR_3->token_priority + 2;
  VAR_2 = VAR_3;
  goto out;
 }

 if (VAR_3 != VAR_2) {
  if (VAR_4 < VAR_3->last_interval)
   VAR_3->token_priority++;
  else {
   if (FUNC_0(VAR_3->token_priority > 0))
    VAR_3->token_priority--;
  }

  if (VAR_3->token_priority > VAR_2->token_priority) {
   VAR_3->token_priority += 2;
   VAR_2 = VAR_3;
  }
 } else {

  VAR_3->token_priority += 2;
 }

out:
 VAR_3->faultstamp = VAR_0;
 VAR_3->last_interval = VAR_4;
 FUNC_2(&VAR_1);
}
