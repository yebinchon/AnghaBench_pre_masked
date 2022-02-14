
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_4__ {int* speed_cap_mask; TYPE_1__* phy; } ;
struct bxe_softc {int media; TYPE_2__ link_params; } ;
struct TYPE_3__ {int media_type; } ;


 int FUNC_0 (struct bxe_softc*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t FUNC_1 (struct bxe_softc*) ;

__attribute__((used)) static int
FUNC_2(struct bxe_softc *VAR_11)
{
    int VAR_12;
    uint32_t VAR_13 = FUNC_1(VAR_11);

    switch (VAR_11->link_params.phy[VAR_13].media_type) {
    case 131:
    case 128:
        FUNC_0(VAR_11, "Found 10Gb Fiber media.\n");
        VAR_11->media = VAR_3;
        VAR_12 = VAR_7;
        break;
    case 130:
        FUNC_0(VAR_11, "Found 1Gb Fiber media.\n");
        VAR_11->media = VAR_0;
        VAR_12 = VAR_7;
        break;
    case 133:
    case 135:
        FUNC_0(VAR_11, "Found 10GBase-CX4 media.\n");
        VAR_11->media = VAR_2;
        VAR_12 = VAR_7;
        break;
    case 134:
        FUNC_0(VAR_11, "Found 10Gb Twinax media.\n");
        VAR_11->media = VAR_5;
        VAR_12 = VAR_6;
        break;
    case 136:
        if (VAR_11->link_params.speed_cap_mask[0] &
            VAR_8) {
            FUNC_0(VAR_11, "Found 10GBase-T media.\n");
            VAR_11->media = VAR_4;
            VAR_12 = VAR_10;
        } else {
            FUNC_0(VAR_11, "Found 1000Base-T media.\n");
            VAR_11->media = VAR_1;
            VAR_12 = VAR_10;
        }
        break;
    case 132:
        FUNC_0(VAR_11, "Media not present.\n");
        VAR_11->media = 0;
        VAR_12 = VAR_9;
        break;
    case 129:
    default:
        FUNC_0(VAR_11, "Unknown media!\n");
        VAR_11->media = 0;
        VAR_12 = VAR_9;
        break;
    }
    return VAR_12;
}
