
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct pmu {TYPE_1__* dev; int name; int attr_groups; } ;
struct device {int dummy; } ;
struct TYPE_7__ {int release; int * bus; int groups; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,struct pmu*) ;
 int FUNC_1 (TYPE_1__*,char*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(struct pmu *VAR_4)
{
 int VAR_5 = -VAR_0;

 VAR_4->dev = FUNC_4(sizeof(struct device), VAR_1);
 if (!VAR_4->dev)
  goto out;

 VAR_4->dev->groups = VAR_4->attr_groups;
 FUNC_3(VAR_4->dev);
 VAR_5 = FUNC_1(VAR_4->dev, "%s", VAR_4->name);
 if (VAR_5)
  goto free_dev;

 FUNC_0(VAR_4->dev, VAR_4);
 VAR_4->dev->bus = &VAR_2;
 VAR_4->dev->release = VAR_3;
 VAR_5 = FUNC_2(VAR_4->dev);
 if (VAR_5)
  goto free_dev;

out:
 return VAR_5;

free_dev:
 FUNC_5(VAR_4->dev);
 goto out;
}
