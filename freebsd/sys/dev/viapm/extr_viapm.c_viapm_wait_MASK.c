
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct viapm_softc {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct viapm_softc*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct viapm_softc*) ;
 int FUNC_6 (struct viapm_softc*) ;

__attribute__((used)) static int
FUNC_7(struct viapm_softc *VAR_11)
{
 int VAR_12 = 10000;
 u_char VAR_13 = 0;
 int VAR_14;

 FUNC_3(VAR_11);


 while(VAR_12--) {
  FUNC_0(10);
  VAR_13 = FUNC_2(VAR_0);


  if (!(VAR_13 & VAR_1) && (VAR_13 & VAR_5))
   break;
 }

 FUNC_1(FUNC_4("viapm: SMBHST=0x%x\n", VAR_13));

 VAR_14 = VAR_9;

 if (!VAR_12)
  VAR_14 |= VAR_10;

 if (VAR_13 & VAR_4)
  VAR_14 |= VAR_6;

 if (VAR_13 & VAR_2)
  VAR_14 |= VAR_8;

 if (VAR_13 & VAR_3)
  VAR_14 |= VAR_7;

 if (VAR_14 != VAR_9)
  FUNC_5(VAR_11);

 FUNC_6(VAR_11);

 return (VAR_14);
}
