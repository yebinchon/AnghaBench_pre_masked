
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zs_ctime; int zs_links; int zs_gen; int zs_mode; } ;
typedef TYPE_1__ zfs_stat_t ;
typedef int sa_handle_t ;
typedef int sa_bulk_attr_t ;
typedef int sa_attr_type_t ;


 int FUNC_0 (int *,int,int ,int *,int *,int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static int
FUNC_2(sa_handle_t *VAR_4, sa_attr_type_t *VAR_5,
    zfs_stat_t *VAR_6)
{
 sa_bulk_attr_t VAR_7[4];
 int VAR_8 = 0;

 FUNC_0(VAR_7, VAR_8, VAR_5[VAR_3], ((void*)0),
     &VAR_6->zs_mode, sizeof (VAR_6->zs_mode));
 FUNC_0(VAR_7, VAR_8, VAR_5[VAR_1], ((void*)0),
     &VAR_6->zs_gen, sizeof (VAR_6->zs_gen));
 FUNC_0(VAR_7, VAR_8, VAR_5[VAR_2], ((void*)0),
     &VAR_6->zs_links, sizeof (VAR_6->zs_links));
 FUNC_0(VAR_7, VAR_8, VAR_5[VAR_0], ((void*)0),
     &VAR_6->zs_ctime, sizeof (VAR_6->zs_ctime));

 return (FUNC_1(VAR_4, VAR_7, VAR_8));
}
