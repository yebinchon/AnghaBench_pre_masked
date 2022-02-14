
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sge_iq {int dummy; } ;
struct TYPE_3__ {struct sge_iq fwq; } ;
struct adapter {int flags; int intr_count; int ctx; int dev; TYPE_2__** port; TYPE_1__ sge; } ;
struct TYPE_4__ {int * vi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sysctl_oid* FUNC_0 (int *,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 struct sysctl_oid_list* FUNC_1 (struct sysctl_oid*) ;
 int FUNC_2 (int *,struct sysctl_oid*,struct sge_iq*) ;
 int FUNC_3 (int *,struct sge_iq*,int *,int,int) ;
 struct sysctl_oid* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (struct sge_iq*,struct adapter*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_7(struct adapter *VAR_4)
{
 int VAR_5, VAR_6;
 struct sge_iq *VAR_7 = &VAR_4->sge.fwq;
 struct sysctl_oid *VAR_8 = FUNC_4(VAR_4->dev);
 struct sysctl_oid_list *VAR_9 = FUNC_1(VAR_8);

 FUNC_6(VAR_7, VAR_4, 0, 0, VAR_1);
 if (VAR_4->flags & VAR_2)
  VAR_6 = 0;
 else
  VAR_6 = VAR_4->intr_count > 1 ? 1 : 0;
 VAR_5 = FUNC_3(&VAR_4->port[0]->vi[0], VAR_7, ((void*)0), VAR_6, -1);
 if (VAR_5 != 0) {
  FUNC_5(VAR_4->dev,
      "failed to create firmware event queue: %d\n", VAR_5);
  return (VAR_5);
 }

 VAR_8 = FUNC_0(&VAR_4->ctx, VAR_9, VAR_3, "fwq", VAR_0,
     ((void*)0), "firmware event queue");
 FUNC_2(&VAR_4->ctx, VAR_8, VAR_7);

 return (0);
}
