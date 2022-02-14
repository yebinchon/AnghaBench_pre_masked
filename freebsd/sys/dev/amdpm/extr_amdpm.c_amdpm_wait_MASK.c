
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct amdpm_softc {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct amdpm_softc*) ;
 int FUNC_2 (struct amdpm_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct amdpm_softc*) ;
 int FUNC_5 (char*,int,int) ;

__attribute__((used)) static int
FUNC_6(struct amdpm_softc *VAR_10)
{
 int VAR_11 = 10000;
 u_short VAR_12 = 0;
 int VAR_13;

 FUNC_1(VAR_10);

 while(VAR_11--) {
  FUNC_3(10);
  VAR_12 = FUNC_2(VAR_10, VAR_0);
  if (!(VAR_12 & VAR_3))
   break;
 }

 FUNC_0(FUNC_5("amdpm: STS=0x%x (count=%d)\n", VAR_12, VAR_11));

 VAR_13 = VAR_8;

 if (!VAR_11)
  VAR_13 |= VAR_9;

 if (VAR_12 & VAR_1)
  VAR_13 |= VAR_5;

 if (VAR_12 & VAR_2)
  VAR_13 |= VAR_7;

 if (VAR_12 & VAR_4)
  VAR_13 |= VAR_6;

 if (VAR_13 != VAR_8)
  FUNC_4(VAR_10);

 return (VAR_13);
}
