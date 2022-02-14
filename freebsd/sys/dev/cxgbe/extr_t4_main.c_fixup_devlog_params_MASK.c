
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct devlog_params {int addr; int size; int start; int memtype; } ;
struct TYPE_2__ {struct devlog_params devlog; } ;
struct adapter {TYPE_1__ params; } ;


 int FUNC_0 (struct adapter*,int ,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_1(struct adapter *VAR_0)
{
 struct devlog_params *VAR_1 = &VAR_0->params.devlog;
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1->memtype, VAR_1->start,
     VAR_1->size, &VAR_1->addr);

 return (VAR_2);
}
