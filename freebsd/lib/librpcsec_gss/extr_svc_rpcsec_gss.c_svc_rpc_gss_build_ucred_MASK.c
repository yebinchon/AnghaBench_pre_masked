
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uid_t ;
struct TYPE_2__ {int uid; int gid; int gidlen; int gidlist; } ;
struct svc_rpc_gss_client {int cl_gid_storage; int cl_mech; TYPE_1__ cl_ucred; } ;
struct passwd {int pw_uid; int pw_gid; int pw_name; } ;
typedef TYPE_1__ rpc_gss_ucred_t ;
typedef int gss_name_t ;
typedef int buf ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ,int*) ;
 int FUNC_1 (int ,struct passwd*,char*,int,struct passwd**) ;
 scalar_t__ FUNC_2 (scalar_t__*,int const,int ,int *) ;

__attribute__((used)) static void
FUNC_3(struct svc_rpc_gss_client *VAR_2,
    const gss_name_t VAR_3)
{
 OM_uint32 VAR_4, VAR_5;
 char VAR_6[128];
 uid_t VAR_7;
 struct passwd VAR_8, *VAR_9;
 rpc_gss_ucred_t *VAR_10 = &VAR_2->cl_ucred;

 VAR_10->uid = 65534;
 VAR_10->gid = 65534;
 VAR_10->gidlen = 0;
 VAR_10->gidlist = VAR_2->cl_gid_storage;

 VAR_4 = FUNC_2(&VAR_5, VAR_3, VAR_2->cl_mech, &VAR_7);
 if (VAR_4 != VAR_0)
  return;

 FUNC_1(VAR_7, &VAR_8, VAR_6, sizeof(VAR_6), &VAR_9);
 if (VAR_9) {
  int VAR_11 = VAR_1;
  VAR_10->uid = VAR_9->pw_uid;
  VAR_10->gid = VAR_9->pw_gid;
  VAR_10->gidlist = VAR_2->cl_gid_storage;
  FUNC_0(VAR_9->pw_name, VAR_9->pw_gid, VAR_10->gidlist, &VAR_11);
  VAR_10->gidlen = VAR_11;
 }
}
