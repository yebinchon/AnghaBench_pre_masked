
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct permission_set {size_t all_permitted; size_t num_permitted_user; size_t num_permitted_admin; struct permission* permitted_admin; struct permission* permitted_user; } ;
struct ssh_channels {struct permission_set local_perms; } ;
struct ssh {struct ssh_channels* chanctxt; } ;
struct permission {int dummy; } ;
typedef int Channel ;


 int VAR_0 ;
 int * FUNC_0 (struct ssh*,char const*,int ,char*,char*) ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (struct permission*,char const*,int ) ;

Channel *
FUNC_3(struct ssh *VAR_1, const char *VAR_2,
    char *VAR_3, char *VAR_4)
{
 struct ssh_channels *VAR_5 = VAR_1->chanctxt;
 struct permission_set *VAR_6 = &VAR_5->local_perms;
 u_int VAR_7, VAR_8, VAR_9 = 1;
 struct permission *VAR_10;

 VAR_8 = VAR_6->all_permitted;
 if (!VAR_8) {
  for (VAR_7 = 0; VAR_7 < VAR_6->num_permitted_user; VAR_7++) {
   VAR_10 = &VAR_6->permitted_user[VAR_7];
   if (FUNC_2(VAR_10, VAR_2, VAR_0)) {
    VAR_8 = 1;
    break;
   }
  }
 }

 if (VAR_6->num_permitted_admin > 0) {
  VAR_9 = 0;
  for (VAR_7 = 0; VAR_7 < VAR_6->num_permitted_admin; VAR_7++) {
   VAR_10 = &VAR_6->permitted_admin[VAR_7];
   if (FUNC_2(VAR_10, VAR_2, VAR_0)) {
    VAR_9 = 1;
    break;
   }
  }
 }

 if (!VAR_8 || !VAR_9) {
  FUNC_1("Received request to connect to path %.100s, "
      "but the request was denied.", VAR_2);
  return ((void*)0);
 }
 return FUNC_0(VAR_1, VAR_2, VAR_0, VAR_3, VAR_4);
}
