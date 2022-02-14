
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_softc {int mii_mpd_model; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int FUNC_0 (struct mii_softc*,int ,int) ;
 int FUNC_1 (struct mii_softc*) ;

__attribute__((used)) static void
FUNC_2(struct mii_softc *VAR_7)
{

 FUNC_1(VAR_7);

 switch (VAR_7->mii_mpd_model) {
  case 130:
  case 128:
   FUNC_0(VAR_7, VAR_6, VAR_3);
   break;
  case 129:
   FUNC_0(VAR_7, VAR_6,
       VAR_4|VAR_3);
   break;
  default:

   break;
 }




 FUNC_0(VAR_7, VAR_5, VAR_1|VAR_2|VAR_0);
}
