
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ahc_softc {int features; int our_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ahc_softc*,int ) ;
 int FUNC_1 (struct ahc_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(struct ahc_softc *VAR_6, u_int VAR_7)
{
 u_int VAR_8;
 u_int VAR_9;

 if ((VAR_6->features & VAR_0) == 0)
  FUNC_3("ahc_update_scsiid called on non-multitid unit\n");







 if ((VAR_6->features & VAR_1) != 0)
  VAR_9 = FUNC_0(VAR_6, VAR_4);
 else
  VAR_9 = FUNC_0(VAR_6, VAR_3);
 VAR_8 = 0x1 << (VAR_9 & VAR_2);
 if ((VAR_7 & VAR_8) == 0) {
  u_int VAR_10;


  VAR_10 = FUNC_2(VAR_7);
  if (VAR_10 == 0)
   VAR_10 = VAR_6->our_id;
  else
   VAR_10--;
  VAR_9 &= VAR_5;
  VAR_9 |= VAR_10;
 }
 if ((VAR_6->features & VAR_1) != 0)
  FUNC_1(VAR_6, VAR_4, VAR_9);
 else
  FUNC_1(VAR_6, VAR_3, VAR_9);
}
