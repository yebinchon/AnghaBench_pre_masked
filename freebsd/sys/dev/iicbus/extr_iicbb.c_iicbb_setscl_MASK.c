
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iicbb_softc {int scl_low_timeout; scalar_t__ udelay; } ;
typedef scalar_t__ sbintime_t ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct iicbb_softc* FUNC_5 (int ) ;
 int FUNC_6 (char*,int ,int ,int ) ;
 scalar_t__ FUNC_7 () ;

__attribute__((used)) static void
FUNC_8(device_t VAR_2, int VAR_3)
{
 struct iicbb_softc *VAR_4 = FUNC_5(VAR_2);
 sbintime_t VAR_5, VAR_6;
 int VAR_7;

 FUNC_3(VAR_2, VAR_3);
 FUNC_1(VAR_4->udelay);


 if (!VAR_3)
  return;


 VAR_6 = FUNC_7() + VAR_4->scl_low_timeout * VAR_1;
 VAR_7 = FUNC_4(VAR_4->scl_low_timeout, 1000);
 while (VAR_7 > 0) {
  if (FUNC_2(VAR_2))
   return;
  FUNC_3(VAR_2, 1);
  FUNC_1(VAR_4->udelay);
  VAR_7 -= VAR_4->udelay;
 }

 while (!FUNC_2(VAR_2)) {
  VAR_5 = FUNC_7();
  if (VAR_5 >= VAR_6)
   break;
  FUNC_6("iicbb-scl-low", VAR_0, FUNC_0(8), 0);
 }

}
