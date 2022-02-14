
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_2__ {int* csd_data; } ;
struct altera_sdcard_softc {int as_mediasize; int as_dev; TYPE_1__ as_csd; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct altera_sdcard_softc*) ;
 int VAR_16 ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int
FUNC_2(struct altera_sdcard_softc *VAR_17)
{
 uint64_t VAR_18, VAR_19, VAR_20;
 uint8_t VAR_21, VAR_22, VAR_23;

 FUNC_0(VAR_17);
 VAR_20 = VAR_17->as_csd.csd_data[VAR_14];
 VAR_20 &= VAR_15;

 VAR_21 = VAR_17->as_csd.csd_data[VAR_0];
 VAR_21 &= VAR_5;
 VAR_22 = VAR_17->as_csd.csd_data[VAR_1];
 VAR_23 = VAR_17->as_csd.csd_data[VAR_2];
 VAR_23 &= VAR_6;
 VAR_18 = (VAR_21 >> VAR_13) |
     (VAR_22 << VAR_3) |
     (VAR_23 << VAR_4);

 VAR_21 = VAR_17->as_csd.csd_data[VAR_7];
 VAR_21 &= VAR_10;
 VAR_22 = VAR_17->as_csd.csd_data[VAR_8];
 VAR_22 &= VAR_11;
 VAR_19 = (VAR_21 >> VAR_12) |
     (VAR_22 << VAR_9);





 if (VAR_18 == 0 && VAR_19 == 0 && VAR_20 == 0) {
  FUNC_1(VAR_17->as_dev, "Ignored zero-size card\n");
  return (VAR_16);
 }
 VAR_17->as_mediasize = (VAR_18 + 1) * (1 << (VAR_19 + 2)) *
     (1 << VAR_20);
 return (0);
}
