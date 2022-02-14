
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_int16_t ;
struct wi_softc {scalar_t__ wi_bus_type; int * mem; void* wi_bmemhandle; void* wi_bmemtag; int mem_rid; int * local; int local_rid; void* wi_localhandle; void* wi_localtag; } ;
typedef int device_t ;


 int FUNC_0 (struct wi_softc*,int ) ;
 int FUNC_1 (struct wi_softc*,int ,int) ;
 int FUNC_2 (struct wi_softc*,int ) ;
 int FUNC_3 (struct wi_softc*,int ,int) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 void* FUNC_5 (int ,int ,int *,int ) ;
 int FUNC_6 (int ,int ,int ,int *) ;
 int FUNC_7 (void*,void*,int ) ;
 int FUNC_8 (void*,void*,int ,int ) ;
 struct wi_softc* FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,...) ;
 void* FUNC_11 (int *) ;
 void* FUNC_12 (int *) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static int
FUNC_16(device_t VAR_21)
{
 struct wi_softc *VAR_22;
 u_int32_t VAR_23;
 u_int16_t VAR_24;
 int VAR_25;
 int VAR_26;

 VAR_22 = FUNC_9(VAR_21);

 if (VAR_22->wi_bus_type != VAR_4) {
  VAR_25 = FUNC_13(VAR_21, VAR_16);
  if (VAR_25)
   return (VAR_25);


  FUNC_3(VAR_22, VAR_11, 0);
  FUNC_3(VAR_22, VAR_9, 0xFFFF);


  VAR_22->local_rid = VAR_18;
  VAR_22->local = FUNC_5(VAR_21, VAR_2,
      &VAR_22->local_rid, VAR_1);
  VAR_22->wi_localtag = FUNC_12(VAR_22->local);
  VAR_22->wi_localhandle = FUNC_11(VAR_22->local);
  VAR_23 = FUNC_7(VAR_22->wi_localtag, VAR_22->wi_localhandle,
      VAR_12);
  VAR_23 |= VAR_13;
  FUNC_8(VAR_22->wi_localtag, VAR_22->wi_localhandle,
      VAR_12, VAR_23);
  FUNC_6(VAR_21, VAR_2, VAR_22->local_rid,
      VAR_22->local);
  VAR_22->local = ((void*)0);

  VAR_22->mem_rid = VAR_19;
  VAR_22->mem = FUNC_5(VAR_21, VAR_3,
     &VAR_22->mem_rid, VAR_1);
  if (VAR_22->mem == ((void*)0)) {
   FUNC_10(VAR_21, "couldn't allocate memory\n");
   FUNC_15(VAR_21);
   return (VAR_0);
  }
  VAR_22->wi_bmemtag = FUNC_12(VAR_22->mem);
  VAR_22->wi_bmemhandle = FUNC_11(VAR_22->mem);







  FUNC_1(VAR_22, VAR_7, VAR_8);
  VAR_24 = FUNC_0(VAR_22, VAR_7);
  if (VAR_24 != VAR_8) {
   FUNC_10(VAR_21, "CSM_READ_1(WI_COR_OFFSET) "
       "wanted %d, got %d\n", VAR_8, VAR_24);
   FUNC_15(VAR_21);
   return (VAR_0);
  }
 } else {
  VAR_25 = FUNC_13(VAR_21, VAR_17);
  if (VAR_25)
   return (VAR_25);

  FUNC_3(VAR_22, VAR_14, VAR_15);
  FUNC_4(250000);

  FUNC_3(VAR_22, VAR_14, 0x0000);
  FUNC_4(500000);

  VAR_26=2000000;
  while ((--VAR_26 > 0) &&
      (FUNC_2(VAR_22, VAR_6) & VAR_5))
   FUNC_4(10);

  if (VAR_26 == 0) {
   FUNC_10(VAR_21, "couldn't reset prism pci core.\n");
   FUNC_15(VAR_21);
   return(VAR_0);
  }
 }

 FUNC_3(VAR_22, VAR_10, VAR_20);
 VAR_24 = FUNC_2(VAR_22, VAR_10);
 if (VAR_24 != VAR_20) {
  FUNC_10(VAR_21,
      "CSR_READ_2(WI_HFA384X_SWSUPPORT0_OFF) "
      "wanted %d, got %d\n", VAR_20, VAR_24);
  FUNC_15(VAR_21);
  return (VAR_0);
 }

 VAR_25 = FUNC_14(VAR_21);
 if (VAR_25 != 0)
  FUNC_15(VAR_21);
 return (VAR_25);
}
