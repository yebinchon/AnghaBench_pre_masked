
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int id; int * cls; } ;
struct TYPE_4__ {TYPE_2__ sysdev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_1__*,char*,int) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static int FUNC_4(int VAR_4)
{
 VAR_2[VAR_4].sysdev.cls = &VAR_0;
 VAR_2[VAR_4].sysdev.id = VAR_4;

 VAR_3[VAR_4] = FUNC_2(VAR_1, &VAR_2[VAR_4], "rt-test-%d", VAR_4);
 if (FUNC_0(VAR_3[VAR_4]))
  return FUNC_1(VAR_3[VAR_4]);

 return FUNC_3(&VAR_2[VAR_4].sysdev);
}
