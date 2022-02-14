
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int z_os; } ;
typedef TYPE_1__ zfsvfs_t ;
typedef int zfs_userquota_prop_t ;
typedef scalar_t__ uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char const*,scalar_t__,char*,int ) ;
 int FUNC_3 (int ,scalar_t__,char*,int,int,scalar_t__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ) ;

int
FUNC_5(zfsvfs_t *VAR_3, zfs_userquota_prop_t VAR_4,
    const char *VAR_5, uint64_t VAR_6, uint64_t *VAR_7)
{
 char VAR_8[32];
 int VAR_9;
 uint64_t VAR_10;

 *VAR_7 = 0;

 if (!FUNC_1(VAR_3->z_os))
  return (FUNC_0(VAR_2));

 VAR_10 = FUNC_4(VAR_3, VAR_4);
 if (VAR_10 == 0)
  return (0);

 VAR_9 = FUNC_2(VAR_3, VAR_5, VAR_6, VAR_8, VAR_0);
 if (VAR_9)
  return (VAR_9);

 VAR_9 = FUNC_3(VAR_3->z_os, VAR_10, VAR_8, 8, 1, VAR_7);
 if (VAR_9 == VAR_1)
  VAR_9 = 0;
 return (VAR_9);
}
