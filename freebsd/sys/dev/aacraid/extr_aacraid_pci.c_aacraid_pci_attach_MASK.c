
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct aac_softc {int aac_hwif; int flags; int aac_dev; int aac_parent_dmat; int * aac_regs_res1; void* aac_bhandle1; void* aac_btag1; void* aac_regs_rid1; int * aac_regs_res0; void* aac_bhandle0; void* aac_btag0; void* aac_regs_rid0; int aac_if; } ;
struct aac_ident {int hwif; int quirks; } ;
typedef int device_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_0 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct aac_ident* FUNC_1 (int ) ;
 int FUNC_2 (struct aac_softc*) ;
 int FUNC_3 (struct aac_softc*) ;
 int VAR_13 ;
 int VAR_14 ;
 void* FUNC_4 (int ,int ,void**,int ) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int ,int ,int *,int *,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct aac_softc*,int) ;
 struct aac_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (struct aac_softc*,char*,char*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,int) ;
 void* FUNC_13 (int *) ;
 void* FUNC_14 (int *) ;

__attribute__((used)) static int
FUNC_15(device_t VAR_15)
{
 struct aac_softc *VAR_16;
 struct aac_ident *VAR_17;
 int VAR_18;
 u_int32_t VAR_19;

 FUNC_10(((void*)0), VAR_6, "");




 VAR_16 = FUNC_8(VAR_15);
 FUNC_7(VAR_16, sizeof(*VAR_16));
 VAR_16->aac_dev = VAR_15;


 VAR_18 = VAR_5;




 FUNC_11(VAR_15);
 VAR_19 = FUNC_12(VAR_16->aac_dev, VAR_10, 2);
 if (!(VAR_19 & VAR_9)) {
  FUNC_9(VAR_16->aac_dev, "can't enable bus-master feature\n");
  goto out;
 }





 VAR_17 = FUNC_1(VAR_15);
 VAR_16->aac_hwif = VAR_17->hwif;
 switch(VAR_16->aac_hwif) {
 case 129:
  FUNC_10(VAR_16, VAR_7, "set hardware up for PMC SRC");
  VAR_16->aac_if = VAR_13;
  break;
 case 128:
  FUNC_10(VAR_16, VAR_7, "set hardware up for PMC SRCv");
  VAR_16->aac_if = VAR_14;
  break;
 default:
  VAR_16->aac_hwif = VAR_0;
  FUNC_9(VAR_16->aac_dev, "unknown hardware type\n");
  VAR_18 = VAR_5;
  goto out;
 }


 VAR_18 = VAR_4;




 VAR_16->aac_regs_rid0 = FUNC_0(0);
 if ((VAR_16->aac_regs_res0 = FUNC_4(VAR_16->aac_dev,
     VAR_12, &VAR_16->aac_regs_rid0, VAR_11)) == ((void*)0)) {
  FUNC_9(VAR_16->aac_dev,
      "couldn't allocate register window 0\n");
  goto out;
 }
 VAR_16->aac_btag0 = FUNC_14(VAR_16->aac_regs_res0);
 VAR_16->aac_bhandle0 = FUNC_13(VAR_16->aac_regs_res0);

 VAR_16->aac_regs_rid1 = FUNC_0(2);
 if ((VAR_16->aac_regs_res1 = FUNC_4(VAR_16->aac_dev,
     VAR_12, &VAR_16->aac_regs_rid1, VAR_11)) == ((void*)0)) {
  FUNC_9(VAR_16->aac_dev,
      "couldn't allocate register window 1\n");
  goto out;
 }
 VAR_16->aac_btag1 = FUNC_14(VAR_16->aac_regs_res1);
 VAR_16->aac_bhandle1 = FUNC_13(VAR_16->aac_regs_res1);






 if (FUNC_5(FUNC_6(VAR_15),
          VAR_8, 0,
          VAR_1,
          VAR_1,
          ((void*)0), ((void*)0),
          VAR_2,
          VAR_3,
          VAR_2,
          0,
          ((void*)0), ((void*)0),
          &VAR_16->aac_parent_dmat)) {
  FUNC_9(VAR_16->aac_dev, "can't allocate parent DMA tag\n");
  goto out;
 }


 VAR_16->flags = VAR_17->quirks;




 VAR_18 = FUNC_2(VAR_16);

out:
 if (VAR_18)
  FUNC_3(VAR_16);
 return(VAR_18);
}
