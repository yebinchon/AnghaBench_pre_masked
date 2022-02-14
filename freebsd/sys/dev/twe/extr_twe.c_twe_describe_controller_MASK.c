
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
struct twe_softc {int dummy; } ;
struct TYPE_4__ {scalar_t__* data; } ;
typedef TYPE_1__ TWE_Param ;


 int VAR_0 ;
 int FUNC_0 (struct twe_softc*) ;
 int FUNC_1 (struct twe_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_4 (struct twe_softc*,scalar_t__,int ,int,int *) ;
 int FUNC_5 (struct twe_softc*,int ,int ,int*) ;
 int FUNC_6 (struct twe_softc*,scalar_t__,int ,int*) ;
 int FUNC_7 (struct twe_softc*,char*,...) ;

void
FUNC_8(struct twe_softc *VAR_17)
{
    TWE_Param *VAR_18[6];
    u_int8_t VAR_19;
    u_int32_t VAR_20;
    int VAR_21;

    FUNC_2(2);

    FUNC_0(VAR_17);


    FUNC_5(VAR_17, VAR_1, VAR_2, &VAR_19);


    VAR_18[0] = FUNC_4(VAR_17, VAR_9, VAR_12, 16, ((void*)0));
    VAR_18[1] = FUNC_4(VAR_17, VAR_9, VAR_11, 16, ((void*)0));
    if (VAR_18[0] && VAR_18[1])
  FUNC_7(VAR_17, "%d ports, Firmware %.16s, BIOS %.16s\n", VAR_19, VAR_18[0]->data, VAR_18[1]->data);

    if (VAR_16) {
 VAR_18[2] = FUNC_4(VAR_17, VAR_9, VAR_13, 16, ((void*)0));
 VAR_18[3] = FUNC_4(VAR_17, VAR_9, VAR_14, 8, ((void*)0));
 VAR_18[4] = FUNC_4(VAR_17, VAR_9, VAR_10, 8, ((void*)0));
 VAR_18[5] = FUNC_4(VAR_17, VAR_9, VAR_15, 8, ((void*)0));

 if (VAR_18[2] && VAR_18[3] && VAR_18[4] && VAR_18[5])
     FUNC_7(VAR_17, "Monitor %.16s, PCB %.8s, Achip %.8s, Pchip %.8s\n", VAR_18[2]->data, VAR_18[3]->data,
  VAR_18[4]->data, VAR_18[5]->data);
 if (VAR_18[2])
     FUNC_3(VAR_18[2], VAR_0);
 if (VAR_18[3])
     FUNC_3(VAR_18[3], VAR_0);
 if (VAR_18[4])
     FUNC_3(VAR_18[4], VAR_0);
 if (VAR_18[5])
     FUNC_3(VAR_18[5], VAR_0);
    }
    if (VAR_18[0])
 FUNC_3(VAR_18[0], VAR_0);
    if (VAR_18[1])
 FUNC_3(VAR_18[1], VAR_0);


    if (VAR_16) {
 VAR_18[0] = FUNC_4(VAR_17, VAR_7, VAR_8, 16, ((void*)0));
 for (VAR_21 = 0; VAR_21 < VAR_19; VAR_21++) {
     if (VAR_18[0]->data[VAR_21] != VAR_6)
  continue;
     FUNC_6(VAR_17, VAR_3 + VAR_21, VAR_5, &VAR_20);
     VAR_18[1] = FUNC_4(VAR_17, VAR_3 + VAR_21, VAR_4, 40, ((void*)0));
     if (VAR_18[1] != ((void*)0)) {
  FUNC_7(VAR_17, "port %d: %.40s %dMB\n", VAR_21, VAR_18[1]->data, VAR_20 / 2048);
  FUNC_3(VAR_18[1], VAR_0);
     } else {
  FUNC_7(VAR_17, "port %d, drive status unavailable\n", VAR_21);
     }
 }
 if (VAR_18[0])
     FUNC_3(VAR_18[0], VAR_0);
    }
    FUNC_1(VAR_17);
}
