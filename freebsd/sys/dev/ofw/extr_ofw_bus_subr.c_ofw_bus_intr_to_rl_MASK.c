
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct resource_list {int dummy; } ;
typedef scalar_t__ phandle_t ;
typedef int icells ;
typedef int device_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,char*,int,void**) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,char*,int*,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int*,int ) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,scalar_t__,int,int*) ;
 int FUNC_9 (struct resource_list*,int ,int ,int,int,int) ;

int
FUNC_10(device_t VAR_4, phandle_t VAR_5,
    struct resource_list *VAR_6, int *VAR_7)
{
 phandle_t VAR_8;
 uint32_t VAR_9, *VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 boolean_t VAR_16;

 VAR_14 = FUNC_0(VAR_5, "interrupts", sizeof(*VAR_10),
     (void **)&VAR_10);
 if (VAR_14 > 0) {
  VAR_8 = FUNC_7(VAR_5);
  if (VAR_8 == 0) {
   FUNC_5(VAR_4, "No interrupt-parent found, "
       "assuming direct parent\n");
   VAR_8 = FUNC_2(VAR_5);
   VAR_8 = FUNC_4(VAR_8);
  }
  if (FUNC_3(FUNC_1(VAR_8),
      "#interrupt-cells", &VAR_9, sizeof(VAR_9)) == -1) {
   FUNC_5(VAR_4, "Missing #interrupt-cells "
       "property, assuming <1>\n");
   VAR_9 = 1;
  }
  if (VAR_9 < 1 || VAR_9 > VAR_14) {
   FUNC_5(VAR_4, "Invalid #interrupt-cells property "
       "value <%d>, assuming <1>\n", VAR_9);
   VAR_9 = 1;
  }
  VAR_16 = 0;
 } else {
  VAR_14 = FUNC_0(VAR_5, "interrupts-extended",
      sizeof(*VAR_10), (void **)&VAR_10);
  if (VAR_14 <= 0)
   return (0);
  VAR_16 = 1;
 }
 VAR_11 = 0;
 VAR_15 = 0;
 for (VAR_12 = 0; VAR_12 < VAR_14; VAR_12 += VAR_9) {
  if (VAR_16) {
   VAR_8 = VAR_10[VAR_12++];
   if (FUNC_3(FUNC_1(VAR_8),
       "#interrupt-cells", &VAR_9, sizeof(VAR_9)) == -1) {
    FUNC_5(VAR_4, "Missing #interrupt-cells "
        "property\n");
    VAR_11 = VAR_0;
    break;
   }
   if (VAR_9 < 1 || (VAR_12 + VAR_9) > VAR_14) {
    FUNC_5(VAR_4, "Invalid #interrupt-cells "
        "property value <%d>\n", VAR_9);
    VAR_11 = VAR_1;
    break;
   }
  }
  VAR_13 = FUNC_8(VAR_4, VAR_8, VAR_9, &VAR_10[VAR_12]);
  FUNC_9(VAR_6, VAR_3, VAR_15++, VAR_13, VAR_13, 1);
 }
 if (VAR_7 != ((void*)0))
  *VAR_7 = VAR_15;
 FUNC_6(VAR_10, VAR_2);
 return (VAR_11);
}
