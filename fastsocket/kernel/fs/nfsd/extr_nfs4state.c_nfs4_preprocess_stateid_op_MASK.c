
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct svc_fh {TYPE_1__* fh_dentry; } ;
struct nfsd4_compound_state {struct svc_fh current_fh; } ;
struct nfs4_stateid {int st_file; TYPE_2__* st_stateowner; int st_stateid; } ;
struct nfs4_delegation {int dl_file; int dl_client; int dl_stateid; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
typedef int stateid_t ;
typedef scalar_t__ __be32 ;
struct TYPE_4__ {int so_client; int so_confirmed; } ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct svc_fh*,int *,int) ;
 scalar_t__ FUNC_5 (int *,int *,int) ;
 struct nfs4_delegation* FUNC_6 (struct inode*,int *) ;
 struct file* FUNC_7 (int ) ;
 struct nfs4_stateid* FUNC_8 (int *,int) ;
 struct file* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (struct inode*) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (struct nfs4_delegation*,int) ;
 scalar_t__ FUNC_13 (struct svc_fh*,struct nfs4_stateid*) ;
 scalar_t__ FUNC_14 (struct nfs4_stateid*,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_15 (struct nfsd4_compound_state*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_16 (int ) ;

__be32
FUNC_17(struct nfsd4_compound_state *VAR_7,
      stateid_t *VAR_8, int VAR_9, struct file **VAR_10)
{
 struct nfs4_stateid *VAR_11 = ((void*)0);
 struct nfs4_delegation *VAR_12 = ((void*)0);
 struct svc_fh *VAR_13 = &VAR_7->current_fh;
 struct inode *VAR_14 = VAR_13->fh_dentry->d_inode;
 __be32 VAR_15;

 if (VAR_10)
  *VAR_10 = ((void*)0);

 if (FUNC_10(VAR_14))
  return VAR_5;

 if (FUNC_15(VAR_7))
  VAR_9 |= VAR_0;

 if (FUNC_3(VAR_8) || FUNC_1(VAR_8))
  return FUNC_4(VAR_13, VAR_8, VAR_9);

 VAR_15 = VAR_6;
 if (FUNC_2(VAR_8))
  goto out;





 VAR_15 = VAR_4;
 if (FUNC_11(VAR_8)) {
  VAR_12 = FUNC_6(VAR_14, VAR_8);
  if (!VAR_12)
   goto out;
  VAR_15 = FUNC_5(VAR_8, &VAR_12->dl_stateid,
        VAR_9);
  if (VAR_15)
   goto out;
  VAR_15 = FUNC_12(VAR_12, VAR_9);
  if (VAR_15)
   goto out;
  FUNC_16(VAR_12->dl_client);
  if (VAR_10)
   *VAR_10 = FUNC_7(VAR_12->dl_file);
  FUNC_0(!*VAR_10);
 } else {
  VAR_11 = FUNC_8(VAR_8, VAR_9);
  if (!VAR_11)
   goto out;
  VAR_15 = VAR_3;
  if (FUNC_13(VAR_13, VAR_11))
   goto out;
  if (!VAR_11->st_stateowner->so_confirmed)
   goto out;
  VAR_15 = FUNC_5(VAR_8, &VAR_11->st_stateid,
        VAR_9);
  if (VAR_15)
   goto out;
  VAR_15 = FUNC_14(VAR_11, VAR_9);
  if (VAR_15)
   goto out;
  FUNC_16(VAR_11->st_stateowner->so_client);
  if (VAR_10) {
   if (VAR_9 & VAR_1)
    *VAR_10 = FUNC_7(VAR_11->st_file);
   else
    *VAR_10 = FUNC_9(VAR_11->st_file);
  }
 }
 VAR_15 = VAR_2;
out:
 return VAR_15;
}
