
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sscop_sig {int msg; int sig; } ;
struct sscop {int in_sig; int sigs; } ;
typedef int sscop_sigq_head_t ;


 int FUNC_0 (int *,struct sscop_sig*) ;
 struct sscop_sig* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct sscop_sig*) ;
 scalar_t__ FUNC_6 (struct sscop*,int ,int ) ;

__attribute__((used)) static void
FUNC_7(struct sscop *VAR_0)
{
 struct sscop_sig *VAR_1;
 sscop_sigq_head_t VAR_2, VAR_3;
 int VAR_4;

 VAR_0->in_sig++;
 FUNC_2(&VAR_3);
 FUNC_2(&VAR_2);
 do {
  VAR_4 = 0;




  FUNC_3(&VAR_0->sigs, &VAR_3);




  while((VAR_1 = FUNC_1(&VAR_3)) != ((void*)0)) {
   if(FUNC_6(VAR_0, VAR_1->sig, VAR_1->msg)) {
    VAR_4 = 1;
    FUNC_5(VAR_1);
   } else {
    FUNC_0(&VAR_2, VAR_1);
   }
  }





  FUNC_4(&VAR_2, &VAR_0->sigs);
 } while(VAR_4);
 VAR_0->in_sig--;
}
