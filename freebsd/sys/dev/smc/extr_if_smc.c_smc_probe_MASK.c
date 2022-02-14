
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16_t ;
struct smc_softc {scalar_t__ smc_usemem; } ;
struct resource {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 size_t FUNC_0 (size_t) ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 struct resource* FUNC_1 (int ,int,int*,int,int ) ;
 size_t FUNC_2 (struct resource*,int ) ;
 int FUNC_3 (int ,int,int,struct resource*) ;
 int FUNC_4 (struct resource*,int ,int) ;
 struct smc_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int ,int *) ;
 size_t FUNC_8 (struct resource*) ;
 int ** VAR_12 ;

int
FUNC_9(device_t VAR_13)
{
 int VAR_14, VAR_15, VAR_16;
 uint16_t VAR_17;
 struct smc_softc *VAR_18;
 struct resource *VAR_19;

 VAR_18 = FUNC_5(VAR_13);
 VAR_14 = 0;
 VAR_15 = VAR_9;
 VAR_16 = 0;

 if (VAR_18->smc_usemem)
  VAR_15 = VAR_10;

 VAR_19 = FUNC_1(VAR_13, VAR_15, &VAR_14, 16, VAR_8);
 if (VAR_19 == ((void*)0)) {
  if (VAR_11)
   FUNC_6(VAR_13,
       "could not allocate I/O resource for probe\n");
  return (VAR_4);
 }


 VAR_17 = FUNC_2(VAR_19, VAR_1);
 if ((VAR_17 & VAR_3) != VAR_2) {
  if (VAR_11)
   FUNC_6(VAR_13, "identification value not in BSR\n");
  VAR_16 = VAR_4;
  goto done;
 }





 FUNC_4(VAR_19, VAR_1, 0);
 VAR_17 = FUNC_2(VAR_19, VAR_1);
 if ((VAR_17 & VAR_3) != VAR_2) {
  if (VAR_11)
   FUNC_6(VAR_13,
       "identification value not in BSR after write\n");
  VAR_16 = VAR_4;
  goto done;
 }
 FUNC_4(VAR_19, VAR_1, 3);
 VAR_17 = FUNC_2(VAR_19, VAR_5);
 VAR_17 = (VAR_17 & VAR_6) >> VAR_7;
 if (VAR_12[VAR_17] == ((void*)0)) {
  if (VAR_11)
   FUNC_6(VAR_13, "Unknown chip revision: %d\n", VAR_17);
  VAR_16 = VAR_4;
  goto done;
 }

 FUNC_7(VAR_13, VAR_12[VAR_17]);

done:
 FUNC_3(VAR_13, VAR_15, VAR_14, VAR_19);
 return (VAR_16);
}
