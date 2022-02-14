
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cn_name; } ;
typedef TYPE_1__ config_node_t ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1, void *VAR_2)
{
 int VAR_3;

 const config_node_t *VAR_4 = (config_node_t *)VAR_0;
 const config_node_t *VAR_5 = (config_node_t *)VAR_1;

 VAR_3 = FUNC_0(VAR_4->cn_name, VAR_5->cn_name);

 if (VAR_3 < 0)
  return (-1);
 else if (VAR_3 > 0)
  return (1);
 else
  return (0);
}
