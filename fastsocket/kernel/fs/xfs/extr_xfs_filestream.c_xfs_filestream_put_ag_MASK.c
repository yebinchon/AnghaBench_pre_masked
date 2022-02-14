
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_mount_t ;
typedef int xfs_agnumber_t ;
struct xfs_perag {int pagf_fstrms; } ;


 int FUNC_0 (int *) ;
 struct xfs_perag* FUNC_1 (int *,int ) ;
 int FUNC_2 (struct xfs_perag*) ;

__attribute__((used)) static void
FUNC_3(
 xfs_mount_t *VAR_0,
 xfs_agnumber_t VAR_1)
{
 struct xfs_perag *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 FUNC_0(&VAR_2->pagf_fstrms);
 FUNC_2(VAR_2);
}
