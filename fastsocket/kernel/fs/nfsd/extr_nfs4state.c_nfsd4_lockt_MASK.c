
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct svc_rqst {int dummy; } ;
struct nfsd4_lockt {int lt_type; int lt_denied; int lt_length; int lt_offset; int * lt_stateowner; int lt_owner; int lt_clientid; } ;
struct TYPE_6__ {TYPE_1__* fh_dentry; } ;
struct nfsd4_compound_state {TYPE_2__ current_fh; } ;
struct inode {int dummy; } ;
struct file_lock {scalar_t__ fl_type; int fl_end; int fl_start; int fl_flags; int fl_pid; scalar_t__ fl_owner; } ;
typedef scalar_t__ fl_owner_t ;
typedef scalar_t__ __be32 ;
struct TYPE_7__ {int tgid; } ;
struct TYPE_5__ {struct inode* d_inode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;




 scalar_t__ FUNC_0 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 TYPE_4__* VAR_5 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (struct svc_rqst*,TYPE_2__*,int ,int ) ;
 int * FUNC_4 (struct inode*,int *,int *) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (struct file_lock*) ;
 int FUNC_8 () ;
 int FUNC_9 (struct file_lock*,int *) ;
 int FUNC_10 (struct file_lock*) ;
 int FUNC_11 () ;
 scalar_t__ VAR_6 ;
 int FUNC_12 (struct nfsd4_compound_state*) ;
 int FUNC_13 (struct svc_rqst*,TYPE_2__*,struct file_lock*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_14 (int) ;

__be32
FUNC_15(struct svc_rqst *VAR_12, struct nfsd4_compound_state *VAR_13,
     struct nfsd4_lockt *VAR_14)
{
 struct inode *VAR_15;
 struct file_lock VAR_16;
 int VAR_17;
 __be32 VAR_18;

 if (FUNC_6())
  return VAR_8;

 if (FUNC_1(VAR_14->lt_offset, VAR_14->lt_length))
   return VAR_9;

 VAR_14->lt_stateowner = ((void*)0);
 FUNC_8();

 VAR_18 = VAR_10;
 if (!FUNC_12(VAR_13) && FUNC_0(&VAR_14->lt_clientid))
  goto out;

 if ((VAR_18 = FUNC_3(VAR_12, &VAR_13->current_fh, VAR_4, 0))) {
  FUNC_2("NFSD: nfsd4_lockt: fh_verify() failed!\n");
  if (VAR_18 == VAR_11)
   VAR_18 = VAR_9;
  goto out;
 }

 VAR_15 = VAR_13->current_fh.fh_dentry->d_inode;
 FUNC_7(&VAR_16);
 switch (VAR_14->lt_type) {
  case 130:
  case 131:
   VAR_16.fl_type = VAR_1;
  break;
  case 128:
  case 129:
   VAR_16.fl_type = VAR_3;
  break;
  default:
   FUNC_2("NFSD: nfs4_lockt: bad lock type!\n");
   VAR_18 = VAR_9;
  goto out;
 }

 VAR_14->lt_stateowner = FUNC_4(VAR_15,
   &VAR_14->lt_clientid, &VAR_14->lt_owner);
 if (VAR_14->lt_stateowner)
  VAR_16.fl_owner = (fl_owner_t)VAR_14->lt_stateowner;
 VAR_16.fl_pid = VAR_5->tgid;
 VAR_16.fl_flags = VAR_0;

 VAR_16.fl_start = VAR_14->lt_offset;
 VAR_16.fl_end = FUNC_5(VAR_14->lt_offset, VAR_14->lt_length);

 FUNC_10(&VAR_16);

 VAR_18 = VAR_6;
 VAR_17 = FUNC_13(VAR_12, &VAR_13->current_fh, &VAR_16);
 if (VAR_17) {
  VAR_18 = FUNC_14(VAR_17);
  goto out;
 }
 if (VAR_16.fl_type != VAR_2) {
  VAR_18 = VAR_7;
  FUNC_9(&VAR_16, &VAR_14->lt_denied);
 }
out:
 FUNC_11();
 return VAR_18;
}
