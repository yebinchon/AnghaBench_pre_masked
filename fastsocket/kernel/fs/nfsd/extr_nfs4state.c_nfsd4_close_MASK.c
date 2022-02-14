
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct svc_rqst {int dummy; } ;
struct TYPE_9__ {TYPE_2__* fh_dentry; } ;
struct nfsd4_compound_state {TYPE_4__* replay_owner; TYPE_3__ current_fh; } ;
struct nfsd4_close {TYPE_4__* cl_stateowner; int cl_stateid; int cl_seqid; } ;
struct nfs4_stateid {int st_stateid; } ;
typedef int stateid_t ;
typedef int __be32 ;
struct TYPE_10__ {int so_stateids; } ;
struct TYPE_7__ {int name; scalar_t__ len; } ;
struct TYPE_8__ {TYPE_1__ d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct nfsd4_compound_state*,int ,int *,int,TYPE_4__**,struct nfs4_stateid**,int *) ;
 int FUNC_7 () ;
 int VAR_2 ;
 int FUNC_8 (struct nfs4_stateid*) ;
 int FUNC_9 (int *) ;

__be32
FUNC_10(struct svc_rqst *VAR_3, struct nfsd4_compound_state *VAR_4,
     struct nfsd4_close *VAR_5)
{
 __be32 VAR_6;
 struct nfs4_stateid *VAR_7;

 FUNC_0("NFSD: nfsd4_close on file %.*s\n",
   (int)VAR_4->current_fh.fh_dentry->d_name.len,
   VAR_4->current_fh.fh_dentry->d_name.name);

 FUNC_5();

 if ((VAR_6 = FUNC_6(VAR_4,
     VAR_5->cl_seqid,
     &VAR_5->cl_stateid,
     VAR_1 | VAR_0,
     &VAR_5->cl_stateowner, &VAR_7, ((void*)0))))
  goto out;
 VAR_6 = VAR_2;
 FUNC_9(&VAR_7->st_stateid);
 FUNC_2(&VAR_5->cl_stateid, &VAR_7->st_stateid, sizeof(stateid_t));


 FUNC_8(VAR_7);





 if (FUNC_1(&VAR_5->cl_stateowner->so_stateids))
  FUNC_3(VAR_5->cl_stateowner);
out:
 if (VAR_5->cl_stateowner) {
  FUNC_4(VAR_5->cl_stateowner);
  VAR_4->replay_owner = VAR_5->cl_stateowner;
 }
 FUNC_7();
 return VAR_6;
}
