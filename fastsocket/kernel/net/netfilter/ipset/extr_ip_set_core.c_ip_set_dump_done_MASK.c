
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netlink_callback {int* args; } ;
typedef int ip_set_id_t ;
struct TYPE_2__ {int name; } ;


 TYPE_1__** VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static int
FUNC_2(struct netlink_callback *VAR_1)
{
 if (VAR_1->args[2]) {
  FUNC_1("release set %s\n", VAR_0[VAR_1->args[1]]->name);
  FUNC_0((ip_set_id_t) VAR_1->args[1]);
 }
 return 0;
}
