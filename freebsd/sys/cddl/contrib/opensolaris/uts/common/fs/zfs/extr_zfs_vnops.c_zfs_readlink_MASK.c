
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int z_sa_hdl; scalar_t__ z_is_sa; int * z_zfsvfs; } ;
typedef TYPE_1__ znode_t ;
typedef int zfsvfs_t ;
typedef int vnode_t ;
typedef int uio_t ;
typedef int cred_t ;
typedef int caller_context_t ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (TYPE_1__*,int *) ;

__attribute__((used)) static int
FUNC_8(vnode_t *VAR_0, uio_t *VAR_1, cred_t *VAR_2, caller_context_t *VAR_3)
{
 znode_t *VAR_4 = FUNC_1(VAR_0);
 zfsvfs_t *VAR_5 = VAR_4->z_zfsvfs;
 int VAR_6;

 FUNC_3(VAR_5);
 FUNC_5(VAR_4);

 if (VAR_4->z_is_sa)
  VAR_6 = FUNC_6(VAR_4->z_sa_hdl,
      FUNC_0(VAR_5), VAR_1);
 else
  VAR_6 = FUNC_7(VAR_4, VAR_1);

 FUNC_2(VAR_5, VAR_4);

 FUNC_4(VAR_5);
 return (VAR_6);
}
