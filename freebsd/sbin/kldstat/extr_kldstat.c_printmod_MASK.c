
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int intval; int uintval; int ulongval; } ;
struct module_stat {int version; int id; char* name; TYPE_1__ data; } ;
typedef int stat ;


 int FUNC_0 (struct module_stat*,int) ;
 scalar_t__ FUNC_1 (int,struct module_stat*) ;
 int FUNC_2 (char*,int,char*,...) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static void
FUNC_4(int VAR_1)
{
    struct module_stat VAR_2;

    FUNC_0(&VAR_2, sizeof(VAR_2));
    VAR_2.version = sizeof(struct module_stat);
    if (FUNC_1(VAR_1, &VAR_2) < 0)
 FUNC_3("can't stat module id %d", VAR_1);
    else
 if (VAR_0) {
     FUNC_2("\t\t%3d %s (%d, %u, 0x%lx)\n", VAR_2.id, VAR_2.name,
         VAR_2.data.intval, VAR_2.data.uintval, VAR_2.data.ulongval);
 } else {
  FUNC_2("\t\t%3d %s\n", VAR_2.id, VAR_2.name);
 }
}
