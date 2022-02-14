
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {int edma_chnum; struct edma_softc* edma_sc; int dev; } ;
struct edma_softc {int device_id; int (* channel_configure ) (struct edma_softc*,int,int) ;} ;
typedef int phandle_t ;
typedef scalar_t__ device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int*,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,int) ;
 struct edma_softc* FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct edma_softc*,int,int) ;

__attribute__((used)) static int
FUNC_9(struct sc_info *VAR_2)
{
 struct edma_softc *VAR_3;
 phandle_t VAR_4, VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 device_t VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;

 if ((VAR_4 = FUNC_7(VAR_2->dev)) == -1)
  return (VAR_1);

 if ((VAR_11 = FUNC_1(VAR_4, "edma-controller")) <= 0)
  return (VAR_1);
 if ((VAR_11 = FUNC_1(VAR_4, "edma-src-transmit")) <= 0)
  return (VAR_1);
 if ((VAR_11 = FUNC_1(VAR_4, "edma-mux-group")) <= 0)
  return (VAR_1);

 FUNC_0(VAR_4, "edma-src-transmit", &VAR_10, VAR_11);
 VAR_6 = VAR_10;
 FUNC_0(VAR_4, "edma-mux-group", &VAR_10, VAR_11);
 VAR_7 = VAR_10;
 FUNC_0(VAR_4, "edma-controller", &VAR_10, VAR_11);
 VAR_5 = FUNC_2(VAR_10);

 if ((VAR_11 = FUNC_1(VAR_5, "device-id")) <= 0) {
  return (VAR_1);
 }

 FUNC_0(VAR_5, "device-id", &VAR_10, VAR_11);
 VAR_8 = VAR_10;

 VAR_3 = ((void*)0);

 for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
  VAR_9 = FUNC_4(FUNC_3("edma"), VAR_12);
  if (VAR_9) {
   VAR_3 = FUNC_5(VAR_9);
   if (VAR_3->device_id == VAR_8) {

    break;
   }

   VAR_3 = ((void*)0);
  }
 }

 if (VAR_3 == ((void*)0)) {
  FUNC_6(VAR_2->dev, "no eDMA. can't operate\n");
  return (VAR_1);
 }

 VAR_2->edma_sc = VAR_3;

 VAR_2->edma_chnum = VAR_3->channel_configure(VAR_3, VAR_7,
     VAR_6);
 if (VAR_2->edma_chnum < 0) {

  return (VAR_1);
 }

 return (0);
}
