
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int acells; int scells; } ;
struct simple_mfd_softc {int * syscon; int * mem_res; TYPE_1__ sc; int * dev; } ;
typedef scalar_t__ phandle_t ;
typedef int * device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,char*,int*,int) ;
 scalar_t__ FUNC_2 (scalar_t__,char*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_5 (struct simple_mfd_softc*) ;
 int VAR_2 ;
 int * FUNC_6 (int *,int ,int*,int ) ;
 int FUNC_7 (int *) ;
 struct simple_mfd_softc* FUNC_8 (int *) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *,char*) ;
 int * FUNC_13 (int *,scalar_t__,int ,int *,int,int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_14 (scalar_t__,TYPE_1__*) ;
 int * FUNC_15 (int *,int *,scalar_t__) ;

__attribute__((used)) static int
FUNC_16(device_t VAR_4)
{
 struct simple_mfd_softc *VAR_5;
 phandle_t VAR_6, VAR_7;
 device_t VAR_8;
 int VAR_9;

 VAR_5 = FUNC_8(VAR_4);
 VAR_6 = FUNC_11(VAR_4);

 VAR_5->dev = VAR_4;
 VAR_9 = 0;


 if (FUNC_1(VAR_6, "#address-cells", &VAR_5->sc.acells,
     sizeof(VAR_5->sc.acells)) == -1) {
  if (FUNC_1(FUNC_3(VAR_6), "#address-cells", &VAR_5->sc.acells,
      sizeof(VAR_5->sc.acells)) == -1) {
   VAR_5->sc.acells = 2;
  }
 }
 if (FUNC_1(VAR_6, "#size-cells", &VAR_5->sc.scells,
     sizeof(VAR_5->sc.scells)) == -1) {
  if (FUNC_1(FUNC_3(VAR_6), "#size-cells", &VAR_5->sc.scells,
      sizeof(VAR_5->sc.scells)) == -1) {
   VAR_5->sc.scells = 1;
  }
 }


 if (FUNC_2(VAR_6, "ranges")) {
  if (FUNC_14(VAR_6, &VAR_5->sc) < 0) {
   FUNC_9(VAR_4, "could not get ranges\n");
   return (VAR_0);
  }
 }


 for (VAR_7 = FUNC_0(VAR_6); VAR_7 > 0; VAR_7 = FUNC_4(VAR_7)) {
  VAR_8 = FUNC_13(VAR_4, VAR_7, 0, ((void*)0), -1, ((void*)0));
  if (VAR_8 != ((void*)0))
   FUNC_10(VAR_8);
 }

 if (FUNC_12(VAR_4, "syscon")) {
  VAR_5->mem_res = FUNC_6(VAR_4, VAR_2, &VAR_9,
      VAR_1);
  if (VAR_5->mem_res == ((void*)0)) {
   FUNC_9(VAR_4,
       "Cannot allocate memory resource\n");
   return (VAR_0);
  }

  FUNC_5(VAR_5);
  VAR_5->syscon = FUNC_15(VAR_4,
      &VAR_3, FUNC_11(VAR_4));
  if (VAR_5->syscon == ((void*)0)) {
   FUNC_9(VAR_4,
       "Failed to create/register syscon\n");
   return (VAR_0);
  }
 }
 return (FUNC_7(VAR_4));
}
