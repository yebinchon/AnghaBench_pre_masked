
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int u_int ;
struct ahd_softc {scalar_t__ pcix_ptr; int dev_softc; } ;
typedef int ahd_mode_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ahd_softc*,int ) ;
 char* FUNC_1 (struct ahd_softc*) ;
 int FUNC_2 (struct ahd_softc*,int ,int) ;
 int FUNC_3 (struct ahd_softc*,int ) ;
 int FUNC_4 (struct ahd_softc*) ;
 int FUNC_5 (struct ahd_softc*,int,int) ;
 int FUNC_6 (int ,scalar_t__,int) ;
 int FUNC_7 (int ,scalar_t__,int,int) ;
 int FUNC_8 (char const*,char*,...) ;
 char** VAR_7 ;
 char** VAR_8 ;

__attribute__((used)) static void
FUNC_9(struct ahd_softc *VAR_9, u_int VAR_10)
{
 uint8_t VAR_11[4];
 uint8_t VAR_12[4];
 uint8_t VAR_13[2];
 uint8_t VAR_14[2];
 ahd_mode_state VAR_15;
 u_int VAR_16;
 uint32_t VAR_17;





 VAR_17 = FUNC_6(VAR_9->dev_softc,
     VAR_9->pcix_ptr + VAR_4, 4);
 FUNC_8("%s: PCI Split Interrupt - PCI-X status = 0x%x\n",
        FUNC_1(VAR_9), VAR_17 >> 16);
 VAR_15 = FUNC_4(VAR_9);
 for (VAR_16 = 0; VAR_16 < 4; VAR_16++) {
  FUNC_5(VAR_9, VAR_16, VAR_16);

  VAR_11[VAR_16] = FUNC_0(VAR_9, VAR_2);
  VAR_12[VAR_16] = FUNC_0(VAR_9, VAR_3);

  FUNC_2(VAR_9, VAR_2, VAR_11[VAR_16]);
  FUNC_2(VAR_9, VAR_3, VAR_12[VAR_16]);
  if (VAR_16 > 1)
   continue;
  VAR_13[VAR_16] = FUNC_0(VAR_9, VAR_5);
  VAR_14[VAR_16] = FUNC_0(VAR_9, VAR_6);

  FUNC_2(VAR_9, VAR_5, VAR_13[VAR_16]);
  FUNC_2(VAR_9, VAR_6, VAR_14[VAR_16]);
 }

 for (VAR_16 = 0; VAR_16 < 4; VAR_16++) {
  u_int VAR_18;

  for (VAR_18 = 0; VAR_18 < 8; VAR_18++) {

   if ((VAR_11[VAR_16] & (0x1 << VAR_18)) != 0) {
    static const char *VAR_19;

    VAR_19 = VAR_8[VAR_18];
    FUNC_8(VAR_19, FUNC_1(VAR_9),
           VAR_7[VAR_16]);
   }

   if (VAR_16 > 1)
    continue;

   if ((VAR_13[VAR_16] & (0x1 << VAR_18)) != 0) {
    static const char *VAR_20;

    VAR_20 = VAR_8[VAR_18];
    FUNC_8(VAR_20, FUNC_1(VAR_9), "SG");
   }
  }
 }



 FUNC_7(VAR_9->dev_softc, VAR_9->pcix_ptr + VAR_4,
        VAR_17, 4);
 FUNC_2(VAR_9, VAR_0, VAR_1);
 FUNC_3(VAR_9, VAR_15);
}
