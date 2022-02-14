
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct resource {int dummy; } ;
struct intsmb_softc {int io_rid; int poll; int * io_res; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int const VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct resource*,scalar_t__) ;
 void* FUNC_1 (int ,int ,int*,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int,struct resource*) ;
 int FUNC_4 (int ,int ,int,int,int const) ;
 struct intsmb_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_16)
{
 static const int VAR_17 = 0x10;
 struct intsmb_softc *VAR_18;
 struct resource *VAR_19;
 uint32_t VAR_20;
 uint8_t VAR_21;
 uint16_t VAR_22;
 int VAR_23;
 int VAR_24;
 bool VAR_25;

 VAR_18 = FUNC_5(VAR_16);
 VAR_23 = 0;
 VAR_24 = FUNC_4(VAR_16, VAR_15, VAR_23, VAR_10,
     VAR_11);
 if (VAR_24 != 0) {
  FUNC_6(VAR_16, "bus_set_resource for PM IO failed\n");
  return (VAR_13);
 }
 VAR_19 = FUNC_1(VAR_16, VAR_15, &VAR_23,
     VAR_14);
 if (VAR_19 == ((void*)0)) {
  FUNC_6(VAR_16, "bus_alloc_resource for PM IO failed\n");
  return (VAR_13);
 }

 VAR_20 = FUNC_7(VAR_16);
 VAR_21 = FUNC_8(VAR_16);
 if (VAR_20 == VAR_12 ||
     (VAR_20 == VAR_6 && VAR_21 < VAR_5) ||
     (VAR_20 == VAR_1 && VAR_21 < VAR_0)) {
  VAR_22 = FUNC_0(VAR_19, VAR_7 + 1);
  VAR_22 <<= 8;
  VAR_22 |= FUNC_0(VAR_19, VAR_7);
  VAR_25 = (VAR_22 & VAR_9) != 0;
  VAR_22 &= VAR_8;
 } else {
  VAR_22 = FUNC_0(VAR_19, VAR_2);
  VAR_25 = (VAR_22 & VAR_4) != 0;
  VAR_22 = FUNC_0(VAR_19, VAR_3);
  VAR_22 <<= 8;
 }

 FUNC_3(VAR_16, VAR_15, VAR_23, VAR_19);
 FUNC_2(VAR_16, VAR_15, VAR_23);

 if (!VAR_25) {
  FUNC_6(VAR_16, "SB8xx/SB9xx/FCH SMBus not enabled\n");
  return (VAR_13);
 }

 VAR_18->io_rid = 0;
 VAR_24 = FUNC_4(VAR_16, VAR_15, VAR_18->io_rid, VAR_22,
     VAR_17);
 if (VAR_24 != 0) {
  FUNC_6(VAR_16, "bus_set_resource for SMBus IO failed\n");
  return (VAR_13);
 }
 VAR_18->io_res = FUNC_1(VAR_16, VAR_15, &VAR_18->io_rid,
     VAR_14);
 if (VAR_18->io_res == ((void*)0)) {
  FUNC_6(VAR_16, "Could not allocate I/O space\n");
  return (VAR_13);
 }
 VAR_18->poll = 1;
 return (0);
}
