
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_quad_t ;
struct nfslayout {int lay_flags; } ;
struct nfsclient {int lc_flags; } ;
typedef int nfsv4stateid_t ;
typedef int nfsquad_t ;
typedef int fhandle_t ;
typedef int NFSPROC_T ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct nfsclient*,int ,int *,int,int *,int *,int *,int,int *) ;
 int FUNC_4 (int ,int ,struct nfsclient**,int *,int ,int ,int *,int *) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct nfslayout*) ;

__attribute__((used)) static int
FUNC_7(nfsquad_t VAR_5, nfsv4stateid_t *VAR_6, fhandle_t *VAR_7,
    struct nfslayout *VAR_8, int VAR_9, int VAR_10, NFSPROC_T *VAR_11)
{
 struct nfsclient *VAR_12;
 int VAR_13;

 FUNC_2(4, "nfsrv_recalllayout\n");
 VAR_13 = FUNC_4(VAR_5, 0, &VAR_12, ((void*)0), (nfsquad_t)((u_quad_t)0),
     0, ((void*)0), VAR_11);
 FUNC_2(4, "aft nfsrv_getclient=%d\n", VAR_13);
 if (VAR_13 != 0) {
  FUNC_5("nfsrv_recalllayout: getclient err=%d\n", VAR_13);
  return (VAR_13);
 }
 if ((VAR_12->lc_flags & VAR_0) != 0) {
  VAR_13 = FUNC_3(VAR_12, VAR_4,
      VAR_6, VAR_9, VAR_7, ((void*)0), ((void*)0), VAR_10, VAR_11);

  if (VAR_13 != 0 && VAR_8 != ((void*)0)) {
   FUNC_0();






   if ((VAR_8->lay_flags & VAR_2) != 0) {
    VAR_8->lay_flags |= VAR_3;
    FUNC_6(VAR_8);
   }
   FUNC_1();
   if (VAR_13 != VAR_1)
    FUNC_5("nfsrv_recalllayout: err=%d\n", VAR_13);
  }
 } else
  FUNC_5("nfsrv_recalllayout: clp not NFSv4.1\n");
 return (VAR_13);
}
