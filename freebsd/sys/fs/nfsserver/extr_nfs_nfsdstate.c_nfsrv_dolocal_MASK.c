
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vnode_t ;
typedef void* uint64_t ;
struct nfsrollback {int rlck_type; void* rlck_end; void* rlck_first; } ;
struct nfslockfile {int lf_rollback; } ;
struct TYPE_2__ {scalar_t__* lval; } ;
struct nfslockconflict {int cl_flags; int cl_ownerlen; int cl_owner; int cl_end; scalar_t__ cl_first; TYPE_1__ cl_clientid; } ;
typedef int NFSPROC_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct nfsrollback*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 struct nfsrollback* FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int ,struct nfslockfile*,int *) ;
 int FUNC_5 (int ,int,void*,void*,int *) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_6(vnode_t VAR_9, struct nfslockfile *VAR_10, int VAR_11, int VAR_12,
    uint64_t VAR_13, uint64_t VAR_14, struct nfslockconflict *VAR_15, NFSPROC_T *VAR_16)
{
 struct nfsrollback *VAR_17;
 int VAR_18 = 0, VAR_19, VAR_20;

 if (VAR_11 & VAR_7)
  VAR_19 = VAR_2;
 else if (VAR_11 & VAR_6)
  VAR_19 = VAR_0;
 else
  VAR_19 = VAR_1;
 if (VAR_12 & VAR_7)
  VAR_20 = VAR_2;
 else if (VAR_12 & VAR_6)
  VAR_20 = VAR_0;
 else
  VAR_20 = VAR_1;
 if (VAR_19 == VAR_20 || (VAR_20 == VAR_2 && VAR_19 == VAR_0))

  goto out;
 VAR_18 = FUNC_5(VAR_9, VAR_19, VAR_13, VAR_14, VAR_16);
 if (VAR_18 != 0) {
  if (VAR_15 != ((void*)0)) {
   VAR_15->cl_clientid.lval[0] = 0;
   VAR_15->cl_clientid.lval[1] = 0;
   VAR_15->cl_first = 0;
   VAR_15->cl_end = VAR_5;
   VAR_15->cl_flags = VAR_7;
   VAR_15->cl_ownerlen = 5;
   FUNC_1("LOCAL", VAR_15->cl_owner, 5);
  }
  FUNC_4(VAR_9, VAR_10, VAR_16);
 } else if (VAR_19 != VAR_1) {
  VAR_17 = FUNC_3(sizeof (struct nfsrollback), VAR_3,
      VAR_4);
  VAR_17->rlck_first = VAR_13;
  VAR_17->rlck_end = VAR_14;
  VAR_17->rlck_type = VAR_20;
  FUNC_0(&VAR_10->lf_rollback, VAR_17, VAR_8);
 }

out:
 FUNC_2(VAR_18);
 return (VAR_18);
}
