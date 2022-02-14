
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct sec_softc {int sc_version; int sc_dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct sec_softc*,int ) ;
 int VAR_9 ;
 int FUNC_3 (struct sec_softc*,int ,int) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(struct sec_softc *VAR_10, int VAR_11, int VAR_12)
{
 int VAR_13 = VAR_9;
 uint64_t VAR_14 = (VAR_12) ? VAR_7 : VAR_5;
 uint64_t VAR_15;


 VAR_15 = FUNC_2(VAR_10, FUNC_1(VAR_11));
 FUNC_3(VAR_10, FUNC_1(VAR_11), VAR_15 | VAR_14);

 while (FUNC_2(VAR_10, FUNC_1(VAR_11)) & VAR_14) {
  FUNC_0(1000);
  VAR_13 -= 1000;

  if (VAR_13 < 0) {
   FUNC_4(VAR_10->sc_dev, "timeout while waiting for "
       "channel reset!\n");
   return (VAR_0);
  }
 }

 if (VAR_12) {
  VAR_15 = VAR_3 | VAR_6 | VAR_2;

  switch(VAR_10->sc_version) {
  case 2:
   VAR_15 |= VAR_4;
   break;
  case 3:
   VAR_15 |= VAR_1 | VAR_8;
   break;
  }

  FUNC_3(VAR_10, FUNC_1(VAR_11), VAR_15);
 }

 return (0);
}
