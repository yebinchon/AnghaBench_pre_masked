
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct cqspi_softc {int fifo_depth; void* trigger_address; void* fifo_width; int dev; } ;
typedef int phandle_t ;
typedef void* pcell_t ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int,char*,void**,int) ;
 int FUNC_1 (int,char*) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (struct cqspi_softc*,int ) ;
 int FUNC_3 (struct cqspi_softc*,int ,int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct cqspi_softc *VAR_19)
{
 pcell_t VAR_20[1];
 phandle_t VAR_21;
 uint32_t VAR_22;
 int VAR_23;

 FUNC_4(VAR_19->dev, "Module ID %x\n",
     FUNC_2(VAR_19, VAR_7));

 if ((VAR_21 = FUNC_5(VAR_19->dev)) == -1) {
  return (VAR_16);
 }

 if ((VAR_23 = FUNC_1(VAR_21, "cdns,fifo-depth")) <= 0) {
  return (VAR_16);
 }
 FUNC_0(VAR_21, "cdns,fifo-depth", VAR_20, VAR_23);
 VAR_19->fifo_depth = VAR_20[0];

 if ((VAR_23 = FUNC_1(VAR_21, "cdns,fifo-width")) <= 0) {
  return (VAR_16);
 }
 FUNC_0(VAR_21, "cdns,fifo-width", VAR_20, VAR_23);
 VAR_19->fifo_width = VAR_20[0];

 if ((VAR_23 = FUNC_1(VAR_21, "cdns,trigger-address")) <= 0) {
  return (VAR_16);
 }
 FUNC_0(VAR_21, "cdns,trigger-address", VAR_20, VAR_23);
 VAR_19->trigger_address = VAR_20[0];


 VAR_22 = FUNC_2(VAR_19, VAR_4);
 VAR_22 &= ~(VAR_2);
 FUNC_3(VAR_19, VAR_4, VAR_22);

 VAR_22 = FUNC_2(VAR_19, VAR_6);
 VAR_22 &= ~(VAR_14);
 VAR_22 |= ((4 - 1) - VAR_15);
 FUNC_3(VAR_19, VAR_6, VAR_22);

 FUNC_3(VAR_19, VAR_9, VAR_19->fifo_depth/2);



 VAR_22 = FUNC_2(VAR_19, VAR_4);

 VAR_22 &= ~(VAR_1);
 VAR_22 |= VAR_0;
 VAR_22 |= VAR_3;
 FUNC_3(VAR_19, VAR_4, VAR_22);

 VAR_22 = (3 << VAR_13);
 VAR_22 |= (3 << VAR_11);
 VAR_22 |= (1 << VAR_10);
 VAR_22 |= (1 << VAR_12);
 FUNC_3(VAR_19, VAR_5, VAR_22);

 FUNC_2(VAR_19, VAR_8);
 VAR_22 &= ~(VAR_17);
 VAR_22 |= (1 << VAR_18);
 FUNC_3(VAR_19, VAR_8, VAR_22);


 VAR_22 = FUNC_2(VAR_19, VAR_4);
 VAR_22 |= (VAR_2);
 FUNC_3(VAR_19, VAR_4, VAR_22);

 return (0);
}
