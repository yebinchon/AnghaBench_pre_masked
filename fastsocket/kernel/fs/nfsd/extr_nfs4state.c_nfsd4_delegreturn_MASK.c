
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct svc_rqst {int dummy; } ;
struct nfsd4_delegreturn {int dr_stateid; } ;
struct TYPE_4__ {TYPE_1__* fh_dentry; } ;
struct nfsd4_compound_state {TYPE_2__ current_fh; } ;
struct nfs4_delegation {int dl_client; int dl_stateid; } ;
struct inode {int dummy; } ;
typedef int stateid_t ;
typedef scalar_t__ __be32 ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,int) ;
 scalar_t__ FUNC_4 (struct svc_rqst*,TYPE_2__*,int ,int ) ;
 struct nfs4_delegation* FUNC_5 (struct inode*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (struct nfsd4_compound_state*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct nfs4_delegation*) ;

__be32
FUNC_12(struct svc_rqst *VAR_5, struct nfsd4_compound_state *VAR_6,
    struct nfsd4_delegreturn *VAR_7)
{
 struct nfs4_delegation *VAR_8;
 stateid_t *VAR_9 = &VAR_7->dr_stateid;
 struct inode *VAR_10;
 __be32 VAR_11;
 int VAR_12 = 0;

 if ((VAR_11 = FUNC_4(VAR_5, &VAR_6->current_fh, VAR_1, 0)))
  return VAR_11;
 VAR_10 = VAR_6->current_fh.fh_dentry->d_inode;

 if (FUNC_9(VAR_6))
  VAR_12 |= VAR_0;
 FUNC_7();
 VAR_11 = VAR_2;
 if (FUNC_2(VAR_9) || FUNC_0(VAR_9))
  goto out;
 VAR_11 = VAR_4;
 if (FUNC_1(VAR_9))
  goto out;
 VAR_11 = VAR_2;
 if (!FUNC_6(VAR_9))
  goto out;
 VAR_11 = VAR_3;
 VAR_8 = FUNC_5(VAR_10, VAR_9);
 if (!VAR_8)
  goto out;
 VAR_11 = FUNC_3(VAR_9, &VAR_8->dl_stateid, VAR_12);
 if (VAR_11)
  goto out;
 FUNC_10(VAR_8->dl_client);

 FUNC_11(VAR_8);
out:
 FUNC_8();

 return VAR_11;
}
