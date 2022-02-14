
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef size_t u_int ;
struct permission_set {size_t num_permitted_user; struct permission* permitted_user; } ;
struct ssh_channels {struct permission_set local_perms; } ;
struct ssh {struct ssh_channels* chanctxt; } ;
struct permission {scalar_t__ port_to_connect; int host_to_connect; int * downstream; } ;
typedef int Channel ;


 int * FUNC_0 (struct ssh*,int ,scalar_t__,char*,char*) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (struct permission*,char const*,int ,int) ;
 int * FUNC_3 (struct ssh*,char*,char*) ;

Channel *
FUNC_4(struct ssh *VAR_0, const char *VAR_1,
    u_short VAR_2, char *VAR_3, char *VAR_4)
{
 struct ssh_channels *VAR_5 = VAR_0->chanctxt;
 struct permission_set *VAR_6 = &VAR_5->local_perms;
 u_int VAR_7;
 struct permission *VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_6->num_permitted_user; VAR_7++) {
  VAR_8 = &VAR_6->permitted_user[VAR_7];
  if (FUNC_2(VAR_8,
      VAR_1, VAR_2, 1)) {
   if (VAR_8->downstream)
    return VAR_8->downstream;
   if (VAR_8->port_to_connect == 0)
    return FUNC_3(VAR_0,
        VAR_3, VAR_4);
   return FUNC_0(VAR_0,
       VAR_8->host_to_connect, VAR_8->port_to_connect,
       VAR_3, VAR_4);
  }
 }
 FUNC_1("WARNING: Server requests forwarding for unknown listen_port %d",
     VAR_2);
 return ((void*)0);
}
