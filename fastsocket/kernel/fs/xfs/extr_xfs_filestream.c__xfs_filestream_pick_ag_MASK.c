
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int sb_agblocks; scalar_t__ sb_agcount; } ;
struct TYPE_13__ {TYPE_1__ m_sb; } ;
typedef TYPE_2__ xfs_mount_t ;
typedef int xfs_extlen_t ;
typedef scalar_t__ xfs_agnumber_t ;
struct xfs_perag {int pagf_freeblks; int pagf_fstrms; int pagf_metadata; int pagf_init; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,scalar_t__,int) ;
 int FUNC_1 (TYPE_2__*,scalar_t__,scalar_t__,int,int,int,int) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,struct xfs_perag*) ;
 int FUNC_5 (TYPE_2__*,int *,scalar_t__,int) ;
 int FUNC_6 (TYPE_2__*,scalar_t__) ;
 int FUNC_7 (TYPE_2__*,scalar_t__) ;
 struct xfs_perag* FUNC_8 (TYPE_2__*,scalar_t__) ;
 int FUNC_9 (struct xfs_perag*) ;

__attribute__((used)) static int
FUNC_10(
 xfs_mount_t *VAR_4,
 xfs_agnumber_t VAR_5,
 xfs_agnumber_t *VAR_6,
 int VAR_7,
 xfs_extlen_t VAR_8)
{
 int VAR_9, VAR_10;
 int VAR_11, VAR_12, VAR_13;
 xfs_extlen_t VAR_14, VAR_15, VAR_16, VAR_17 = 0;
 xfs_agnumber_t VAR_18, VAR_19 = VAR_0;
 struct xfs_perag *VAR_20;


 VAR_16 = VAR_4->m_sb.sb_agblocks / 50;

 VAR_18 = VAR_5;
 *VAR_6 = VAR_0;


 VAR_12 = VAR_1;

 for (VAR_13 = 0; 1; VAR_13++) {
  VAR_20 = FUNC_8(VAR_4, VAR_18);
  FUNC_2(VAR_4, VAR_18, FUNC_3(&VAR_20->pagf_fstrms));

  if (!VAR_20->pagf_init) {
   VAR_11 = FUNC_5(VAR_4, ((void*)0), VAR_18, VAR_12);
   if (VAR_11 && !VAR_12) {
    FUNC_9(VAR_20);
    return VAR_11;
   }
  }


  if (!VAR_20->pagf_init)
   goto next_ag;


  if (VAR_20->pagf_freeblks > VAR_17) {
   VAR_17 = VAR_20->pagf_freeblks;
   VAR_10 = FUNC_3(&VAR_20->pagf_fstrms);
   VAR_19 = VAR_18;
  }







  if (FUNC_6(VAR_4, VAR_18) > 1) {
   FUNC_7(VAR_4, VAR_18);
   goto next_ag;
  }

  VAR_14 = FUNC_4(VAR_4, VAR_20);
  if (((VAR_8 && VAR_14 >= VAR_8) ||
       (!VAR_8 && VAR_20->pagf_freeblks >= VAR_16)) &&
      (!VAR_20->pagf_metadata || !(VAR_7 & VAR_3) ||
       (VAR_7 & VAR_2))) {


   VAR_15 = VAR_20->pagf_freeblks;
   VAR_9 = FUNC_3(&VAR_20->pagf_fstrms);
   FUNC_9(VAR_20);
   *VAR_6 = VAR_18;
   break;
  }


  FUNC_7(VAR_4, VAR_18);
next_ag:
  FUNC_9(VAR_20);

  if (++VAR_18 >= VAR_4->m_sb.sb_agcount)
   VAR_18 = 0;


  if (VAR_18 != VAR_5)
   continue;


  if (VAR_12 != 0) {
   VAR_12 = 0;
   continue;
  }


  if (!(VAR_7 & VAR_2)) {
   VAR_7 |= VAR_2;
   continue;
  }





  if (VAR_19 != VAR_0) {
   FUNC_6(VAR_4, VAR_19);
   FUNC_0(VAR_4, VAR_19, VAR_17);
   VAR_9 = VAR_10;
   VAR_15 = VAR_17;
   *VAR_6 = VAR_19;
   break;
  }


  FUNC_0(VAR_4, VAR_19, VAR_17);
  *VAR_6 = 0;
  return 0;
 }

 FUNC_1(VAR_4, VAR_5, *VAR_6, VAR_9, VAR_15, VAR_13, VAR_7);

 return 0;
}
