
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct resource {int dummy; } ;
struct ata_channel {int attached; int flags; scalar_t__ unit; TYPE_1__* r_io; } ;
typedef int device_t ;
struct TYPE_2__ {int offset; struct resource* res; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct resource* FUNC_4 (int ,int ,int*,scalar_t__,int ) ;
 int FUNC_5 (int ,int ,int,struct resource*) ;
 struct ata_channel* FUNC_6 (int ) ;
 int FUNC_7 (int ,int*) ;
 scalar_t__ FUNC_8 (struct resource*) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_15)
{
    struct ata_channel *VAR_16 = FUNC_6(VAR_15);
    struct resource *VAR_17, *VAR_18;
    int VAR_19, VAR_20, VAR_21;
    uint16_t VAR_22;

    if (VAR_16->attached)
 return (0);
    VAR_16->attached = 1;


    VAR_20 = VAR_6;
    if (!(VAR_17 = FUNC_4(VAR_15, VAR_14, &VAR_20,
        VAR_7, VAR_13)))
 return (VAR_11);


    for (VAR_19 = VAR_4; VAR_19 <= VAR_0; VAR_19++) {
 VAR_16->r_io[VAR_19].res = VAR_17;
 VAR_16->r_io[VAR_19].offset = VAR_19;
    }
    VAR_16->r_io[VAR_5].res = VAR_17;





    if (FUNC_8(VAR_17) > VAR_7) {
 VAR_16->r_io[VAR_1].res = VAR_17;
 VAR_16->r_io[VAR_1].offset = 14;
    }
    else {
 VAR_20 = VAR_2;
 if (!(VAR_18 = FUNC_4(VAR_15, VAR_14, &VAR_20,
        VAR_3, VAR_13))) {
     FUNC_5(VAR_15, VAR_14, VAR_6, VAR_17);
     for (VAR_19 = VAR_4; VAR_19 < VAR_8; VAR_19++)
  VAR_16->r_io[VAR_19].res = ((void*)0);
     return (VAR_11);
 }
 VAR_16->r_io[VAR_1].res = VAR_18;
 VAR_16->r_io[VAR_1].offset = 0;
    }
    FUNC_1(VAR_15);


    VAR_16->unit = 0;
    VAR_16->flags |= VAR_10;
    VAR_22 = 0;
    FUNC_7(VAR_15, &VAR_22);
    if (!(VAR_22 & VAR_12))
        VAR_16-> flags |= VAR_9;
    FUNC_2(VAR_15);
    VAR_21 = FUNC_3(VAR_15);
    if (VAR_21 > 0)
 return (VAR_21);
    return (FUNC_0(VAR_15));
}
