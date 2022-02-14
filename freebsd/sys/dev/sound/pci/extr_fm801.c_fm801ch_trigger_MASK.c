
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct fm801_info {int play_start; int play_nextblk; int play_blksize; int play_fmt; int play_shift; int rec_start; int rec_nextblk; int rec_blksize; int rec_fmt; int rec_shift; scalar_t__ rec_flip; scalar_t__ play_flip; } ;
struct fm801_chinfo {scalar_t__ dir; int buffer; struct fm801_info* parent; } ;
typedef int kobj_t ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_1 (int) ;
 int VAR_18 ;
 int FUNC_2 (struct fm801_info*,int ,int) ;
 int FUNC_3 (struct fm801_info*,int ,int,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(kobj_t VAR_19, void *VAR_20, int VAR_21)
{
 struct fm801_chinfo *VAR_22 = VAR_20;
 struct fm801_info *VAR_23 = VAR_22->parent;
 u_int32_t VAR_24 = FUNC_4(VAR_22->buffer);
 u_int32_t VAR_25;

 FUNC_0("fm801ch_trigger go %d , ", VAR_21);

 if (!FUNC_1(VAR_21))
  return 0;

 if (VAR_22->dir == VAR_16) {
  if (VAR_21 == VAR_18) {

   VAR_23->play_start = VAR_24;
   VAR_23->play_nextblk = VAR_23->play_start + VAR_23->play_blksize;
   VAR_23->play_flip = 0;
   FUNC_3(VAR_23, VAR_5, VAR_23->play_blksize - 1, 2);
   FUNC_3(VAR_23, VAR_3,VAR_23->play_start,4);
   FUNC_3(VAR_23, VAR_4,VAR_23->play_nextblk,4);
   FUNC_3(VAR_23, VAR_2,
     VAR_6 | VAR_7 | VAR_23->play_fmt | VAR_23->play_shift,
     2 );
   } else {
   VAR_23->play_flip = 0;
   VAR_25 = FUNC_2(VAR_23, VAR_2,2);
   FUNC_3(VAR_23, VAR_2,
    (VAR_25 & ~(VAR_7 | VAR_6)) |
    VAR_0 | VAR_1, 2 );
  }
 } else if(VAR_22->dir == VAR_17) {
  if (VAR_21 == VAR_18) {
   VAR_23->rec_start = VAR_24;
   VAR_23->rec_nextblk = VAR_23->rec_start + VAR_23->rec_blksize;
   VAR_23->rec_flip = 0;
   FUNC_3(VAR_23, VAR_13, VAR_23->rec_blksize - 1, 2);
   FUNC_3(VAR_23, VAR_11,VAR_23->rec_start,4);
   FUNC_3(VAR_23, VAR_12,VAR_23->rec_nextblk,4);
   FUNC_3(VAR_23, VAR_10,
     VAR_14 | VAR_15 | VAR_23->rec_fmt | VAR_23->rec_shift,
     2 );
   } else {
   VAR_23->rec_flip = 0;
   VAR_25 = FUNC_2(VAR_23, VAR_10,2);
   FUNC_3(VAR_23, VAR_10,
    (VAR_25 & ~(VAR_15 | VAR_14)) |
    VAR_8 | VAR_9, 2);
  }
 }

 return 0;
}
