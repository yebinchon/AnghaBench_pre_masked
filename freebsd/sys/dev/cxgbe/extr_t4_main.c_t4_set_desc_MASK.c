
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* id; } ;
struct adapter_params {TYPE_1__ vpd; } ;
struct adapter {int dev; struct adapter_params params; } ;
typedef int buf ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int,char*,char*) ;

__attribute__((used)) static void
FUNC_2(struct adapter *VAR_0)
{
 char VAR_1[128];
 struct adapter_params *VAR_2 = &VAR_0->params;

 FUNC_1(VAR_1, sizeof(VAR_1), "Chelsio %s", VAR_2->vpd.id);

 FUNC_0(VAR_0->dev, VAR_1);
}
