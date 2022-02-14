
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zprop_source_t ;
typedef int zfs_handle_t ;
typedef int mountpoint ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,int,scalar_t__*) ;

void
FUNC_2(zfs_handle_t *VAR_3)
{
 char VAR_4[VAR_0];
 zprop_source_t VAR_5;

 if (!FUNC_1(VAR_3, VAR_4, sizeof (VAR_4),
     &VAR_5))
  return;

 if (VAR_5 == VAR_1 ||
     VAR_5 == VAR_2) {






  (void) FUNC_0(VAR_4);
 }
}
