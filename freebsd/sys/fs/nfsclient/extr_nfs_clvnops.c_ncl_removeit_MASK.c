
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct sillyrename {int s_cred; int s_namlen; int s_name; TYPE_1__* s_dvp; } ;
struct TYPE_2__ {scalar_t__ v_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct vnode*,int ,int ,int ,int *) ;

int
FUNC_1(struct sillyrename *VAR_1, struct vnode *VAR_2)
{




 if (VAR_1->s_dvp->v_type == VAR_0)
  return (0);
 return (FUNC_0(VAR_1->s_dvp, VAR_2, VAR_1->s_name, VAR_1->s_namlen,
     VAR_1->s_cred, ((void*)0)));
}
