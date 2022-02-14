
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct tws_softc {int tws_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int *,int ,int *,int *) ;
 int FUNC_1 (struct tws_softc*,int ,int ,int,int *) ;

void
FUNC_2(struct tws_softc *VAR_6)
{

    uint8_t VAR_7[16], VAR_8[16], VAR_9[16], VAR_10=0;
    uint32_t VAR_11[4];

    VAR_11[0] = FUNC_1(VAR_6, VAR_2,
                             VAR_0, 1, &VAR_10);
    VAR_11[1] = FUNC_1(VAR_6, VAR_5,
                             VAR_4, 16, VAR_7);
    VAR_11[2] = FUNC_1(VAR_6, VAR_5,
                             VAR_3, 16, VAR_8);
    VAR_11[3] = FUNC_1(VAR_6, VAR_5,
                             VAR_1, 16, VAR_9);

    if ( !VAR_11[0] && !VAR_11[1] && !VAR_11[2] && !VAR_11[3] ) {
        FUNC_0( VAR_6->tws_dev,
        "Controller details: Model %.16s, %d Phys, Firmware %.16s, BIOS %.16s\n",
         VAR_9, VAR_10, VAR_7, VAR_8);
    }

}
