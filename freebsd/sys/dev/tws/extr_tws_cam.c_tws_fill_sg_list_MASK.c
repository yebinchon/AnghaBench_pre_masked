
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int16_t ;
struct tws_softc {scalar_t__ is64bit; } ;
struct tws_sg_desc64 {int length; int address; scalar_t__ reserved; scalar_t__ flag; } ;
struct tws_sg_desc32 {scalar_t__ flag; int length; int address; } ;
typedef int bus_dma_segment_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tws_softc*,char*,int,int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_1(struct tws_softc *VAR_3, void *VAR_4, void *VAR_5,
                          u_int16_t VAR_6)
{
    int VAR_7;

    if ( VAR_3->is64bit ) {
        struct tws_sg_desc64 *VAR_8 = (struct tws_sg_desc64 *)VAR_4;

        if ( !VAR_2 ) {
            struct tws_sg_desc64 *VAR_9 = (struct tws_sg_desc64 *)VAR_5;
            if ( VAR_6 > VAR_1 )
                FUNC_0(VAR_3, "64bit sg overflow", VAR_6, 0);
            for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
                VAR_9[VAR_7].address = VAR_8->address;
                VAR_9[VAR_7].length = VAR_8->length;
                VAR_9[VAR_7].flag = 0;
                VAR_9[VAR_7].reserved = 0;
                VAR_8 = (struct tws_sg_desc64 *) (((u_int8_t *)VAR_8) +
                                               sizeof(bus_dma_segment_t));
            }
        } else {
            struct tws_sg_desc32 *VAR_10 = (struct tws_sg_desc32 *)VAR_5;
            if ( VAR_6 > VAR_0 )
                FUNC_0(VAR_3, "32bit sg overflow", VAR_6, 0);
            for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
                VAR_10[VAR_7].address = VAR_8->address;
                VAR_10[VAR_7].length = VAR_8->length;
                VAR_10[VAR_7].flag = 0;
                VAR_8 = (struct tws_sg_desc64 *) (((u_int8_t *)VAR_8) +
                                               sizeof(bus_dma_segment_t));
            }
        }
    } else {
        struct tws_sg_desc32 *VAR_11 = (struct tws_sg_desc32 *)VAR_4;
        struct tws_sg_desc32 *VAR_12 = (struct tws_sg_desc32 *)VAR_5;

        if ( VAR_6 > VAR_0 )
            FUNC_0(VAR_3, "32bit sg overflow", VAR_6, 0);


        for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
            VAR_12[VAR_7].address = VAR_11[VAR_7].address;
            VAR_12[VAR_7].length = VAR_11[VAR_7].length;
            VAR_12[VAR_7].flag = 0;
        }
    }
}
