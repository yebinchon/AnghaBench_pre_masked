
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct fxp_softc {int dummy; } ;


 int FUNC_0 (struct fxp_softc*,int ,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2(struct fxp_softc *VAR_4, int VAR_5, int VAR_6)
{
 uint16_t VAR_7;
 int VAR_8;




 for (VAR_8 = 1 << (VAR_6 - 1); VAR_8; VAR_8 >>= 1) {
  if (VAR_5 & VAR_8)
   VAR_7 = VAR_1 | VAR_2;
  else
   VAR_7 = VAR_1;
  FUNC_0(VAR_4, VAR_0, VAR_7);
  FUNC_1(1);
  FUNC_0(VAR_4, VAR_0, VAR_7 | VAR_3);
  FUNC_1(1);
  FUNC_0(VAR_4, VAR_0, VAR_7);
  FUNC_1(1);
 }
}
