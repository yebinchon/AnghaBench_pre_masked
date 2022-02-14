
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct aic7770_identity {int dummy; } ;
struct ahc_softc {int dev_softc; int parent_dmat; } ;
typedef int device_t ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;


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
 struct ahc_softc* FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ahc_softc*) ;
 int FUNC_2 (struct ahc_softc*) ;
 struct aic7770_identity* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct ahc_softc*,int ) ;
 int FUNC_5 (struct ahc_softc*,struct aic7770_identity*,int ) ;
 int FUNC_6 (struct ahc_softc*,int ,int,int ,int ,int ,int *,int *,int ,int ,int ,int ,int *) ;
 struct resource* FUNC_7 (int ,int ,int*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int,struct resource*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 char* FUNC_12 (scalar_t__,int ,int ) ;
 int FUNC_13 (char*,int) ;
 int FUNC_14 (struct resource*) ;
 int FUNC_15 (struct resource*) ;
 int FUNC_16 (char*,int ) ;
 scalar_t__ FUNC_17 (int ) ;

__attribute__((used)) static int
FUNC_18(device_t VAR_11)
{
 struct aic7770_identity *VAR_12;
 bus_space_tag_t VAR_13;
 bus_space_handle_t VAR_14;
 struct resource *VAR_15;
 struct ahc_softc *VAR_16;
 char *VAR_17;
 int VAR_18;
 int VAR_19;

 VAR_18 = 0;
 VAR_15 = FUNC_7(VAR_11, VAR_10, &VAR_18, VAR_9);
 if (VAR_15 == ((void*)0))
  return (VAR_6);

 VAR_13 = FUNC_15(VAR_15);
 VAR_14 = FUNC_14(VAR_15);
 VAR_12 = FUNC_3(VAR_13, VAR_14);
 FUNC_9(VAR_11, VAR_10, VAR_18, VAR_15);
 if (VAR_12 == ((void*)0))
  return (VAR_5);






 VAR_17 = FUNC_12(FUNC_17(FUNC_10(VAR_11)) + 1, VAR_7, VAR_8);
 if (VAR_17 == ((void*)0))
  return (VAR_6);
 FUNC_16(VAR_17, FUNC_10(VAR_11));
 VAR_16 = FUNC_0(VAR_11, VAR_17);
 if (VAR_16 == ((void*)0))
  return (VAR_6);

 FUNC_4(VAR_16, FUNC_11(VAR_11));


 VAR_19 = FUNC_6(VAR_16, FUNC_8(VAR_11),
                    1, 0,
                  VAR_3,
                   VAR_2,
                 ((void*)0), ((void*)0),
                  VAR_4,
                    VAR_1,
                   VAR_0,
                0,
       &VAR_16->parent_dmat);

 if (VAR_19 != 0) {
  FUNC_13("ahc_isa_attach: Could not allocate DMA tag "
         "- error %d\n", VAR_19);
  FUNC_2(VAR_16);
  return (VAR_6);
 }
 VAR_16->dev_softc = VAR_11;
 VAR_19 = FUNC_5(VAR_16, VAR_12, 0);
 if (VAR_19 != 0) {
  FUNC_2(VAR_16);
  return (VAR_19);
 }

 FUNC_1(VAR_16);
 return (0);
}
