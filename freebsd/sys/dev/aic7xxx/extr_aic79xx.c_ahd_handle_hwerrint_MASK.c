
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ahd_softc {int dummy; } ;
struct TYPE_2__ {int errno; char* errmesg; } ;


 int FUNC_0 (struct ahd_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct ahd_softc*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct ahd_softc*) ;
 int FUNC_3 (struct ahd_softc*) ;
 TYPE_1__* VAR_7 ;
 int FUNC_4 (struct ahd_softc*,int ) ;
 char* FUNC_5 (struct ahd_softc*) ;
 int VAR_8 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,char*) ;

void
FUNC_8(struct ahd_softc *VAR_9)
{




 int VAR_10;
 int VAR_11;

 VAR_11 = FUNC_4(VAR_9, VAR_4);
 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
  if ((VAR_11 & VAR_7[VAR_10].errno) != 0) {
   FUNC_7("%s: hwerrint, %s\n",
          FUNC_5(VAR_9), VAR_7[VAR_10].errmesg);
   FUNC_0(VAR_9);
  }
 }

 FUNC_2(VAR_9);
 FUNC_6("BRKADRINT");


 FUNC_1(VAR_9, VAR_3, VAR_0,
         VAR_1, VAR_6, VAR_5,
         VAR_2);


 FUNC_3(VAR_9);
}
