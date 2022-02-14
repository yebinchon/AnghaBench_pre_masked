
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ahc_softc {int dummy; } ;
struct TYPE_2__ {char* errmesg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ahc_softc*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct ahc_softc*) ;
 TYPE_1__* VAR_9 ;
 int FUNC_2 (struct ahc_softc*,int ) ;
 char* FUNC_3 (struct ahc_softc*) ;
 int FUNC_4 (struct ahc_softc*) ;
 int VAR_10 ;
 int FUNC_5 (char*,char*,char*,int) ;

void
FUNC_6(struct ahc_softc *VAR_11)
{




 int VAR_12;
 int VAR_13;

 VAR_13 = FUNC_2(VAR_11, VAR_4);
 for (VAR_12 = 0; VAR_13 != 1 && VAR_12 < VAR_10; VAR_12++)
  VAR_13 >>= 1;
 FUNC_5("%s: brkadrint, %s at seqaddr = 0x%x\n",
        FUNC_3(VAR_11), VAR_9[VAR_12].errmesg,
        FUNC_2(VAR_11, VAR_7) |
        (FUNC_2(VAR_11, VAR_8) << 8));

 FUNC_1(VAR_11);


 FUNC_0(VAR_11, VAR_3, VAR_0,
         VAR_1, VAR_6, VAR_5,
         VAR_2);


 FUNC_4(VAR_11);
}
