
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t zc_nvlist_dst_size; scalar_t__ zc_nvlist_dst; int zc_iflags; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,void*,size_t,int ) ;
 char* FUNC_2 (size_t,int ) ;
 int FUNC_3 (char*,size_t) ;
 scalar_t__ FUNC_4 (int *,char**,size_t*,int ,int ) ;
 scalar_t__ FUNC_5 (int *,size_t*,int ) ;

__attribute__((used)) static int
FUNC_6(zfs_cmd_t *VAR_3, nvlist_t *VAR_4)
{
 char *VAR_5 = ((void*)0);
 int VAR_6 = 0;
 size_t VAR_7;

 FUNC_0(FUNC_5(VAR_4, &VAR_7, VAR_2) == 0);
 VAR_5 = (void *)(uintptr_t)VAR_3->zc_nvlist_dst;
 FUNC_0(FUNC_4(VAR_4, &VAR_5, &VAR_7, VAR_2,
     0) == 0);


 VAR_3->zc_nvlist_dst_size = VAR_7;
 return (VAR_6);
}
