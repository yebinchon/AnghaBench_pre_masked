
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct alpm_softc {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct alpm_softc*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct alpm_softc*) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static int
FUNC_5(struct alpm_softc *VAR_10)
{
 int VAR_11 = 10000;
 u_char VAR_12 = 0;
 int VAR_13;


 while (VAR_11--) {
  FUNC_2(10);
  VAR_12 = FUNC_1(VAR_10, VAR_2);
  if (VAR_12 & VAR_8)
   break;
 }

 FUNC_0(FUNC_4("alpm: STS=0x%x\n", VAR_12));

 VAR_13 = VAR_6;

 if (!VAR_11)
  VAR_13 |= VAR_7;

 if (VAR_12 & VAR_9)
  VAR_13 |= VAR_3;

 if (VAR_12 & VAR_0)
  VAR_13 |= VAR_5;

 if (VAR_12 & VAR_1)
  VAR_13 |= VAR_4;

 if (VAR_13 != VAR_6)
  FUNC_3(VAR_10);

 return (VAR_13);
}
