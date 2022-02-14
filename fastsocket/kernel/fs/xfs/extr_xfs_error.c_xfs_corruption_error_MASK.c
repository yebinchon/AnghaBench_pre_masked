
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mount {int dummy; } ;
typedef int inst_t ;


 int FUNC_0 (struct xfs_mount*,char*) ;
 int VAR_0 ;
 int FUNC_1 (char const*,int,struct xfs_mount*,char const*,int,int *) ;
 int FUNC_2 (void*,int) ;

void
FUNC_3(
 const char *VAR_1,
 int VAR_2,
 struct xfs_mount *VAR_3,
 void *VAR_4,
 const char *VAR_5,
 int VAR_6,
 inst_t *VAR_7)
{
 if (VAR_2 <= VAR_0)
  FUNC_2(VAR_4, 16);
 FUNC_1(VAR_1, VAR_2, VAR_3, VAR_5, VAR_6, VAR_7);
 FUNC_0(VAR_3, "Corruption detected. Unmount and run xfs_repair");
}
