
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct permission_set {size_t num_permitted_user; struct permission* permitted_user; } ;
struct ssh_channels {struct permission_set local_perms; } ;
struct ssh {struct ssh_channels* chanctxt; } ;
struct permission {int port_to_connect; int host_to_connect; } ;
typedef int Channel ;


 int * FUNC_0 (struct ssh*,int ,int ,char*,char*) ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (struct permission*,char const*) ;

Channel *
FUNC_3(struct ssh *VAR_0, const char *VAR_1,
    char *VAR_2, char *VAR_3)
{
 struct ssh_channels *VAR_4 = VAR_0->chanctxt;
 struct permission_set *VAR_5 = &VAR_4->local_perms;
 u_int VAR_6;
 struct permission *VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_5->num_permitted_user; VAR_6++) {
  VAR_7 = &VAR_5->permitted_user[VAR_6];
  if (FUNC_2(VAR_7, VAR_1)) {
   return FUNC_0(VAR_0,
       VAR_7->host_to_connect, VAR_7->port_to_connect,
       VAR_2, VAR_3);
  }
 }
 FUNC_1("WARNING: Server requests forwarding for unknown path %.100s",
     VAR_1);
 return ((void*)0);
}
