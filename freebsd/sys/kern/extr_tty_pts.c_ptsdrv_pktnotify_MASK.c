
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int dummy; } ;
struct pts_softc {int pts_pkt; } ;






 int FUNC_0 (struct tty*) ;
 struct pts_softc* FUNC_1 (struct tty*) ;

__attribute__((used)) static void
FUNC_2(struct tty *VAR_0, char VAR_1)
{
 struct pts_softc *VAR_2 = FUNC_1(VAR_0);





 switch (VAR_1) {
 case 128:
  VAR_2->pts_pkt &= ~129;
  break;
 case 129:
  VAR_2->pts_pkt &= ~128;
  break;
 case 130:
  VAR_2->pts_pkt &= ~131;
  break;
 case 131:
  VAR_2->pts_pkt &= ~130;
  break;
 }

 VAR_2->pts_pkt |= VAR_1;
 FUNC_0(VAR_0);
}
