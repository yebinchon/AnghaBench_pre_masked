
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_int ;
struct hme_softc {int dummy; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct hme_softc*) ;
 int VAR_0 ;
 int FUNC_2 (struct hme_softc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct hme_softc*) ;
 int VAR_5 ;
 int FUNC_4 (struct hme_softc*,int) ;
 int FUNC_5 (struct hme_softc*) ;
 int FUNC_6 (struct hme_softc*) ;

void
FUNC_7(void *VAR_6)
{
 struct hme_softc *VAR_7 = (struct hme_softc *)VAR_6;
 u_int32_t VAR_8;

 FUNC_1(VAR_7);
 VAR_8 = FUNC_2(VAR_7, VAR_0);
 FUNC_0(VAR_5, "hme_intr: status %#x", (u_int)VAR_8);

 if ((VAR_8 & VAR_1) != 0)
  FUNC_4(VAR_7, VAR_8);

 if ((VAR_8 & VAR_3) != 0)
  FUNC_5(VAR_7);

 if ((VAR_8 & (VAR_4 | VAR_2)) != 0)
  FUNC_6(VAR_7);
 FUNC_3(VAR_7);
}
