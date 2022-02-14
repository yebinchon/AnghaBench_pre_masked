
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int z_uid; int z_zfsvfs; } ;
typedef TYPE_1__ znode_t ;
typedef int uint32_t ;
typedef int uid_t ;
typedef int cred_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int ,int ,int *,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *,int,int *) ;

boolean_t
FUNC_4(znode_t *VAR_3, cred_t *VAR_4)
{
 uint32_t VAR_5 = VAR_0;

 if (FUNC_3(VAR_3, &VAR_5, VAR_1, VAR_4) != 0) {
  uid_t VAR_6;

  VAR_6 = FUNC_2(VAR_3->z_zfsvfs, VAR_3->z_uid, VAR_4, VAR_2);
  return (FUNC_1(VAR_4, FUNC_0(VAR_3), VAR_6) == 0);
 }
 return (VAR_1);
}
