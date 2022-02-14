
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dp_name; } ;
struct TYPE_4__ {TYPE_1__ dpn_perm; } ;
typedef TYPE_2__ deleg_perm_node_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_1, const void *VAR_2, void *VAR_3)
{
 const deleg_perm_node_t *VAR_4 = VAR_1;
 const deleg_perm_node_t *VAR_5 = VAR_2;
 int VAR_6 = FUNC_0(VAR_4->dpn_perm.dp_name, VAR_5->dpn_perm.dp_name,
     VAR_0-1);

 if (VAR_6 == 0)
  return (0);

 if (VAR_6 > 0)
  return (1);
 else
  return (-1);
}
