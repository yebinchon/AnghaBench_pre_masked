
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mfi_softc {int dummy; } ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mfi_softc*,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct mfi_softc*,int ,int) ;

int32_t
FUNC_2(struct mfi_softc *VAR_4)
{
 int32_t VAR_5, VAR_6 = 0;

 VAR_5 = FUNC_0(VAR_4, VAR_2);

 if (VAR_5 & 1) {
  FUNC_1(VAR_4, VAR_2, VAR_5);
  FUNC_0(VAR_4, VAR_2);
  if (VAR_5 & VAR_3) {
   VAR_6 |= VAR_0;
  }

  return VAR_6;
 }
 if (!(VAR_5 & VAR_1))
  return 1;

 FUNC_0(VAR_4, VAR_2);
 return 0;
}
