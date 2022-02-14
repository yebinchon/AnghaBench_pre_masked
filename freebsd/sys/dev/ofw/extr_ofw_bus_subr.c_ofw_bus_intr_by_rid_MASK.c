
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ phandle_t ;
typedef int pcell_t ;
typedef int icells ;
typedef int device_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,char*,int,void**) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,char*,int*,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int*,int ) ;
 int * FUNC_7 (int,int ,int ) ;
 int FUNC_8 (int *,int*,int) ;
 scalar_t__ FUNC_9 (scalar_t__) ;

int
FUNC_10(device_t VAR_5, phandle_t VAR_6, int VAR_7,
    phandle_t *VAR_8, int *VAR_9, pcell_t **VAR_10)
{
 phandle_t VAR_11;
 uint32_t VAR_12, *VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17;
 boolean_t VAR_18;

 VAR_16 = FUNC_0(VAR_6, "interrupts", sizeof(*VAR_13),
     (void **)&VAR_13);
 if (VAR_16 > 0) {
  VAR_11 = FUNC_9(VAR_6);
  if (VAR_11 == 0) {
   FUNC_5(VAR_5, "No interrupt-parent found, "
       "assuming direct parent\n");
   VAR_11 = FUNC_2(VAR_6);
   VAR_11 = FUNC_4(VAR_11);
  }
  if (FUNC_3(FUNC_1(VAR_11),
      "#interrupt-cells", &VAR_12, sizeof(VAR_12)) == -1) {
   FUNC_5(VAR_5, "Missing #interrupt-cells "
       "property, assuming <1>\n");
   VAR_12 = 1;
  }
  if (VAR_12 < 1 || VAR_12 > VAR_16) {
   FUNC_5(VAR_5, "Invalid #interrupt-cells property "
       "value <%d>, assuming <1>\n", VAR_12);
   VAR_12 = 1;
  }
  VAR_18 = 0;
 } else {
  VAR_16 = FUNC_0(VAR_6, "interrupts-extended",
      sizeof(*VAR_13), (void **)&VAR_13);
  if (VAR_16 <= 0)
   return (VAR_2);
  VAR_18 = 1;
 }
 VAR_14 = VAR_2;
 VAR_17 = 0;
 for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15 += VAR_12, VAR_17++) {
  if (VAR_18) {
   VAR_11 = VAR_13[VAR_15++];
   if (FUNC_3(FUNC_1(VAR_11),
       "#interrupt-cells", &VAR_12, sizeof(VAR_12)) == -1) {
    FUNC_5(VAR_5, "Missing #interrupt-cells "
        "property\n");
    VAR_14 = VAR_0;
    break;
   }
   if (VAR_12 < 1 || (VAR_15 + VAR_12) > VAR_16) {
    FUNC_5(VAR_5, "Invalid #interrupt-cells "
        "property value <%d>\n", VAR_12);
    VAR_14 = VAR_1;
    break;
   }
  }
  if (VAR_17 == VAR_7) {
   *VAR_10 = FUNC_7(VAR_12 * sizeof(**VAR_10), VAR_3,
       VAR_4);
   *VAR_8 = VAR_11;
   *VAR_9= VAR_12;
   FUNC_8(*VAR_10, VAR_13 + VAR_15, VAR_12 * sizeof(**VAR_10));
   VAR_14 = 0;
   break;
  }
 }
 FUNC_6(VAR_13, VAR_3);
 return (VAR_14);
}
