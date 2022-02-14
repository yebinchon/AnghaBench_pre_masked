
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mps_softc {int mps_parent_dmat; int * mps_regs_resource; int mps_bhandle; int mps_btag; int mps_regs_rid; int mps_flags; int mps_dev; } ;
struct mps_ident {int flags; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_1 (int ,int ,int *,int ) ;
 scalar_t__ FUNC_2 (int ,int,int ,int ,int ,int *,int *,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mps_softc*,int) ;
 struct mps_softc* FUNC_5 (int ) ;
 int FUNC_6 (struct mps_softc*) ;
 struct mps_ident* FUNC_7 (int ) ;
 int FUNC_8 (struct mps_softc*) ;
 int FUNC_9 (struct mps_softc*) ;
 int FUNC_10 (struct mps_softc*) ;
 int FUNC_11 (struct mps_softc*,char*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int
FUNC_15(device_t VAR_7)
{
 struct mps_softc *VAR_8;
 struct mps_ident *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_5(VAR_7);
 FUNC_4(VAR_8, sizeof(*VAR_8));
 VAR_8->mps_dev = VAR_7;
 VAR_9 = FUNC_7(VAR_7);
 VAR_8->mps_flags = VAR_9->flags;

 FUNC_8(VAR_8);


 FUNC_12(VAR_7);


 VAR_8->mps_regs_rid = FUNC_0(1);
 if ((VAR_8->mps_regs_resource = FUNC_1(VAR_7,
     VAR_6, &VAR_8->mps_regs_rid, VAR_5)) == ((void*)0)) {
  FUNC_11(VAR_8, "Cannot allocate PCI registers\n");
  return (VAR_4);
 }
 VAR_8->mps_btag = FUNC_14(VAR_8->mps_regs_resource);
 VAR_8->mps_bhandle = FUNC_13(VAR_8->mps_regs_resource);


 if (FUNC_2( FUNC_3(VAR_7),
    1, 0,
    VAR_0,
    VAR_0,
    ((void*)0), ((void*)0),
    VAR_1,
    VAR_2,
    VAR_1,
    0,
    ((void*)0), ((void*)0),
    &VAR_8->mps_parent_dmat)) {
  FUNC_11(VAR_8, "Cannot allocate parent DMA tag\n");
  FUNC_10(VAR_8);
  return (VAR_3);
 }

 if (((VAR_10 = FUNC_9(VAR_8)) != 0) ||
     ((VAR_10 = FUNC_6(VAR_8)) != 0))
  FUNC_10(VAR_8);

 return (VAR_10);
}
