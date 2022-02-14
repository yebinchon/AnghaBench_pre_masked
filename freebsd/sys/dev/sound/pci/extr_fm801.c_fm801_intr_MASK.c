
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_4__ {int channel; } ;
struct TYPE_3__ {int channel; } ;
struct fm801_info {int play_flip; int play_start; int play_nextblk; int rec_flip; int rec_start; int rec_nextblk; TYPE_2__ rch; TYPE_1__ pch; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct fm801_info*,int ,int) ;
 int FUNC_3 (struct fm801_info*,int ,int,int) ;

__attribute__((used)) static void
FUNC_4(void *VAR_9)
{
 struct fm801_info *VAR_10 = (struct fm801_info *)VAR_9;
 u_int32_t VAR_11 = FUNC_2(VAR_10, VAR_0, 2);

 FUNC_0("\nfm801_intr intsrc 0x%x ", VAR_11);

 if(VAR_11 & VAR_2) {
  VAR_10->play_flip++;
  if(VAR_10->play_flip & 1) {
   FUNC_3(VAR_10, VAR_5, VAR_10->play_start,4);
  } else
   FUNC_3(VAR_10, VAR_6, VAR_10->play_nextblk,4);
  FUNC_1(VAR_10->pch.channel);
 }

 if(VAR_11 & VAR_3) {
  VAR_10->rec_flip++;
  if(VAR_10->rec_flip & 1) {
   FUNC_3(VAR_10, VAR_7, VAR_10->rec_start,4);
  } else
   FUNC_3(VAR_10, VAR_8, VAR_10->rec_nextblk,4);
  FUNC_1(VAR_10->rch.channel);
 }

 if ( VAR_11 & VAR_1 ) {

  FUNC_3(VAR_10, VAR_0, VAR_11 & VAR_1,2);
 }

 if ( VAR_11 & VAR_4 ) {

  FUNC_3(VAR_10, VAR_0, VAR_11 & VAR_4,2);
 }

 FUNC_0("fm801_intr clear\n\n");
 FUNC_3(VAR_10, VAR_0, VAR_11 & (VAR_2 | VAR_3), 2);
}
