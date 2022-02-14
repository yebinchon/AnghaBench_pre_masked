
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int stacksize_attr; int guardsize_attr; scalar_t__ stackaddr_attr; } ;
struct pthread {TYPE_1__ attr; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (int ) ;

void
FUNC_3(struct pthread *VAR_0)
{

 FUNC_1((char *)VAR_0->attr.stackaddr_attr +
     FUNC_2(VAR_0->attr.guardsize_attr),
     FUNC_2(VAR_0->attr.stacksize_attr),
     FUNC_0());
}
