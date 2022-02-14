
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct TYPE_3__ {int nr_lock; } ;
struct nfsmount {int nm_flag; int nm_timeo; int nm_retry; scalar_t__ nm_minorvers; scalar_t__ nm_wsize; scalar_t__ nm_rsize; scalar_t__ nm_readdirsize; scalar_t__ nm_acregmin; scalar_t__ nm_acregmax; scalar_t__ nm_acdirmin; scalar_t__ nm_acdirmax; scalar_t__ nm_readahead; int nm_wcommitsize; scalar_t__ nm_sotype; scalar_t__ nm_soproto; int nm_hostname; TYPE_1__ nm_sockreq; int * nm_client; } ;
struct nfs_args {scalar_t__ sotype; int flags; int timeo; int retrans; scalar_t__ wsize; scalar_t__ rsize; scalar_t__ readdirsize; scalar_t__ acregmin; scalar_t__ acregmax; scalar_t__ acdirmin; scalar_t__ acdirmax; scalar_t__ readahead; int wcommitsize; scalar_t__ proto; } ;
struct mount {int mnt_flag; int mnt_optnew; } ;


 int VAR_0 ;
 int FUNC_0 (struct mount*) ;
 int FUNC_1 (struct mount*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 void* VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 void* VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct nfsmount*,TYPE_1__*,struct ucred*,struct thread*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,char*) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (int ,char) ;
 int FUNC_10 (int ,char const*,int) ;
 scalar_t__ FUNC_11 (int ,char*,int *,int *) ;

__attribute__((used)) static void
FUNC_12(struct mount *VAR_34, struct nfsmount *VAR_35, struct nfs_args *VAR_36,
    const char *VAR_37, struct ucred *VAR_38, struct thread *VAR_39)
{
 int VAR_40;
 char *VAR_41;







 if (FUNC_11(VAR_34->mnt_optnew, "ro", ((void*)0), ((void*)0)) == 0) {
  FUNC_0(VAR_34);
  VAR_34->mnt_flag |= VAR_1;
  FUNC_1(VAR_34);
 } else if (VAR_34->mnt_flag & VAR_2) {
  FUNC_0(VAR_34);
  VAR_34->mnt_flag &= ~VAR_1;
  FUNC_1(VAR_34);
 }






 if (VAR_36->sotype == VAR_33) {
  VAR_35->nm_flag &= ~VAR_9;
  VAR_35->nm_timeo = VAR_26;
  if ((VAR_36->flags & VAR_8) != 0)
   VAR_35->nm_retry = VAR_0;
  else
   VAR_35->nm_retry = VAR_30;
 }


 if ((VAR_36->flags & (VAR_7 | VAR_8)) == 0) {
  VAR_36->flags &= ~VAR_11;
  VAR_35->nm_flag &= ~VAR_11;
 }


 if (VAR_35->nm_minorvers == 0) {
  VAR_36->flags &= ~VAR_10;
  VAR_35->nm_flag &= ~VAR_10;
 }


 VAR_40 = !(VAR_35->nm_flag & VAR_14)
    && (VAR_36->flags & VAR_14);

 VAR_40 |= ((VAR_35->nm_flag & VAR_9) !=
      (VAR_36->flags & VAR_9));


 VAR_35->nm_flag = VAR_36->flags | VAR_35->nm_flag;

 if ((VAR_36->flags & VAR_17) && VAR_36->timeo > 0) {
  VAR_35->nm_timeo = (VAR_36->timeo * VAR_21 + 5) / 10;
  if (VAR_35->nm_timeo < VAR_29)
   VAR_35->nm_timeo = VAR_29;
  else if (VAR_35->nm_timeo > VAR_26)
   VAR_35->nm_timeo = VAR_26;
 }

 if ((VAR_36->flags & VAR_15) && VAR_36->retrans > 1) {
  VAR_35->nm_retry = VAR_36->retrans;
  if (VAR_35->nm_retry > VAR_25)
   VAR_35->nm_retry = VAR_25;
 }

 if ((VAR_36->flags & VAR_19) && VAR_36->wsize > 0) {
  VAR_35->nm_wsize = VAR_36->wsize;





  if (VAR_35->nm_wsize > VAR_20)
   VAR_35->nm_wsize = 1 << (FUNC_2(VAR_35->nm_wsize) - 1);
  else
   VAR_35->nm_wsize = VAR_20;
 }

 if ((VAR_36->flags & VAR_16) && VAR_36->rsize > 0) {
  VAR_35->nm_rsize = VAR_36->rsize;





  if (VAR_35->nm_rsize > VAR_20)
   VAR_35->nm_rsize = 1 << (FUNC_2(VAR_35->nm_rsize) - 1);
  else
   VAR_35->nm_rsize = VAR_20;
 }

 if ((VAR_36->flags & VAR_13) && VAR_36->readdirsize > 0) {
  VAR_35->nm_readdirsize = VAR_36->readdirsize;
 }

 if ((VAR_36->flags & VAR_6) && VAR_36->acregmin >= 0)
  VAR_35->nm_acregmin = VAR_36->acregmin;
 else
  VAR_35->nm_acregmin = VAR_27;
 if ((VAR_36->flags & VAR_5) && VAR_36->acregmax >= 0)
  VAR_35->nm_acregmax = VAR_36->acregmax;
 else
  VAR_35->nm_acregmax = VAR_22;
 if ((VAR_36->flags & VAR_4) && VAR_36->acdirmin >= 0)
  VAR_35->nm_acdirmin = VAR_36->acdirmin;
 else
  VAR_35->nm_acdirmin = VAR_28;
 if ((VAR_36->flags & VAR_3) && VAR_36->acdirmax >= 0)
  VAR_35->nm_acdirmax = VAR_36->acdirmax;
 else
  VAR_35->nm_acdirmax = VAR_23;
 if (VAR_35->nm_acdirmin > VAR_35->nm_acdirmax)
  VAR_35->nm_acdirmin = VAR_35->nm_acdirmax;
 if (VAR_35->nm_acregmin > VAR_35->nm_acregmax)
  VAR_35->nm_acregmin = VAR_35->nm_acregmax;

 if ((VAR_36->flags & VAR_12) && VAR_36->readahead >= 0) {
  if (VAR_36->readahead <= VAR_24)
   VAR_35->nm_readahead = VAR_36->readahead;
  else
   VAR_35->nm_readahead = VAR_24;
 }
 if ((VAR_36->flags & VAR_18) && VAR_36->wcommitsize >= 0) {
  if (VAR_36->wcommitsize < VAR_35->nm_wsize)
   VAR_35->nm_wcommitsize = VAR_35->nm_wsize;
  else
   VAR_35->nm_wcommitsize = VAR_36->wcommitsize;
 }

 VAR_40 |= ((VAR_35->nm_sotype != VAR_36->sotype) ||
      (VAR_35->nm_soproto != VAR_36->proto));

 if (VAR_35->nm_client != ((void*)0) && VAR_40) {
  int VAR_42 = 0, VAR_43 = 0;

  if (VAR_35->nm_sotype == VAR_33) {
   VAR_43 = FUNC_5(&VAR_35->nm_sockreq.nr_lock);
   if (!VAR_43)
    VAR_42 = 1;
  }
  if (!VAR_43) {
      FUNC_4(&VAR_35->nm_sockreq);
      if (VAR_42)
   FUNC_6(&VAR_35->nm_sockreq.nr_lock);
      VAR_35->nm_sotype = VAR_36->sotype;
      VAR_35->nm_soproto = VAR_36->proto;
      if (VAR_35->nm_sotype == VAR_32)
   while (FUNC_3(VAR_35, &VAR_35->nm_sockreq,
       VAR_38, VAR_39, 0)) {
    FUNC_8("newnfs_args: retrying connect\n");
    (void) FUNC_7(VAR_31, 0, "nfscon");
   }
  }
 } else {
  VAR_35->nm_sotype = VAR_36->sotype;
  VAR_35->nm_soproto = VAR_36->proto;
 }

 if (VAR_37 != ((void*)0)) {
  FUNC_10(VAR_35->nm_hostname, VAR_37,
      sizeof(VAR_35->nm_hostname));
  VAR_41 = FUNC_9(VAR_35->nm_hostname, ':');
  if (VAR_41 != ((void*)0))
   *VAR_41 = '\0';
 }
}
