
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* device_t ;
typedef TYPE_2__* devclass_t ;
struct TYPE_8__ {int name; int * sysctl_tree; } ;
struct TYPE_7__ {int * sysctl_tree; int sysctl_ctx; scalar_t__ nameunit; TYPE_2__* devclass; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ,int ,char*,int,int *,int,char*) ;
 int * FUNC_1 (int *,int ,int ,scalar_t__,int,int *,char*,char*) ;
 int FUNC_2 (int *,int ,int ,char*,int,TYPE_1__*,int ,int ,char*,char*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int*) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_8 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(device_t VAR_9)
{
 devclass_t VAR_10 = VAR_9->devclass;
 int VAR_11;

 if (VAR_9->sysctl_tree != ((void*)0))
  return;
 FUNC_5(VAR_10);
 FUNC_7(&VAR_9->sysctl_ctx);
 VAR_9->sysctl_tree = FUNC_1(&VAR_9->sysctl_ctx,
     FUNC_3(VAR_10->sysctl_tree), VAR_7,
     VAR_9->nameunit + FUNC_6(VAR_10->name),
     VAR_0, ((void*)0), "", "device_index");
 FUNC_2(&VAR_9->sysctl_ctx, FUNC_3(VAR_9->sysctl_tree),
     VAR_7, "%desc", VAR_1 | VAR_0,
     VAR_9, VAR_2, VAR_8, "A",
     "device description");
 FUNC_2(&VAR_9->sysctl_ctx, FUNC_3(VAR_9->sysctl_tree),
     VAR_7, "%driver", VAR_1 | VAR_0,
     VAR_9, VAR_3, VAR_8, "A",
     "device driver name");
 FUNC_2(&VAR_9->sysctl_ctx, FUNC_3(VAR_9->sysctl_tree),
     VAR_7, "%location", VAR_1 | VAR_0,
     VAR_9, VAR_4, VAR_8, "A",
     "device location relative to parent");
 FUNC_2(&VAR_9->sysctl_ctx, FUNC_3(VAR_9->sysctl_tree),
     VAR_7, "%pnpinfo", VAR_1 | VAR_0,
     VAR_9, VAR_6, VAR_8, "A",
     "device identification");
 FUNC_2(&VAR_9->sysctl_ctx, FUNC_3(VAR_9->sysctl_tree),
     VAR_7, "%parent", VAR_1 | VAR_0,
     VAR_9, VAR_5, VAR_8, "A",
     "parent device");
 if (FUNC_4(VAR_9, &VAR_11) == 0)
  FUNC_0(&VAR_9->sysctl_ctx,
      FUNC_3(VAR_9->sysctl_tree), VAR_7, "%domain",
      VAR_0, ((void*)0), VAR_11, "NUMA domain");
}
