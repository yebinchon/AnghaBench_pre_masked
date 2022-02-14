
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
typedef struct sockaddr_storage uint8_t ;
struct vnode {int v_mount; } ;
struct timeval {int tv_sec; int tv_usec; } ;
struct nfsnode {int n_size; TYPE_1__* n_fhp; } ;
struct nfsmount {int nm_timeo; TYPE_2__* nm_nam; } ;
typedef int off_t ;
struct TYPE_4__ {int sa_len; } ;
struct TYPE_3__ {scalar_t__ nfh_len; TYPE_2__* nfh_fh; } ;


 int VAR_0 ;
 int FUNC_0 (struct vnode*) ;
 struct nfsmount* FUNC_1 (int ) ;
 struct nfsnode* FUNC_2 (struct vnode*) ;
 int FUNC_3 (TYPE_2__*,struct sockaddr_storage*,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int) ;

__attribute__((used)) static void
FUNC_5(struct vnode *VAR_1, uint8_t *VAR_2, size_t *VAR_3,
    struct sockaddr_storage *VAR_4, int *VAR_5, off_t *VAR_6,
    struct timeval *VAR_7)
{
 struct nfsmount *VAR_8;
 struct nfsnode *VAR_9 = FUNC_2(VAR_1);

 VAR_8 = FUNC_1(VAR_1->v_mount);
 if (VAR_3 != ((void*)0))
  *VAR_3 = (size_t)VAR_9->n_fhp->nfh_len;
 if (VAR_2 != ((void*)0))
  FUNC_3(VAR_9->n_fhp->nfh_fh, VAR_2, VAR_9->n_fhp->nfh_len);
 if (VAR_4 != ((void*)0))
  FUNC_3(VAR_8->nm_nam, VAR_4, FUNC_4(VAR_8->nm_nam->sa_len, sizeof(*VAR_4)));
 if (VAR_5 != ((void*)0))
  *VAR_5 = FUNC_0(VAR_1);
 if (VAR_6 != ((void*)0))
  *VAR_6 = VAR_9->n_size;
 if (VAR_7 != ((void*)0)) {
  VAR_7->tv_sec = VAR_8->nm_timeo / VAR_0;
  VAR_7->tv_usec = (VAR_8->nm_timeo % VAR_0) * (1000000 / VAR_0);
 }
}
