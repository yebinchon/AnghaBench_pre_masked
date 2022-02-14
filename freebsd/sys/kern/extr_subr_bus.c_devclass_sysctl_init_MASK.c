
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* devclass_t ;
struct TYPE_4__ {int * sysctl_tree; int sysctl_ctx; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int *,int ,int ,int ,int,int *,char*) ;
 int FUNC_1 (int *,int ,int ,char*,int,TYPE_1__*,int ,int ,char*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(devclass_t VAR_6)
{

 if (VAR_6->sysctl_tree != ((void*)0))
  return;
 FUNC_4(&VAR_6->sysctl_ctx);
 VAR_6->sysctl_tree = FUNC_0(&VAR_6->sysctl_ctx,
     FUNC_3(VAR_4), VAR_3, VAR_6->name,
     VAR_0, ((void*)0), "");
 FUNC_1(&VAR_6->sysctl_ctx, FUNC_2(VAR_6->sysctl_tree),
     VAR_3, "%parent", VAR_1 | VAR_0,
     VAR_6, VAR_2, VAR_5, "A",
     "parent class");
}
