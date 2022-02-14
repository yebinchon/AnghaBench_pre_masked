
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct dc_softc {scalar_t__ dc_romwidth; int * dc_srom; int * dc_dev; int * dc_eaddr; } ;
typedef int * device_t ;
typedef int devclass_t ;


 scalar_t__ FUNC_0 (struct dc_softc*) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 struct dc_softc* FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *,char*,...) ;
 int FUNC_12 (int *,int ) ;
 int * FUNC_13 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_14(struct dc_softc *VAR_5)
{
 struct dc_softc *VAR_6;
 devclass_t VAR_7;
 device_t VAR_8;
 uint8_t *VAR_9;
 int VAR_10;

 VAR_7 = FUNC_3("dc");
 for (VAR_10 = 0; VAR_10 < FUNC_5(VAR_7); VAR_10++) {
  VAR_8 = FUNC_4(VAR_7, VAR_10);
  if (VAR_8 == ((void*)0))
   continue;
  if (VAR_8 == VAR_5->dc_dev)
   continue;
  if (FUNC_7(VAR_8) != FUNC_7(VAR_5->dc_dev))
   continue;
  if (VAR_10 > FUNC_9(VAR_5->dc_dev))
   continue;
  if (FUNC_10(VAR_8) == 0)
   continue;
  VAR_6 = FUNC_8(VAR_8);
  FUNC_11(VAR_5->dc_dev,
      "Using station address of %s as base\n",
      FUNC_6(VAR_8));
  FUNC_2(VAR_6->dc_eaddr, VAR_5->dc_eaddr, VAR_2);
  VAR_9 = (uint8_t *)VAR_5->dc_eaddr;
  VAR_9[5]++;

  if (FUNC_0(VAR_5) && VAR_6->dc_srom != ((void*)0) &&
      VAR_5->dc_romwidth != 0) {
   FUNC_12(VAR_5->dc_srom, VAR_3);
   VAR_5->dc_romwidth = VAR_6->dc_romwidth;
   VAR_5->dc_srom = FUNC_13(FUNC_1(VAR_5->dc_romwidth),
       VAR_3, VAR_4);
   if (VAR_5->dc_srom == ((void*)0)) {
    FUNC_11(VAR_5->dc_dev,
        "Could not allocate SROM buffer\n");
    return (VAR_1);
   }
   FUNC_2(VAR_6->dc_srom, VAR_5->dc_srom,
       FUNC_1(VAR_5->dc_romwidth));
  }
  return (0);
 }
 return (VAR_0);
}
