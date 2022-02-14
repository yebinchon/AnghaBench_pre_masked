
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_rqst {int dummy; } ;
struct nfsd4_locku {scalar_t__ lu_stateowner; int lu_stateid; scalar_t__ lu_length; scalar_t__ lu_offset; int lu_seqid; } ;
struct nfsd4_compound_state {scalar_t__ replay_owner; } ;
struct nfs4_stateid {int st_stateid; int st_file; } ;
struct file_lock {int fl_end; scalar_t__ fl_start; int * fl_lmops; int fl_flags; struct file* fl_file; int fl_pid; scalar_t__ fl_owner; int fl_type; } ;
struct file {int dummy; } ;
typedef int stateid_t ;
typedef scalar_t__ fl_owner_t ;
typedef int __be32 ;
struct TYPE_2__ {int tgid; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (char*,...) ;
 struct file* FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (struct file_lock*) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 () ;
 int FUNC_9 (struct nfsd4_compound_state*,int ,int *,int ,scalar_t__*,struct nfs4_stateid**,int *) ;
 int FUNC_10 (struct file_lock*) ;
 int FUNC_11 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_12 (int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct file*,int ,struct file_lock*,int *) ;

__be32
FUNC_15(struct svc_rqst *VAR_8, struct nfsd4_compound_state *VAR_9,
     struct nfsd4_locku *VAR_10)
{
 struct nfs4_stateid *VAR_11;
 struct file *VAR_12 = ((void*)0);
 struct file_lock VAR_13;
 __be32 VAR_14;
 int VAR_15;

 FUNC_2("NFSD: nfsd4_locku: start=%Ld length=%Ld\n",
  (long long) VAR_10->lu_offset,
  (long long) VAR_10->lu_length);

 if (FUNC_1(VAR_10->lu_offset, VAR_10->lu_length))
   return VAR_6;

 FUNC_8();

 if ((VAR_14 = FUNC_9(VAR_9,
     VAR_10->lu_seqid,
     &VAR_10->lu_stateid,
     VAR_3,
     &VAR_10->lu_stateowner, &VAR_11, ((void*)0))))
  goto out;

 VAR_12 = FUNC_3(VAR_11->st_file);
 if (!VAR_12) {
  VAR_14 = VAR_7;
  goto out;
 }
 FUNC_0(!VAR_12);
 FUNC_5(&VAR_13);
 VAR_13.fl_type = VAR_2;
 VAR_13.fl_owner = (fl_owner_t) VAR_10->lu_stateowner;
 VAR_13.fl_pid = VAR_4->tgid;
 VAR_13.fl_file = VAR_12;
 VAR_13.fl_flags = VAR_0;
 VAR_13.fl_lmops = &VAR_5;
 VAR_13.fl_start = VAR_10->lu_offset;

 VAR_13.fl_end = FUNC_4(VAR_10->lu_offset, VAR_10->lu_length);
 FUNC_10(&VAR_13);




 VAR_15 = FUNC_14(VAR_12, VAR_1, &VAR_13, ((void*)0));
 if (VAR_15) {
  FUNC_2("NFSD: nfs4_locku: vfs_lock_file failed!\n");
  goto out_nfserr;
 }



 FUNC_13(&VAR_11->st_stateid);
 FUNC_6(&VAR_10->lu_stateid, &VAR_11->st_stateid, sizeof(stateid_t));

out:
 if (VAR_10->lu_stateowner) {
  FUNC_7(VAR_10->lu_stateowner);
  VAR_9->replay_owner = VAR_10->lu_stateowner;
 }
 FUNC_11();
 return VAR_14;

out_nfserr:
 VAR_14 = FUNC_12(VAR_15);
 goto out;
}
