
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
struct nfsclient {scalar_t__ lc_expiry; int lc_olddeleg; int lc_deleg; int lc_idlen; int lc_id; } ;
struct TYPE_8__ {int nsf_flags; } ;
struct TYPE_7__ {int v_iflag; } ;
typedef int NFSPROC_T ;


 int FUNC_0 (struct nfsclient*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_4 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 () ;
 int FUNC_8 (struct nfsclient*,int *) ;
 int FUNC_9 (int *) ;
 TYPE_2__ VAR_7 ;
 int FUNC_10 (int ,int ,int ,int *) ;
 int FUNC_11 (struct nfsclient*,int *) ;
 int FUNC_12 (int *,int,int *,int ,int *) ;
 int FUNC_13 (int *) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_14(struct nfsclient *VAR_9, int *VAR_10, vnode_t VAR_11,
    NFSPROC_T *VAR_12)
{
 int VAR_13, VAR_14 = 0;




 if (VAR_9->lc_expiry >= VAR_1 ||
     !(VAR_7.nsf_flags & VAR_2))
  return (0);
 if (*VAR_10 == 0) {
  FUNC_2();
  if (VAR_11 != ((void*)0)) {
   VAR_14 = FUNC_4(VAR_11);
   FUNC_6(VAR_11, 0);
  }
  FUNC_1();
  FUNC_13(&VAR_8);
  do {
   VAR_13 = FUNC_12(&VAR_8, 1, ((void*)0),
       VAR_4, ((void*)0));
  } while (!VAR_13);
  FUNC_3();
  *VAR_10 = 1;
  if (VAR_11 != ((void*)0)) {
   FUNC_5(VAR_11, VAR_14 | VAR_0);
   if ((VAR_11->v_iflag & VAR_5) != 0)
    return (2);
  }
  return (1);
 }
 FUNC_2();




 FUNC_10(VAR_9->lc_id, VAR_9->lc_idlen, VAR_3, VAR_12);
 FUNC_7();
 FUNC_8(VAR_9, VAR_12);
 FUNC_9(&VAR_9->lc_deleg);
 FUNC_9(&VAR_9->lc_olddeleg);
 FUNC_0(VAR_9, VAR_6);
 FUNC_11(VAR_9, VAR_12);
 return (1);
}
