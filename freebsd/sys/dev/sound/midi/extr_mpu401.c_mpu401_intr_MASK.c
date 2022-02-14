
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpu401 {int flags; int timer; scalar_t__ si; int mid; } ;
typedef int MIDI_TYPE ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mpu401*) ;
 int FUNC_2 (struct mpu401*) ;
 int FUNC_3 (struct mpu401*,int ) ;
 int FUNC_4 (int *,int,int ,struct mpu401*) ;
 int FUNC_5 (int ,int *,int) ;
 scalar_t__ FUNC_6 (int ,int *,int) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_7(struct mpu401 *VAR_5)
{

 MIDI_TYPE VAR_6[16];
 int VAR_7;
 int VAR_8;
 VAR_7 = 0;
 VAR_8 = FUNC_2(VAR_5);
        ;
 while ((VAR_8 & VAR_0) == 0 && VAR_7 < 16) {
  VAR_6[VAR_7] = FUNC_1(VAR_5);



  VAR_7++;
  VAR_8 = FUNC_2(VAR_5);
 }
 if (VAR_7)
  FUNC_5(VAR_5->mid, VAR_6, VAR_7);
 VAR_7 = 0;
 while (!(VAR_8 & VAR_2) && VAR_7 < 16) {
  if (FUNC_6(VAR_5->mid, VAR_6, 1)) {




   FUNC_3(VAR_5, *VAR_6);
  } else {



   return 0;
  }
  VAR_7++;

  VAR_8 = FUNC_2(VAR_5);
 }

 if ((VAR_5->flags & VAR_3) && (VAR_5->si)) {
  FUNC_4(&VAR_5->timer, 1, VAR_4, VAR_5);
 }
 return (VAR_5->flags & VAR_3) == VAR_3;
}
