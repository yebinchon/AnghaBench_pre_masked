
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct glxiic_softc {int smb_res; } ;


 int FUNC_0 (struct glxiic_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct glxiic_softc*) ;

__attribute__((used)) static void
FUNC_4(struct glxiic_softc *VAR_7)
{
 uint8_t VAR_8, VAR_9;

 FUNC_0(VAR_7);

 VAR_8 = FUNC_3(VAR_7);

 VAR_9 = FUNC_1(VAR_7->smb_res, VAR_0);
 FUNC_2(VAR_7->smb_res, VAR_0,
     VAR_9 | VAR_1);





 if ((VAR_8 & VAR_6) == 0 &&
     (VAR_8 & VAR_4) != 0)
   FUNC_1(VAR_7->smb_res, VAR_2);


 if ((VAR_8 & VAR_5) != 0) {
  FUNC_2(VAR_7->smb_res, VAR_3,
      VAR_5);
 }
}
