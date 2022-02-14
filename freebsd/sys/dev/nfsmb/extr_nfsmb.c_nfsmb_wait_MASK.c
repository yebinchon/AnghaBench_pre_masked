
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct nfsmb_softc {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nfsmb_softc*) ;
 int FUNC_3 (struct nfsmb_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;






 int VAR_8 ;

 int FUNC_4 (char*,int) ;

__attribute__((used)) static int
FUNC_5(struct nfsmb_softc *VAR_9)
{
 u_char VAR_10;
 int VAR_11, VAR_12;

 FUNC_2(VAR_9);
 if (FUNC_3(VAR_9, VAR_6) != 0)
 {
  VAR_12 = 10000;
  do {
   FUNC_0(500);
  } while (FUNC_3(VAR_9, VAR_6) != 0 && VAR_12--);
  if (VAR_12 == 0)
   return (VAR_5);
 }

 VAR_10 = FUNC_3(VAR_9, VAR_7) & VAR_8;
 FUNC_1(FUNC_4("nfsmb: STS=0x%x\n", VAR_10));

 switch (VAR_10) {
 case 129:
  VAR_11 = VAR_3;
  break;
 case 132:
  VAR_11 = VAR_2;
  break;
 case 134:
  VAR_11 = VAR_1;
  break;
 case 128:
  VAR_11 = VAR_5;
  break;
 case 131:
 case 133:
 case 130:
  VAR_11 = VAR_4;
  break;
 default:
  VAR_11 = VAR_0;
  break;
 }

 return (VAR_11);
}
