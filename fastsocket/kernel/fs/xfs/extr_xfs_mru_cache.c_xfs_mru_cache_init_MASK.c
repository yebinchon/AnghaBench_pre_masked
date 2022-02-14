
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_mru_cache_elem_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_3(void)
{
 VAR_1 = FUNC_2(sizeof(xfs_mru_cache_elem_t),
                                  "xfs_mru_cache_elem");
 if (!VAR_1)
  goto out;

 VAR_2 = FUNC_0("xfs_mru_cache");
 if (!VAR_2)
  goto out_destroy_mru_elem_zone;

 return 0;

 out_destroy_mru_elem_zone:
 FUNC_1(VAR_1);
 out:
 return -VAR_0;
}
