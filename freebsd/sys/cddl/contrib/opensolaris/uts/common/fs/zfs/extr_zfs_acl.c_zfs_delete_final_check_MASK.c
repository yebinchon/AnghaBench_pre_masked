
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int z_uid; int z_zfsvfs; } ;
typedef TYPE_1__ znode_t ;
typedef int uid_t ;
typedef int mode_t ;
typedef int cred_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ,int ,int ,int) ;
 int FUNC_2 (int ,int ,int *,int ) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,int *) ;

__attribute__((used)) static int
FUNC_4(znode_t *VAR_3, znode_t *VAR_4,
    mode_t VAR_5, cred_t *VAR_6)
{
 int VAR_7;
 uid_t VAR_8;

 VAR_8 = FUNC_2(VAR_4->z_zfsvfs, VAR_4->z_uid, VAR_6, VAR_2);

 VAR_7 = FUNC_1(VAR_6, FUNC_0(VAR_4),
     VAR_8, VAR_5, VAR_1|VAR_0);

 if (VAR_7 == 0)
  VAR_7 = FUNC_3(VAR_4, VAR_3, VAR_6);

 return (VAR_7);
}
