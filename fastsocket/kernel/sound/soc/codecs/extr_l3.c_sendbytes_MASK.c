
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct l3_pins {int mode_setup; int (* setmode ) (int) ;int mode; int mode_hold; } ;


 int FUNC_0 (struct l3_pins*,int const) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct l3_pins *VAR_0, const u8 *VAR_1,
        int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  if (VAR_3) {
   FUNC_3(VAR_0->mode_hold);
   VAR_0->setmode(0);
   FUNC_3(VAR_0->mode);
  }
  VAR_0->setmode(1);
  FUNC_3(VAR_0->mode_setup);
  FUNC_0(VAR_0, VAR_1[VAR_3]);
 }
}
