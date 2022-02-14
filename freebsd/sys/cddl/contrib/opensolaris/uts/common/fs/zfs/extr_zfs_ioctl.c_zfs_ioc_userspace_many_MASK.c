
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zfsvfs_t ;
struct TYPE_3__ {int zc_nvlist_dst_size; int zc_iflags; scalar_t__ zc_nvlist_dst; int zc_cookie; int zc_objset_type; int zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*,void*,int,int ) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (void*,int) ;
 int FUNC_4 (int *,int ,int *,void*,int*) ;
 int FUNC_5 (int ,int ,int **,int ) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int
FUNC_7(zfs_cmd_t *VAR_4)
{
 zfsvfs_t *VAR_5;
 int VAR_6 = VAR_4->zc_nvlist_dst_size;

 if (VAR_6 <= 0)
  return (FUNC_0(VAR_1));

 int VAR_7 = FUNC_5(VAR_4->zc_name, VAR_2, &VAR_5, VAR_0);
 if (VAR_7 != 0)
  return (VAR_7);

 void *VAR_8 = FUNC_2(VAR_6, VAR_3);

 VAR_7 = FUNC_4(VAR_5, VAR_4->zc_objset_type, &VAR_4->zc_cookie,
     VAR_8, &VAR_4->zc_nvlist_dst_size);

 if (VAR_7 == 0) {
  VAR_7 = FUNC_1(VAR_8,
      (void *)(uintptr_t)VAR_4->zc_nvlist_dst,
      VAR_4->zc_nvlist_dst_size, VAR_4->zc_iflags);
 }
 FUNC_3(VAR_8, VAR_6);
 FUNC_6(VAR_5, VAR_2);

 return (VAR_7);
}
