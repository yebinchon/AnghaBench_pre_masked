
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_quad_t ;
struct TYPE_5__ {int seqid; } ;
struct nfsstate {TYPE_1__ ls_stateid; } ;
struct nfsrv_descript {int dummy; } ;
struct nfsclient {int dummy; } ;
struct TYPE_6__ {scalar_t__ seqid; } ;
typedef TYPE_2__ nfsv4stateid_t ;
typedef int nfsquad_t ;
typedef int NFSPROC_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int ,int ,struct nfsclient**,int *,int ,int ,struct nfsrv_descript*,int *) ;
 int FUNC_4 (struct nfsclient*,TYPE_2__*,int ,struct nfsstate**) ;

int
FUNC_5(struct nfsrv_descript *VAR_2, nfsv4stateid_t *VAR_3,
    NFSPROC_T *VAR_4)
{
 struct nfsclient *VAR_5;
 struct nfsstate *VAR_6;
 int VAR_7;

 FUNC_0();



 VAR_7 = FUNC_3((nfsquad_t)((u_quad_t)0), VAR_0, &VAR_5,
     ((void*)0), (nfsquad_t)((u_quad_t)0), 0, VAR_2, VAR_4);
 if (VAR_7 == 0)
  VAR_7 = FUNC_4(VAR_5, VAR_3, 0, &VAR_6);
 if (VAR_7 == 0 && VAR_3->seqid != 0 &&
     FUNC_2(VAR_3->seqid, VAR_6->ls_stateid.seqid))
  VAR_7 = VAR_1;
 FUNC_1();
 return (VAR_7);
}
