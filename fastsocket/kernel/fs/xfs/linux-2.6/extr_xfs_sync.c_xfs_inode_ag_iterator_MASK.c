
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xfs_agnumber_t ;
struct xfs_perag {scalar_t__ pag_agno; } ;
struct xfs_mount {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct xfs_mount*,struct xfs_perag*,int (*) (struct xfs_inode*,struct xfs_perag*,int,void*),int,void*,int) ;
 struct xfs_perag* FUNC_2 (struct xfs_mount*,scalar_t__) ;
 int FUNC_3 (struct xfs_perag*) ;

int
FUNC_4(
 struct xfs_mount *VAR_1,
 int (*VAR_2)(struct xfs_inode *VAR_3,
        struct xfs_perag *VAR_4, int VAR_5,
        void *VAR_6),
 int VAR_7,
 void *VAR_8)
{
 struct xfs_perag *VAR_9;
 int VAR_10 = 0;
 int VAR_11 = 0;
 xfs_agnumber_t VAR_12;

 VAR_12 = 0;
 while ((VAR_9 = FUNC_2(VAR_1, VAR_12))) {
  VAR_12 = VAR_9->pag_agno + 1;
  VAR_10 = FUNC_1(VAR_1, VAR_9, VAR_2, VAR_7, VAR_8, -1);
  FUNC_3(VAR_9);
  if (VAR_10) {
   VAR_11 = VAR_10;
   if (VAR_10 == VAR_0)
    break;
  }
 }
 return FUNC_0(VAR_11);
}
