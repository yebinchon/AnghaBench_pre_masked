
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct sscop_sig {size_t sig; struct sscop_msg* msg; } ;
struct sscop_msg {int dummy; } ;
struct sscop {size_t state; scalar_t__ in_sig; int sigs; int aarg; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,struct sscop_sig*) ;
 int FUNC_2 (struct sscop_sig*) ;
 int VAR_0 ;
 int FUNC_3 (struct sscop_msg*) ;
 int FUNC_4 (struct sscop*,int ,struct sscop*) ;
 int * VAR_1 ;
 int FUNC_5 (struct sscop*) ;
 int * VAR_2 ;

__attribute__((used)) static void
FUNC_6(struct sscop *VAR_3, u_int VAR_4, struct sscop_msg *VAR_5)
{
 struct sscop_sig *VAR_6;

 FUNC_4(VAR_3, VAR_0, (VAR_3, VAR_3->aarg,
     "got signal %s in state %s%s", VAR_1[VAR_4],
     VAR_2[VAR_3->state], VAR_3->in_sig ? " -- queuing" : ""));

 FUNC_2(VAR_6);
 if(VAR_6 == ((void*)0)) {
  FUNC_0("sscop: cannot allocate signal");
  FUNC_3(VAR_5);
  return;
 }
 VAR_6->sig = VAR_4;
 VAR_6->msg = VAR_5;
 FUNC_1(&VAR_3->sigs, VAR_6);

 if(!VAR_3->in_sig)
  FUNC_5(VAR_3);
}
