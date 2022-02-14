
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct seq_softc {int unit; int timerbase; int tempo; int music; int reset_cv; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (struct seq_softc*,int*,int) ;
 int FUNC_4 (struct seq_softc*) ;
 int FUNC_5 (struct seq_softc*,int,int) ;
 int FUNC_6 (struct seq_softc*) ;
 int FUNC_7 (struct seq_softc*) ;
 int FUNC_8 (struct seq_softc*,int,int) ;

__attribute__((used)) static int
FUNC_9(struct seq_softc *VAR_1, u_char *VAR_2)
{
 int VAR_3;
 int VAR_4;

 VAR_4 = 0;
 VAR_3 = VAR_2[4] + (VAR_2[5] << 8) +
     (VAR_2[6] << 16) + (VAR_2[7] << 24);

 FUNC_0(5, FUNC_2("seq_timing: unit %d, cmd %d, param %d.\n",
     VAR_1->unit, VAR_2[1], VAR_3));
 switch (VAR_2[1]) {
 case 128:
  FUNC_8(VAR_1, VAR_3, 0);
  break;
 case 129:
  FUNC_8(VAR_1, VAR_3, 1);
  break;
 case 133:
  FUNC_6(VAR_1);
  FUNC_1(&VAR_1->reset_cv);
  break;
 case 132:
  FUNC_7(VAR_1);




  FUNC_1(&VAR_1->reset_cv);
  break;
 case 135:
  FUNC_4(VAR_1);
  FUNC_1(&VAR_1->reset_cv);
  break;
 case 131:
  if (VAR_3 < 8)
   VAR_3 = 8;
  if (VAR_3 > 360)
   VAR_3 = 360;
  FUNC_0(4, FUNC_2("Timer set tempo %d\n", VAR_3));
  FUNC_5(VAR_1, VAR_3, VAR_1->timerbase);
  break;
 case 130:
  if (VAR_3 < 1)
   VAR_3 = 1;
  if (VAR_3 > 1000)
   VAR_3 = 1000;
  FUNC_0(4, FUNC_2("Timer set timerbase %d\n", VAR_3));
  FUNC_5(VAR_1, VAR_1->tempo, VAR_3);
  break;
 case 134:
  FUNC_3(VAR_1, VAR_2, 8);

  break;
 default:
  FUNC_0(2, FUNC_2("seq_timing event type %d not handled.\n",
      VAR_2[1]));
  VAR_4 = 1;
  break;
 }
 return VAR_4;
}
