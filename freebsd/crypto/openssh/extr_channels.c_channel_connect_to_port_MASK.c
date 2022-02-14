
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_short ;
typedef size_t u_int ;
struct permission_set {size_t all_permitted; size_t num_permitted_user; size_t num_permitted_admin; struct permission* permitted_admin; struct permission* permitted_user; } ;
struct ssh_channels {struct permission_set local_perms; } ;
struct ssh {struct ssh_channels* chanctxt; } ;
struct permission {int dummy; } ;
struct channel_connect {int dummy; } ;
typedef int cctx ;
struct TYPE_4__ {struct channel_connect connect_ctx; int path; int host_port; } ;
typedef TYPE_1__ Channel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct channel_connect*) ;
 TYPE_1__* FUNC_1 (struct ssh*,char*,int ,int,int,int,int ,int ,int ,char*,int) ;
 int FUNC_2 (struct ssh*,char const*,int ,int ,char*,char*,struct channel_connect*,int*,char const**) ;
 int FUNC_3 (char*,char const*,int ) ;
 int FUNC_4 (struct channel_connect*,int ,int) ;
 scalar_t__ FUNC_5 (struct permission*,char const*,int ) ;
 int FUNC_6 (char const*) ;

Channel *
FUNC_7(struct ssh *VAR_5, const char *VAR_6, u_short VAR_7,
    char *VAR_8, char *VAR_9, int *VAR_10, const char **VAR_11)
{
 struct ssh_channels *VAR_12 = VAR_5->chanctxt;
 struct permission_set *VAR_13 = &VAR_12->local_perms;
 struct channel_connect VAR_14;
 Channel *VAR_15;
 u_int VAR_16, VAR_17, VAR_18 = 1;
 int VAR_19;
 struct permission *VAR_20;

 VAR_17 = VAR_13->all_permitted;
 if (!VAR_17) {
  for (VAR_16 = 0; VAR_16 < VAR_13->num_permitted_user; VAR_16++) {
   VAR_20 = &VAR_13->permitted_user[VAR_16];
   if (FUNC_5(VAR_20, VAR_6, VAR_7)) {
    VAR_17 = 1;
    break;
   }
  }
 }

 if (VAR_13->num_permitted_admin > 0) {
  VAR_18 = 0;
  for (VAR_16 = 0; VAR_16 < VAR_13->num_permitted_admin; VAR_16++) {
   VAR_20 = &VAR_13->permitted_admin[VAR_16];
   if (FUNC_5(VAR_20, VAR_6, VAR_7)) {
    VAR_18 = 1;
    break;
   }
  }
 }

 if (!VAR_17 || !VAR_18) {
  FUNC_3("Received request to connect to host %.100s port %d, "
      "but the request was denied.", VAR_6, VAR_7);
  if (VAR_10 != ((void*)0))
   *VAR_10 = VAR_3;
  return ((void*)0);
 }

 FUNC_4(&VAR_14, 0, sizeof(VAR_14));
 VAR_19 = FUNC_2(VAR_5, VAR_6, VAR_7, VAR_2, VAR_8, VAR_9,
     &VAR_14, VAR_10, VAR_11);
 if (VAR_19 == -1) {
  FUNC_0(&VAR_14);
  return ((void*)0);
 }

 VAR_15 = FUNC_1(VAR_5, VAR_8, VAR_4, VAR_19, VAR_19, -1,
     VAR_1, VAR_0, 0, VAR_9, 1);
 VAR_15->host_port = VAR_7;
 VAR_15->path = FUNC_6(VAR_6);
 VAR_15->connect_ctx = VAR_14;

 return VAR_15;
}
