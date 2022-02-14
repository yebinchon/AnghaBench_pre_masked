
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_char ;
struct iwi_softc {int fw_physaddr; int sc_dev; int sc_mtx; int fw_map; int fw_dmat; int * fw_virtaddr; } ;
struct iwi_fw {int size; int name; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwi_softc*,int ) ;
 int FUNC_1 (struct iwi_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (struct iwi_softc*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (struct iwi_softc*,int) ;
 int FUNC_6 (struct iwi_softc*,int,int) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,char*,int ) ;
 int VAR_14 ;
 int FUNC_9 (int *,int ,int) ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (struct iwi_softc*,int *,int ,char*,int ) ;

__attribute__((used)) static int
FUNC_12(struct iwi_softc *VAR_15, const struct iwi_fw *VAR_16)
{
 u_char *VAR_17, *VAR_18;
 uint32_t VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
 int VAR_27, VAR_28;

 FUNC_4(VAR_15);


 FUNC_9(VAR_15->fw_virtaddr, VAR_16->data, VAR_16->size);


 FUNC_7(VAR_15->fw_dmat, VAR_15->fw_map, VAR_1);


 FUNC_6(VAR_15, 0x3000a0, 0x27000);






 VAR_21 = VAR_15->fw_physaddr;
 VAR_17 = VAR_15->fw_virtaddr;
 VAR_18 = VAR_17 + VAR_16->size;
 FUNC_1(VAR_15, VAR_5, 0x27000);

 while (VAR_17 < VAR_18) {
  VAR_22 = FUNC_3(VAR_17); VAR_17 += 4; VAR_21 += 4;
  VAR_24 = FUNC_3(VAR_17); VAR_17 += 4; VAR_21 += 4;
  VAR_17 += VAR_24;

  while (VAR_24 > 0) {
   VAR_25 = FUNC_10(VAR_24, VAR_4);

   VAR_20 = VAR_3 | VAR_25;
   VAR_23 = VAR_20 ^ VAR_21 ^ VAR_22;


   FUNC_1(VAR_15, VAR_6, VAR_20);
   FUNC_1(VAR_15, VAR_6, VAR_21);
   FUNC_1(VAR_15, VAR_6, VAR_22);
   FUNC_1(VAR_15, VAR_6, VAR_23);

   VAR_21 += VAR_25;
   VAR_22 += VAR_25;
   VAR_24 -= VAR_25;
  }
 }


 VAR_19 = FUNC_0(VAR_15, VAR_5);
 FUNC_1(VAR_15, VAR_6, 0);

 VAR_26 = FUNC_0(VAR_15, VAR_9);
 VAR_26 &= ~(VAR_12 | VAR_13);
 FUNC_1(VAR_15, VAR_9, VAR_26);


 FUNC_6(VAR_15, 0x3000a4, 0x540100);


 for (VAR_27 = 0; VAR_27 < 400; VAR_27++) {
  if (FUNC_5(VAR_15, 0x3000d0) >= VAR_19)
   break;
  FUNC_2(100);
 }

 FUNC_7(VAR_15->fw_dmat, VAR_15->fw_map, VAR_0);
 if (VAR_27 == 400) {
  FUNC_8(VAR_15->sc_dev,
      "timeout processing command blocks for %s firmware\n",
      VAR_16->name);
  return VAR_2;
 }


 FUNC_6(VAR_15, 0x3000a4, 0x540c00);


 FUNC_1(VAR_15, VAR_8, VAR_11);


 FUNC_1(VAR_15, VAR_9, 0);

 VAR_26 = FUNC_0(VAR_15, VAR_7);
 FUNC_1(VAR_15, VAR_7, VAR_26 | VAR_10);


 if ((VAR_28 = FUNC_11(VAR_15, &VAR_15->sc_mtx, 0, "iwiinit", VAR_14)) != 0) {
  FUNC_8(VAR_15->sc_dev, "timeout waiting for %s firmware "
      "initialization to complete\n", VAR_16->name);
 }

 return VAR_28;
}
