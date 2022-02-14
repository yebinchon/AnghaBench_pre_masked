
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct altera_avgen_softc {int avg_width; int * avg_res; scalar_t__ avg_rid; int avg_unit; int avg_dev; } ;
typedef int device_t ;


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
 int FUNC_0 (struct altera_avgen_softc*,char const*,char const*,char const*,char const*,int) ;
 int * FUNC_1 (int ,int ,scalar_t__*,int ) ;
 int FUNC_2 (int ,int ,scalar_t__,int *) ;
 int FUNC_3 (int ) ;
 struct altera_avgen_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int ,int ,int ,int*) ;
 int FUNC_8 (int ,int ,int ,char const**) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_10)
{
 struct altera_avgen_softc *VAR_11;
 const char *VAR_12, *VAR_13, *VAR_14;
 const char *VAR_15;
 int VAR_16, VAR_17;

 VAR_11 = FUNC_4(VAR_10);
 VAR_11->avg_dev = VAR_10;
 VAR_11->avg_unit = FUNC_5(VAR_10);





 VAR_12 = ((void*)0);
 VAR_13 = ((void*)0);
 VAR_14 = ((void*)0);
 VAR_15 = ((void*)0);
 VAR_16 = -1;
 VAR_11->avg_width = 1;
 VAR_17 = FUNC_7(FUNC_3(VAR_10), FUNC_5(VAR_10),
     VAR_5, &VAR_11->avg_width);
 if (VAR_17 != 0 && VAR_17 != VAR_6) {
  FUNC_6(VAR_10, "invalid %s\n", VAR_5);
  return (VAR_17);
 }
 (void)FUNC_8(FUNC_3(VAR_10),
     FUNC_5(VAR_10), VAR_2, &VAR_12);
 (void)FUNC_8(FUNC_3(VAR_10),
     FUNC_5(VAR_10), VAR_3, &VAR_13);
 (void)FUNC_8(FUNC_3(VAR_10),
     FUNC_5(VAR_10), VAR_4, &VAR_14);
 (void)FUNC_8(FUNC_3(VAR_10),
     FUNC_5(VAR_10), VAR_0, &VAR_15);
 (void)FUNC_7(FUNC_3(VAR_10), FUNC_5(VAR_10),
     VAR_1, &VAR_16);


 VAR_11->avg_rid = 0;
 VAR_11->avg_res = FUNC_1(VAR_10, VAR_9,
     &VAR_11->avg_rid, VAR_8);
 if (VAR_11->avg_res == ((void*)0)) {
  FUNC_6(VAR_10, "couldn't map memory\n");
  return (VAR_7);
 }
 VAR_17 = FUNC_0(VAR_11, VAR_12, VAR_13, VAR_14,
     VAR_15, VAR_16);
 if (VAR_17 != 0)
  FUNC_2(VAR_10, VAR_9, VAR_11->avg_rid,
      VAR_11->avg_res);
 return (VAR_17);
}
