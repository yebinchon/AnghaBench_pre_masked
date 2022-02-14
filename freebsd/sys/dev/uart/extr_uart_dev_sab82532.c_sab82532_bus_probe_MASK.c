
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int chan; } ;
struct uart_softc {int sc_rxfifosz; int sc_txfifosz; int sc_hwoflow; int sc_dev; int sc_hwiflow; TYPE_1__ sc_bas; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,int,char*,char const*,char) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_4(struct uart_softc *VAR_2)
{
 char VAR_3[80];
 const char *VAR_4;
 int VAR_5;
 char VAR_6;

 VAR_5 = FUNC_1(&VAR_2->sc_bas);
 if (VAR_5)
  return (VAR_5);

 VAR_2->sc_rxfifosz = 32;
 VAR_2->sc_txfifosz = 32;

 VAR_6 = VAR_2->sc_bas.chan - 1 + 'A';

 switch (FUNC_3(&VAR_2->sc_bas, VAR_0) & VAR_1) {
 case 130:
  VAR_4 = "v1";
  break;
 case 129:
  VAR_4 = "v2";
  break;
 case 128:
  VAR_4 = "v3.2";
  VAR_2->sc_hwiflow = 0;
  VAR_2->sc_hwoflow = 1;
  break;
 default:
  VAR_4 = "v4?";
  break;
 }

 FUNC_2(VAR_3, sizeof(VAR_3), "SAB 82532 %s, channel %c", VAR_4, VAR_6);
 FUNC_0(VAR_2->sc_dev, VAR_3);
 return (0);
}
