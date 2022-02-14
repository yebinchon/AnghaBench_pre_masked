
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rme96 {int wcreg; int playback_frlog; int capture_frlog; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct rme96 *VAR_2,
        int VAR_3,
        int VAR_4)
{
 int VAR_5;

 if (VAR_3 == 2) {
  VAR_5 = 1;
 } else {

  VAR_5 = 3;
 }
 if (VAR_4) {
  VAR_5 += (VAR_2->wcreg & VAR_0) ? 2 : 1;
  VAR_2->playback_frlog = VAR_5;
 } else {
  VAR_5 += (VAR_2->wcreg & VAR_1) ? 2 : 1;
  VAR_2->capture_frlog = VAR_5;
 }
}
