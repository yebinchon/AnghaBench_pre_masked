
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xfs_agnumber_t ;
struct xfs_perag {scalar_t__ pag_agno; unsigned long pag_ici_reclaim_cursor; int pag_ici_reclaim_lock; int pag_ici_root; } ;
struct xfs_mount {int dummy; } ;
struct xfs_inode {scalar_t__ i_ino; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 unsigned long FUNC_1 (struct xfs_mount*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct xfs_mount*,scalar_t__) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,void**,unsigned long,int,int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 struct xfs_perag* FUNC_9 (struct xfs_mount*,scalar_t__,int ) ;
 int FUNC_10 (struct xfs_perag*) ;
 int FUNC_11 (struct xfs_inode*,struct xfs_perag*,int) ;
 scalar_t__ FUNC_12 (struct xfs_inode*,int) ;

int
FUNC_13(
 struct xfs_mount *VAR_4,
 int VAR_5,
 int *VAR_6)
{
 struct xfs_perag *VAR_7;
 int VAR_8 = 0;
 int VAR_9 = 0;
 xfs_agnumber_t VAR_10;
 int VAR_11 = VAR_5 & VAR_1;
 int VAR_12;

restart:
 VAR_10 = 0;
 VAR_12 = 0;
 while ((VAR_7 = FUNC_9(VAR_4, VAR_10, VAR_2))) {
  unsigned long VAR_13 = 0;
  int VAR_14 = 0;
  int VAR_15 = 0;

  VAR_10 = VAR_7->pag_agno + 1;

  if (VAR_11) {
   if (!FUNC_4(&VAR_7->pag_ici_reclaim_lock)) {
    VAR_12++;
    FUNC_10(VAR_7);
    continue;
   }
   VAR_13 = VAR_7->pag_ici_reclaim_cursor;
  } else
   FUNC_3(&VAR_7->pag_ici_reclaim_lock);

  do {
   struct xfs_inode *VAR_16[VAR_3];
   int VAR_17;

   FUNC_7();
   VAR_15 = FUNC_6(
     &VAR_7->pag_ici_root,
     (void **)VAR_16, VAR_13,
     VAR_3,
     VAR_2);
   if (!VAR_15) {
    VAR_14 = 1;
    FUNC_8();
    break;
   }





   for (VAR_17 = 0; VAR_17 < VAR_15; VAR_17++) {
    struct xfs_inode *VAR_18 = VAR_16[VAR_17];

    if (VAR_14 || FUNC_12(VAR_18, VAR_5))
     VAR_16[VAR_17] = ((void*)0);
    if (FUNC_2(VAR_4, VAR_18->i_ino) !=
        VAR_7->pag_agno)
     continue;
    VAR_13 = FUNC_1(VAR_4, VAR_18->i_ino + 1);
    if (VAR_13 < FUNC_1(VAR_4, VAR_18->i_ino))
     VAR_14 = 1;
   }


   FUNC_8();

   for (VAR_17 = 0; VAR_17 < VAR_15; VAR_17++) {
    if (!VAR_16[VAR_17])
     continue;
    VAR_8 = FUNC_11(VAR_16[VAR_17], VAR_7, VAR_5);
    if (VAR_8 && VAR_9 != VAR_0)
     VAR_9 = VAR_8;
   }

   *VAR_6 -= VAR_3;

  } while (VAR_15 && !VAR_14 && *VAR_6 > 0);

  if (VAR_11 && !VAR_14)
   VAR_7->pag_ici_reclaim_cursor = VAR_13;
  else
   VAR_7->pag_ici_reclaim_cursor = 0;
  FUNC_5(&VAR_7->pag_ici_reclaim_lock);
  FUNC_10(VAR_7);
 }
 if (VAR_11 && VAR_12 && *VAR_6 > 0) {
  VAR_11 = 0;
  goto restart;
 }
 return FUNC_0(VAR_9);
}
