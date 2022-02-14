
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct svc_rqst {int dummy; } ;
struct nfsd4_open_downgrade {scalar_t__ od_stateowner; int od_stateid; int od_share_deny; int od_share_access; int od_seqid; } ;
struct TYPE_6__ {TYPE_2__* fh_dentry; } ;
struct nfsd4_compound_state {scalar_t__ replay_owner; int minorversion; TYPE_3__ current_fh; } ;
struct nfs4_stateid {int st_access_bmap; int st_deny_bmap; int st_stateid; } ;
typedef int stateid_t ;
typedef int __be32 ;
struct TYPE_4__ {int name; scalar_t__ len; } ;
struct TYPE_5__ {TYPE_1__ d_name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,int ) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (struct nfs4_stateid*,int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 () ;
 int FUNC_7 (struct nfsd4_compound_state*,int ,int *,int ,scalar_t__*,struct nfs4_stateid**,int *) ;
 int FUNC_8 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_9 (int ,int*) ;
 int FUNC_10 (int ,int*) ;
 int FUNC_11 (int *) ;

__be32
FUNC_12(struct svc_rqst *VAR_3,
       struct nfsd4_compound_state *VAR_4,
       struct nfsd4_open_downgrade *VAR_5)
{
 __be32 VAR_6;
 struct nfs4_stateid *VAR_7;

 FUNC_2("NFSD: nfsd4_open_downgrade on file %.*s\n",
   (int)VAR_4->current_fh.fh_dentry->d_name.len,
   VAR_4->current_fh.fh_dentry->d_name.name);

 if (!FUNC_0(VAR_5->od_share_access, VAR_4->minorversion)
   || !FUNC_1(VAR_5->od_share_deny))
  return VAR_2;

 FUNC_6();
 if ((VAR_6 = FUNC_7(VAR_4,
     VAR_5->od_seqid,
     &VAR_5->od_stateid,
     VAR_0,
     &VAR_5->od_stateowner, &VAR_7, ((void*)0))))
  goto out;

 VAR_6 = VAR_2;
 if (!FUNC_10(VAR_5->od_share_access, &VAR_7->st_access_bmap)) {
  FUNC_2("NFSD:access not a subset current bitmap: 0x%lx, input access=%08x\n",
   VAR_7->st_access_bmap, VAR_5->od_share_access);
  goto out;
 }
 if (!FUNC_10(VAR_5->od_share_deny, &VAR_7->st_deny_bmap)) {
  FUNC_2("NFSD:deny not a subset current bitmap: 0x%lx, input deny=%08x\n",
   VAR_7->st_deny_bmap, VAR_5->od_share_deny);
  goto out;
 }
 FUNC_4(VAR_7, VAR_5->od_share_access);

 FUNC_9(VAR_5->od_share_deny, &VAR_7->st_deny_bmap);

 FUNC_11(&VAR_7->st_stateid);
 FUNC_3(&VAR_5->od_stateid, &VAR_7->st_stateid, sizeof(stateid_t));
 VAR_6 = VAR_1;
out:
 if (VAR_5->od_stateowner) {
  FUNC_5(VAR_5->od_stateowner);
  VAR_4->replay_owner = VAR_5->od_stateowner;
 }
 FUNC_8();
 return VAR_6;
}
