
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unicx {scalar_t__ errcnt; } ;
struct uni_msg {int dummy; } ;
struct uni_all {int mtype; int u; } ;


 int FUNC_0 (size_t,struct uni_msg*,int *,struct unicx*) ;
 int ** VAR_0 ;

int
FUNC_1(struct uni_msg *VAR_1, struct uni_all *VAR_2, struct unicx *VAR_3)
{
 VAR_3->errcnt = 0;
 if (VAR_2->mtype >= 256)
  return (-1);
 if (VAR_0[VAR_2->mtype] == ((void*)0))
  return (-1);
 return (FUNC_0(VAR_2->mtype, VAR_1, &VAR_2->u, VAR_3));
}
