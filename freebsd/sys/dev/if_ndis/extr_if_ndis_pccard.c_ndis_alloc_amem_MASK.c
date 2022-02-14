
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ndis_softc {int ndis_am_rid; int ndis_dev; int * ndis_res_am; int ndis_rl; int ndis_rescnt; } ;


 int FUNC_0 (int ,int ,int,int ,int *) ;
 int FUNC_1 (int ,int ,int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_2 (int ,int ,int*,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int *,int ,int,int ,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(struct ndis_softc *VAR_5)
{
 int VAR_6, VAR_7;

 VAR_7 = VAR_1;
 VAR_5->ndis_res_am = FUNC_2(VAR_5->ndis_dev,
     VAR_4, &VAR_7, 0x1000, VAR_3);

 if (VAR_5->ndis_res_am == ((void*)0)) {
  FUNC_4(VAR_5->ndis_dev,
      "failed to allocate attribute memory\n");
  return(VAR_0);
 }
 VAR_5->ndis_rescnt++;
 FUNC_5(&VAR_5->ndis_rl, VAR_4, VAR_7,
     FUNC_8(VAR_5->ndis_res_am), FUNC_6(VAR_5->ndis_res_am),
     FUNC_7(VAR_5->ndis_res_am));

 VAR_6 = FUNC_0(FUNC_3(VAR_5->ndis_dev),
     VAR_5->ndis_dev, VAR_7, 0, ((void*)0));

 if (VAR_6) {
  FUNC_4(VAR_5->ndis_dev,
      "CARD_SET_MEMORY_OFFSET() returned 0x%x\n", VAR_6);
  return(VAR_6);
 }

 VAR_6 = FUNC_1(FUNC_3(VAR_5->ndis_dev),
     VAR_5->ndis_dev, VAR_4, VAR_7, VAR_2);

 if (VAR_6) {
  FUNC_4(VAR_5->ndis_dev,
      "CARD_SET_RES_FLAGS() returned 0x%x\n", VAR_6);
  return(VAR_6);
 }

 VAR_5->ndis_am_rid = VAR_7;

 return(0);
}
