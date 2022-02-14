
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * z_zfsvfs; } ;
typedef TYPE_1__ znode_t ;
typedef int zfsvfs_t ;
typedef int vsecattr_t ;
typedef int vnode_t ;
typedef int cred_t ;
typedef int caller_context_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int *,int ,int *) ;

__attribute__((used)) static int
FUNC_5(vnode_t *VAR_3, vsecattr_t *VAR_4, int VAR_5, cred_t *VAR_6,
    caller_context_t *VAR_7)
{
 znode_t *VAR_8 = FUNC_0(VAR_3);
 zfsvfs_t *VAR_9 = VAR_8->z_zfsvfs;
 int VAR_10;
 boolean_t VAR_11 = (VAR_5 & VAR_0) ? VAR_2 : VAR_1;

 FUNC_1(VAR_9);
 FUNC_3(VAR_8);
 VAR_10 = FUNC_4(VAR_8, VAR_4, VAR_11, VAR_6);
 FUNC_2(VAR_9);

 return (VAR_10);
}
