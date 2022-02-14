
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;
struct amdsmb_softc {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct amdsmb_softc*) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;






 scalar_t__ VAR_8 ;

 int FUNC_3 (struct amdsmb_softc*,int ,scalar_t__*) ;
 int FUNC_4 (char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_5(struct amdsmb_softc *VAR_9)
{
 u_char VAR_10, VAR_11;
 int VAR_12, VAR_13;

 FUNC_1(VAR_9);
 FUNC_3(VAR_9, VAR_6, &VAR_11);
 if (VAR_11 != 0)
 {
  VAR_13 = 10000;
  do {
   FUNC_2(500);
   FUNC_3(VAR_9, VAR_6, &VAR_11);
  } while (VAR_11 != 0 && VAR_13--);
  if (VAR_13 == 0)
   return (VAR_5);
 }

 FUNC_3(VAR_9, VAR_7, &VAR_10);
 VAR_10 &= VAR_8;
 FUNC_0(FUNC_4("amdsmb: STS=0x%x\n", VAR_10));

 switch (VAR_10) {
 case 129:
  VAR_12 = VAR_3;
  break;
 case 132:
  VAR_12 = VAR_2;
  break;
 case 134:
  VAR_12 = VAR_1;
  break;
 case 128:
  VAR_12 = VAR_5;
  break;
 case 131:
 case 133:
 case 130:
  VAR_12 = VAR_4;
  break;
 default:
  VAR_12 = VAR_0;
  break;
 }

 return (VAR_12);
}
