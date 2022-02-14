
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * z_zfsvfs; } ;
typedef TYPE_1__ znode_t ;
typedef int zfsvfs_t ;
typedef int vnode_t ;
typedef int cred_t ;
typedef int caller_context_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int,int,int ,int *) ;
 int FUNC_5 (TYPE_1__*,int,int,int *) ;

__attribute__((used)) static int
FUNC_6(vnode_t *VAR_2, int VAR_3, int VAR_4, cred_t *VAR_5,
    caller_context_t *VAR_6)
{
 znode_t *VAR_7 = FUNC_0(VAR_2);
 zfsvfs_t *VAR_8 = VAR_7->z_zfsvfs;
 int VAR_9;

 FUNC_1(VAR_8);
 FUNC_3(VAR_7);

 if (VAR_4 & VAR_1)
  VAR_9 = FUNC_4(VAR_7, VAR_3, VAR_4, VAR_0, VAR_5);
 else
  VAR_9 = FUNC_5(VAR_7, VAR_3, VAR_4, VAR_5);

 FUNC_2(VAR_8);
 return (VAR_9);
}
