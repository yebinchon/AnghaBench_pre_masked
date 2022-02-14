
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dn_flags; int dn_right; int dn_left; } ;
typedef TYPE_1__ dt_node_t ;
typedef int dn ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(dt_node_t *VAR_1)
{
 dt_node_t VAR_2;

 if (FUNC_2(VAR_1->dn_left) ||
     FUNC_2(VAR_1->dn_right))
  return (1);
 else if (!FUNC_1(VAR_1->dn_left) ||
     !FUNC_1(VAR_1->dn_right))
  return (0);

 FUNC_0(&VAR_2, sizeof (VAR_2));
 FUNC_3(VAR_1->dn_left, VAR_1->dn_right, &VAR_2);
 return (VAR_2.dn_flags & VAR_0);
}
