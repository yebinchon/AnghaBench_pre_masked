
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssh {int dummy; } ;
struct permission_set {scalar_t__ num_permitted_user; int all_permitted; } ;


 struct permission_set* FUNC_0 (struct ssh*,int) ;

void
FUNC_1(struct ssh *VAR_0, int VAR_1)
{
 struct permission_set *VAR_2 = FUNC_0(VAR_0, VAR_1);

 if (VAR_2->num_permitted_user == 0)
  VAR_2->all_permitted = 1;
}
