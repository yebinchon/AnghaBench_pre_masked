
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
struct nfsstate {struct nfsclient* ls_clp; } ;
struct nfslockfile {int lf_deleg; } ;
struct nfsclient {int dummy; } ;
typedef int NFSPROC_T ;


 struct nfsstate* FUNC_0 (int *) ;
 struct nfsstate* FUNC_1 (int *) ;
 struct nfsstate* FUNC_2 (struct nfsstate*,int ) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int FUNC_4 (struct nfsstate*,int*,int *,int ) ;

__attribute__((used)) static int
FUNC_5(vnode_t VAR_1, struct nfslockfile *VAR_2,
    struct nfsclient *VAR_3, int *VAR_4, NFSPROC_T *VAR_5)
{
 struct nfsstate *VAR_6, *VAR_7;
 int VAR_8 = 0;

 VAR_6 = FUNC_1(&VAR_2->lf_deleg);
 while (VAR_6 != FUNC_0(&VAR_2->lf_deleg)) {
  VAR_7 = FUNC_2(VAR_6, VAR_0);
  if (VAR_6->ls_clp != VAR_3) {
   VAR_8 = FUNC_4(VAR_6, VAR_4, VAR_5, VAR_1);
   if (VAR_8) {




    goto out;
   }
  }
  VAR_6 = VAR_7;
 }
out:
 FUNC_3(VAR_8);
 return (VAR_8);
}
