
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct sscop_sig {struct sscop_msg* msg; int sig; } ;
struct sscop_msg {int dummy; } ;
struct sscop {int saved_sigs; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,struct sscop_sig*) ;
 int FUNC_2 (struct sscop_sig*) ;
 int FUNC_3 (struct sscop_msg*) ;

__attribute__((used)) static void
FUNC_4(struct sscop *VAR_0, u_int VAR_1, struct sscop_msg *VAR_2)
{
 struct sscop_sig *VAR_3;

 FUNC_2(VAR_3);
 if(VAR_3 == ((void*)0)) {
  FUNC_0("sscop: cannot allocate signal");
  FUNC_3(VAR_2);
  return;
 }
 VAR_3->sig = VAR_1;
 VAR_3->msg = VAR_2;
 FUNC_1(&VAR_0->saved_sigs, VAR_3);
}
