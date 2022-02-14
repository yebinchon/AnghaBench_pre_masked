
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct glxiic_softc {int smb_res; int sclfrq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;




 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct glxiic_softc *VAR_12, uint8_t VAR_13, uint8_t VAR_14)
{
 uint8_t VAR_15;

 VAR_15 = 0;

 switch (VAR_13) {
 case 129:
  VAR_12->sclfrq = VAR_2;
  break;
 case 131:
  VAR_12->sclfrq = VAR_0;
  break;
 case 130:
  VAR_12->sclfrq = VAR_1;
  break;
 case 128:
 default:

  break;
 }


 FUNC_3(VAR_12->smb_res, VAR_10,
     FUNC_0(VAR_12->sclfrq) | VAR_11);

 if (VAR_14 != 0) {

  VAR_15 |= VAR_8 |
   VAR_6;
  FUNC_2(VAR_12->smb_res, VAR_3,
      VAR_4 | FUNC_1(VAR_14));
 } else {
  FUNC_2(VAR_12->smb_res, VAR_3, 0);
 }


 FUNC_2(VAR_12->smb_res, VAR_5,
     VAR_15 | VAR_9 | VAR_7);
}
