
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rme32 {int wcreg; int playback_frlog; int capture_frlog; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct rme32 * VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_2 == 2) {
  VAR_4 = 1;
 } else {

  VAR_4 = 3;
 }
 if (VAR_3) {
  VAR_4 += (VAR_1->wcreg & VAR_0) ? 2 : 1;
  VAR_1->playback_frlog = VAR_4;
 } else {
  VAR_4 += (VAR_1->wcreg & VAR_0) ? 2 : 1;
  VAR_1->capture_frlog = VAR_4;
 }
}
