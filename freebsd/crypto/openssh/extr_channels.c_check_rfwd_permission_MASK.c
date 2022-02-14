
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct permission_set {size_t all_permitted; size_t num_permitted_user; size_t num_permitted_admin; struct permission* permitted_admin; struct permission* permitted_user; } ;
struct ssh_channels {struct permission_set remote_perms; } ;
struct ssh {struct ssh_channels* chanctxt; } ;
struct permission {int dummy; } ;
struct Forward {int dummy; } ;


 scalar_t__ FUNC_0 (struct permission*,struct Forward*) ;

__attribute__((used)) static int
FUNC_1(struct ssh *VAR_0, struct Forward *VAR_1)
{
 struct ssh_channels *VAR_2 = VAR_0->chanctxt;
 struct permission_set *VAR_3 = &VAR_2->remote_perms;
 u_int VAR_4, VAR_5, VAR_6 = 1;
 struct permission *VAR_7;



 VAR_5 = VAR_3->all_permitted;
 if (!VAR_5) {
  for (VAR_4 = 0; VAR_4 < VAR_3->num_permitted_user; VAR_4++) {
   VAR_7 = &VAR_3->permitted_user[VAR_4];
   if (FUNC_0(VAR_7, VAR_1)) {
    VAR_5 = 1;
    break;
   }
  }
 }

 if (VAR_3->num_permitted_admin > 0) {
  VAR_6 = 0;
  for (VAR_4 = 0; VAR_4 < VAR_3->num_permitted_admin; VAR_4++) {
   VAR_7 = &VAR_3->permitted_admin[VAR_4];
   if (FUNC_0(VAR_7, VAR_1)) {
    VAR_6 = 1;
    break;
   }
  }
 }

 return VAR_5 && VAR_6;
}
