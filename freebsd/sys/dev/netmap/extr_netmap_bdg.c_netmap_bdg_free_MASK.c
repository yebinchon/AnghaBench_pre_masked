
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nm_bridge {int bdg_flags; scalar_t__ bdg_active_ports; int bdg_saved_ops; int bdg_ops; int ht; int bdg_basename; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nm_bridge*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;

int
FUNC_4(struct nm_bridge *VAR_2)
{
 if ((VAR_2->bdg_flags & VAR_1) + VAR_2->bdg_active_ports != 0) {
  return VAR_0;
 }

 FUNC_3("marking bridge %s as free", VAR_2->bdg_basename);
 FUNC_2(VAR_2->ht);
 FUNC_1(&VAR_2->bdg_ops, 0, sizeof(VAR_2->bdg_ops));
 FUNC_1(&VAR_2->bdg_saved_ops, 0, sizeof(VAR_2->bdg_saved_ops));
 VAR_2->bdg_flags = 0;
 FUNC_0(VAR_2);
 return 0;
}
