
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdma_softc {int dummy; } ;
struct sc_info {struct sdma_softc* sdma_sc; int dev; void* sdma_ev_tx; void* sdma_ev_rx; } ;
typedef int phandle_t ;
typedef void* pcell_t ;
typedef int dts_value ;
typedef scalar_t__ device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,void**,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 struct sdma_softc* FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(struct sc_info *VAR_2)
{
 struct sdma_softc *VAR_3;
 phandle_t VAR_4, VAR_5;
 device_t VAR_6;
 pcell_t VAR_7[VAR_0];
 int VAR_8;

 if ((VAR_4 = FUNC_7(VAR_2->dev)) == -1)
  return (VAR_1);

 if ((VAR_8 = FUNC_1(VAR_4, "dmas")) <= 0)
  return (VAR_1);

 if (VAR_8 != sizeof(VAR_7)) {
  FUNC_6(VAR_2->dev,
      "\"dmas\" property length is invalid: %d (expected %d)",
      VAR_8, sizeof(VAR_7));
  return (VAR_1);
 }

 FUNC_0(VAR_4, "dmas", VAR_7, sizeof(VAR_7));

 VAR_2->sdma_ev_rx = VAR_7[1];
 VAR_2->sdma_ev_tx = VAR_7[5];

 VAR_5 = FUNC_2(VAR_7[0]);

 VAR_3 = ((void*)0);

 VAR_6 = FUNC_4(FUNC_3("sdma"), 0);
 if (VAR_6)
  VAR_3 = FUNC_5(VAR_6);

 if (VAR_3 == ((void*)0)) {
  FUNC_6(VAR_2->dev, "No sDMA found. Can't operate\n");
  return (VAR_1);
 }

 VAR_2->sdma_sc = VAR_3;

 return (0);
}
