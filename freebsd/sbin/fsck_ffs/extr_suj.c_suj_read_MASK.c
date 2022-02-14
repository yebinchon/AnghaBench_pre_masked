
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ ufs2_daddr_t ;
struct jsegrec {scalar_t__ jsr_time; scalar_t__ jsr_cnt; int jsr_blocks; int jsr_seq; scalar_t__ jsr_oldest; } ;
struct suj_seg {void* ss_blk; struct jsegrec ss_rec; } ;
typedef int intmax_t ;
typedef int block ;
struct TYPE_2__ {scalar_t__ fs_mtime; int fs_bsize; } ;


 int FUNC_0 (int *,struct suj_seg*,int ) ;
 int VAR_0 ;
 int FUNC_1 (void*,void*,int) ;
 int FUNC_2 (int *,scalar_t__,int **,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,int ) ;
 void* FUNC_4 (int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int ,int,int*) ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (char*,int,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_8(void)
{
 uint8_t VAR_8[1 * 1024 * 1024];
 struct suj_seg *VAR_9;
 struct jsegrec *VAR_10;
 struct jsegrec *VAR_11;
 ufs2_daddr_t VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;
restart:
 for (;;) {
  VAR_16 = sizeof(VAR_8);
  VAR_12 = FUNC_6(VAR_7, VAR_16, &VAR_13);
  if (VAR_12 == 0)
   return;
  VAR_16 = VAR_13;



  if (FUNC_2(&VAR_2, VAR_12, &VAR_8, VAR_16) == -1) {
   FUNC_3("Error reading journal block %jd\n",
       (intmax_t)VAR_12);
  }
  for (VAR_11 = (void *)VAR_8; VAR_16; VAR_16 -= VAR_15,
      VAR_11 = (struct jsegrec *)((uintptr_t)VAR_11 + VAR_15)) {
   VAR_15 = VAR_5;
   if (VAR_11->jsr_time != VAR_3->fs_mtime) {
    if (VAR_1)
     FUNC_7("Rec time %jd != fs mtime %jd\n",
         VAR_11->jsr_time, VAR_3->fs_mtime);
    FUNC_5(VAR_7, VAR_15);
    continue;
   }
   if (VAR_11->jsr_cnt == 0) {
    if (VAR_1)
     FUNC_7("Found illegal count %d\n",
         VAR_11->jsr_cnt);
    FUNC_5(VAR_7, VAR_15);
    continue;
   }
   VAR_14 = VAR_11->jsr_blocks;
   VAR_15 = VAR_14 * VAR_5;
   if (VAR_15 > VAR_16) {




    if (VAR_16 < VAR_3->fs_bsize &&
        VAR_16 != VAR_13 &&
        VAR_15 <= VAR_3->fs_bsize)
     goto restart;
    if (VAR_1)
     FUNC_7("Found invalid segsize %d > %d\n",
         VAR_15, VAR_16);
    VAR_15 = VAR_5;
    FUNC_5(VAR_7, VAR_15);
    continue;
   }



   for (VAR_17 = 1; VAR_17 < VAR_14; VAR_17++) {
    VAR_10 = (void *)((uintptr_t)VAR_11) + VAR_17 *
        VAR_5;
    if (VAR_10->jsr_seq == VAR_11->jsr_seq &&
        VAR_10->jsr_time == VAR_11->jsr_time)
     continue;
    if (VAR_1)
     FUNC_7("Incomplete record %jd (%d)\n",
         VAR_11->jsr_seq, VAR_17);
    VAR_15 = VAR_17 * VAR_5;
    FUNC_5(VAR_7, VAR_15);
    goto restart;
   }
   VAR_9 = FUNC_4(sizeof(*VAR_9));
   VAR_9->ss_blk = FUNC_4(VAR_15);
   VAR_9->ss_rec = *VAR_11;
   FUNC_1((void *)VAR_11, VAR_9->ss_blk, VAR_15);
   if (VAR_11->jsr_oldest > VAR_4)
    VAR_4 = VAR_11->jsr_oldest;
   FUNC_0(&VAR_0, VAR_9, VAR_6);
   FUNC_5(VAR_7, VAR_15);
  }
 }
}
