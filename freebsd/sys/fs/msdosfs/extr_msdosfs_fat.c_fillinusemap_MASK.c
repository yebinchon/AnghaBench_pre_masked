
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_long ;
struct TYPE_2__ {int bpbMedia; } ;
struct msdosfsmount {size_t pm_maxcluster; unsigned int* pm_inusemap; size_t pm_fatblocksize; size_t pm_fatmask; TYPE_1__ pm_bpb; int pm_devvp; scalar_t__ pm_freeclustercount; } ;
struct buf {scalar_t__ b_data; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct msdosfsmount*) ;
 scalar_t__ FUNC_1 (struct msdosfsmount*) ;
 size_t FUNC_2 (struct msdosfsmount*,size_t) ;
 unsigned int VAR_2 ;
 int FUNC_3 (struct msdosfsmount*) ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_4 (int ,size_t,size_t,int ,struct buf**) ;
 int FUNC_5 (struct buf*) ;
 int FUNC_6 (struct msdosfsmount*,size_t,size_t*,size_t*,int *) ;
 size_t FUNC_7 (scalar_t__) ;
 size_t FUNC_8 (scalar_t__) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (struct msdosfsmount*,size_t) ;

int
FUNC_11(struct msdosfsmount *VAR_5)
{
 struct buf *VAR_6;
 u_long VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13;

 FUNC_3(VAR_5);
 VAR_6 = ((void*)0);





 for (VAR_11 = 0; VAR_11 < (VAR_5->pm_maxcluster + VAR_4) / VAR_4; VAR_11++)
  VAR_5->pm_inusemap[VAR_11] = VAR_2;






 VAR_5->pm_freeclustercount = 0;
 for (VAR_11 = 0; VAR_11 <= VAR_5->pm_maxcluster; VAR_11++) {
  VAR_10 = FUNC_2(VAR_5, VAR_11);
  VAR_8 = VAR_10 % VAR_5->pm_fatblocksize;
  if (VAR_8 == 0) {

   if (VAR_6 != ((void*)0))
    FUNC_5(VAR_6);
   FUNC_6(VAR_5, VAR_10, &VAR_7, &VAR_9, ((void*)0));
   VAR_13 = FUNC_4(VAR_5->pm_devvp, VAR_7, VAR_9, VAR_3, &VAR_6);
   if (VAR_13 != 0)
    return (VAR_13);
  }
  if (FUNC_1(VAR_5))
   VAR_12 = FUNC_7(VAR_6->b_data + VAR_8);
  else
   VAR_12 = FUNC_8(VAR_6->b_data + VAR_8);
  if (FUNC_0(VAR_5) && (VAR_11 & 1))
   VAR_12 >>= 4;
  VAR_12 &= VAR_5->pm_fatmask;





  if (VAR_11 == 0 && VAR_12 != ((VAR_5->pm_fatmask & 0xffffff00) |
      VAR_5->pm_bpb.bpbMedia)) {




   FUNC_5(VAR_6);
   return (VAR_1);
  } else if (VAR_12 == VAR_0)
   FUNC_10(VAR_5, VAR_11);
 }
 if (VAR_6 != ((void*)0))
  FUNC_5(VAR_6);

 for (VAR_11 = VAR_5->pm_maxcluster + 1; VAR_11 < (VAR_5->pm_maxcluster +
     VAR_4) / VAR_4; VAR_11++)
  VAR_5->pm_inusemap[VAR_11 / VAR_4] |= 1U << (VAR_11 % VAR_4);

 return (0);
}
