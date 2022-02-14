
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct unicx {int dummy; } ;
struct uni_msg {int dummy; } ;
struct uni_all {int mtype; int u; } ;
struct TYPE_2__ {int (* encode ) (struct uni_msg*,int *,struct unicx*) ;} ;


 int FUNC_0 (struct uni_msg*,int *,struct unicx*) ;
 TYPE_1__** VAR_0 ;

int
FUNC_1(struct uni_msg *VAR_1, struct uni_all *VAR_2, struct unicx *VAR_3)
{
 if (VAR_2->mtype >= 256)
  return (-1);
 if (VAR_0[VAR_2->mtype] == ((void*)0))
  return (-3);

 return ((VAR_0[VAR_2->mtype]->encode)(VAR_1, &VAR_2->u, VAR_3));
}
