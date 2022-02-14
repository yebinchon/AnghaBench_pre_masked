
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ z_groupquota_obj; scalar_t__ z_userquota_obj; int z_os; scalar_t__ z_replay; } ;
typedef TYPE_1__ zfsvfs_t ;
typedef scalar_t__ uint64_t ;
typedef int longlong_t ;
typedef int boolean_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (int ,scalar_t__,char*,int,int,scalar_t__*) ;

boolean_t
FUNC_2(zfsvfs_t *VAR_3, boolean_t VAR_4, uint64_t VAR_5)
{
 char VAR_6[32];
 uint64_t VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11;

 VAR_9 = VAR_4 ? VAR_1 : VAR_2;
 VAR_10 = VAR_4 ? VAR_3->z_groupquota_obj : VAR_3->z_userquota_obj;

 if (VAR_10 == 0 || VAR_3->z_replay)
  return (VAR_0);

 (void) FUNC_0(VAR_6, "%llx", (longlong_t)VAR_5);
 VAR_11 = FUNC_1(VAR_3->z_os, VAR_10, VAR_6, 8, 1, &VAR_8);
 if (VAR_11 != 0)
  return (VAR_0);

 VAR_11 = FUNC_1(VAR_3->z_os, VAR_9, VAR_6, 8, 1, &VAR_7);
 if (VAR_11 != 0)
  return (VAR_0);
 return (VAR_7 >= VAR_8);
}
