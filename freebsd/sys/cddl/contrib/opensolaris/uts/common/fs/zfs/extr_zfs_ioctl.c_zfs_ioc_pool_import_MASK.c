
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ zc_nvlist_conf_size; scalar_t__ zc_nvlist_src_size; scalar_t__ zc_guid; scalar_t__ zc_nvlist_dst; int zc_cookie; int zc_name; int zc_iflags; int zc_nvlist_src; int zc_nvlist_conf; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,scalar_t__,int ,int **) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,scalar_t__*) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (int ,int *,int *,int ) ;

__attribute__((used)) static int
FUNC_6(zfs_cmd_t *VAR_2)
{
 nvlist_t *VAR_3, *VAR_4 = ((void*)0);
 uint64_t VAR_5;
 int VAR_6;

 if ((VAR_6 = FUNC_1(VAR_2->zc_nvlist_conf, VAR_2->zc_nvlist_conf_size,
     VAR_2->zc_iflags, &VAR_3)) != 0)
  return (VAR_6);

 if (VAR_2->zc_nvlist_src_size != 0 && (VAR_6 =
     FUNC_1(VAR_2->zc_nvlist_src, VAR_2->zc_nvlist_src_size,
     VAR_2->zc_iflags, &VAR_4))) {
  FUNC_2(VAR_3);
  return (VAR_6);
 }

 if (FUNC_3(VAR_3, VAR_1, &VAR_5) != 0 ||
     VAR_5 != VAR_2->zc_guid)
  VAR_6 = FUNC_0(VAR_0);
 else
  VAR_6 = FUNC_5(VAR_2->zc_name, VAR_3, VAR_4, VAR_2->zc_cookie);

 if (VAR_2->zc_nvlist_dst != 0) {
  int VAR_7;

  if ((VAR_7 = FUNC_4(VAR_2, VAR_3)) != 0)
   VAR_6 = VAR_7;
 }

 FUNC_2(VAR_3);

 FUNC_2(VAR_4);

 return (VAR_6);
}
