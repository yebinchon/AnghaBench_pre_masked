
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sge_wrq {int eq; } ;
struct TYPE_5__ {int cntxt_id; } ;
struct TYPE_6__ {TYPE_2__ fwq; } ;
struct adapter {int ctx; TYPE_3__ sge; TYPE_1__** port; int dev; } ;
typedef int name ;
struct TYPE_4__ {int tx_chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sysctl_oid* FUNC_0 (int *,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 struct sysctl_oid_list* FUNC_1 (struct sysctl_oid*) ;
 int FUNC_2 (struct adapter*,int *,struct sge_wrq*,struct sysctl_oid*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (struct adapter*,int *,int ,int ,int ,int ,char*) ;
 int FUNC_5 (char*,int,char*,...) ;

__attribute__((used)) static int
FUNC_6(struct adapter *VAR_4, struct sge_wrq *VAR_5, int VAR_6,
    struct sysctl_oid *VAR_7)
{
 int VAR_8;
 char VAR_9[16];
 struct sysctl_oid_list *VAR_10;

 FUNC_5(VAR_9, sizeof(VAR_9), "%s ctrlq%d", FUNC_3(VAR_4->dev),
     VAR_6);
 FUNC_4(VAR_4, &VAR_5->eq, VAR_2, VAR_1, VAR_4->port[VAR_6]->tx_chan,
     VAR_4->sge.fwq.cntxt_id, VAR_9);

 VAR_10 = FUNC_1(VAR_7);
 FUNC_5(VAR_9, sizeof(VAR_9), "%d", VAR_6);
 VAR_7 = FUNC_0(&VAR_4->ctx, VAR_10, VAR_3, VAR_9, VAR_0,
     ((void*)0), "ctrl queue");
 VAR_8 = FUNC_2(VAR_4, ((void*)0), VAR_5, VAR_7);

 return (VAR_8);
}
