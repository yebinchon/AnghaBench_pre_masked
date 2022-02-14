
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpr_softc {int mpr_parent_dmat; int * mpr_regs_resource; int mpr_bhandle; int mpr_btag; int mpr_regs_rid; int mpr_flags; int mpr_dev; } ;
struct mpr_ident {int device; int flags; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_1 (int ,int ,int *,int ) ;
 scalar_t__ FUNC_2 (int ,int,int ,int ,int ,int *,int *,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mpr_softc*,int) ;
 struct mpr_softc* FUNC_5 (int ) ;
 int FUNC_6 (struct mpr_softc*) ;
 struct mpr_ident* FUNC_7 (int ) ;
 int FUNC_8 (struct mpr_softc*) ;
 int FUNC_9 (struct mpr_softc*) ;
 int FUNC_10 (struct mpr_softc*) ;
 int FUNC_11 (struct mpr_softc*,char*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int
FUNC_15(device_t VAR_8)
{
 struct mpr_softc *VAR_9;
 struct mpr_ident *VAR_10;
 int VAR_11, VAR_12;

 VAR_9 = FUNC_5(VAR_8);
 FUNC_4(VAR_9, sizeof(*VAR_9));
 VAR_9->mpr_dev = VAR_8;
 VAR_10 = FUNC_7(VAR_8);
 VAR_9->mpr_flags = VAR_10->flags;

 switch (VAR_10->device) {
 case 131:
 case 129:
 case 130:
 case 128:
  FUNC_11(VAR_9, "HBA is in Non Secure mode\n");
  return (VAR_4);
 case 133:
 case 132:
  FUNC_11(VAR_9, "HBA is in Configurable Secure mode\n");
  break;
 default:
  break;
 }

 FUNC_8(VAR_9);


 FUNC_12(VAR_8);

 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  VAR_9->mpr_regs_rid = FUNC_0(VAR_12);

  if ((VAR_9->mpr_regs_resource = FUNC_1(VAR_8,
      VAR_7, &VAR_9->mpr_regs_rid, VAR_6)) != ((void*)0))
   break;
 }

 if (VAR_9->mpr_regs_resource == ((void*)0)) {
  FUNC_11(VAR_9, "Cannot allocate PCI registers\n");
  return (VAR_4);
 }

 VAR_9->mpr_btag = FUNC_14(VAR_9->mpr_regs_resource);
 VAR_9->mpr_bhandle = FUNC_13(VAR_9->mpr_regs_resource);


 if (FUNC_2( FUNC_3(VAR_8),
    1, 0,
    VAR_0,
    VAR_0,
    ((void*)0), ((void*)0),
    VAR_1,
    VAR_2,
    VAR_1,
    0,
    ((void*)0), ((void*)0),
    &VAR_9->mpr_parent_dmat)) {
  FUNC_11(VAR_9, "Cannot allocate parent DMA tag\n");
  FUNC_10(VAR_9);
  return (VAR_3);
 }

 if (((VAR_11 = FUNC_9(VAR_9)) != 0) ||
     ((VAR_11 = FUNC_6(VAR_9)) != 0))
  FUNC_10(VAR_9);

 return (VAR_11);
}
