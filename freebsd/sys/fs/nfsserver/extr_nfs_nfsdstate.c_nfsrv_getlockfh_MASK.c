
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
typedef int u_short ;
struct nfslockfile {int lf_fh; } ;
typedef int fhandle_t ;
typedef int NFSPROC_T ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(vnode_t VAR_1, u_short VAR_2, struct nfslockfile *VAR_3,
    fhandle_t *VAR_4, NFSPROC_T *VAR_5)
{
 fhandle_t *VAR_6 = ((void*)0);
 int VAR_7;





 if (VAR_2 & VAR_0) {
  FUNC_0(VAR_3 != ((void*)0), ("nfsrv_getlockfh: new_lfp NULL"));
  VAR_6 = &VAR_3->lf_fh;
 } else if (VAR_4) {
  VAR_6 = VAR_4;
 } else {
  FUNC_3("nfsrv_getlockfh");
 }
 VAR_7 = FUNC_2(VAR_1, VAR_6, VAR_5);
 FUNC_1(VAR_7);
 return (VAR_7);
}
