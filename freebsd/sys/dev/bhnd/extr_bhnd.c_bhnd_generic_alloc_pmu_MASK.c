
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uint32_t ;
typedef int u_int ;
struct resource_list_entry {int * res; } ;
struct resource_list {int dummy; } ;
struct bhnd_softc {int dev; } ;
struct bhnd_resource {int direct; int * res; } ;
struct bhnd_core_clkctl {int dummy; } ;
typedef scalar_t__ device_t ;
typedef int bus_size_t ;
typedef int bhnd_size_t ;
typedef int bhnd_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct resource_list* FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct bhnd_core_clkctl* FUNC_1 (scalar_t__,scalar_t__,struct bhnd_resource*,int,int ) ;
 struct bhnd_core_clkctl* FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ,int ,int ,int*,int*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (scalar_t__,struct bhnd_core_clkctl*) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 struct bhnd_softc* FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__,char*,...) ;
 int FUNC_12 (struct bhnd_resource*,int ) ;
 struct bhnd_resource* FUNC_13 (int,int ,int ) ;
 int FUNC_14 (char*,int ) ;
 struct resource_list_entry* FUNC_15 (struct resource_list*,int ,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;

int
FUNC_19(device_t VAR_12, device_t VAR_13)
{
 struct bhnd_softc *VAR_14;
 struct bhnd_resource *VAR_15;
 struct bhnd_core_clkctl *VAR_16;
 struct resource_list *VAR_17;
 struct resource_list_entry *VAR_18;
 device_t VAR_19;
 bhnd_addr_t VAR_20;
 bhnd_size_t VAR_21;
 bus_size_t VAR_22;
 u_int VAR_23;
 int VAR_24;

 VAR_7;

 if (FUNC_9(VAR_13) != VAR_12)
  return (VAR_3);

 VAR_14 = FUNC_10(VAR_12);
 VAR_16 = FUNC_2(VAR_13);
 VAR_22 = VAR_0;


 if (VAR_16 != ((void*)0)) {
  FUNC_14("duplicate PMU allocation for %s",
      FUNC_8(VAR_13));
 }


 VAR_24 = FUNC_3(VAR_13, VAR_1, 0, 0, &VAR_20,
     &VAR_21);
 if (VAR_24) {
  FUNC_11(VAR_14->dev, "error fetching register block info for "
      "%s: %d\n", FUNC_8(VAR_13), VAR_24);
  return (VAR_24);
 }

 if (VAR_21 < (VAR_22 + sizeof(uint32_t))) {
  FUNC_11(VAR_14->dev, "pmu offset %#jx would overrun %s "
      "register block\n", (uintmax_t)VAR_22,
      FUNC_8(VAR_13));
  return (VAR_4);
 }


 if ((VAR_17 = FUNC_0(VAR_12, VAR_13)) == ((void*)0)) {
  FUNC_11(VAR_12, "NULL resource list returned for %s\n",
      FUNC_8(VAR_13));
  return (VAR_6);
 }

 if ((VAR_18 = FUNC_15(VAR_17, VAR_11, 0)) == ((void*)0)) {
  FUNC_11(VAR_12, "cannot locate core register resource "
      "for %s\n", FUNC_8(VAR_13));
  return (VAR_6);
 }

 if (VAR_18->res == ((void*)0)) {
  FUNC_11(VAR_12, "core register resource unallocated for "
      "%s\n", FUNC_8(VAR_13));
  return (VAR_6);
 }

 if (VAR_20+VAR_22 < FUNC_18(VAR_18->res) ||
     VAR_20+VAR_22 >= FUNC_16(VAR_18->res))
 {
  FUNC_11(VAR_12, "core register resource does not map PMU "
      "registers at %#jx\n for %s\n", VAR_20+VAR_22,
      FUNC_8(VAR_13));
  return (VAR_6);
 }







 if (FUNC_18(VAR_18->res) > VAR_20)
  VAR_22 -= FUNC_18(VAR_18->res) - VAR_20;
 else
  VAR_22 -= VAR_20 - FUNC_18(VAR_18->res);


 VAR_19 = FUNC_6(VAR_13, VAR_2);
 if (VAR_19 == ((void*)0)) {
  FUNC_11(VAR_14->dev, "PMU not found\n");
  return (VAR_6);
 }


 VAR_23 = FUNC_4(VAR_19);




 VAR_15 = FUNC_13(sizeof(struct bhnd_resource), VAR_8, VAR_9);
 if (VAR_15 == ((void*)0)) {
  FUNC_5(VAR_13, VAR_19, VAR_2);
  return (VAR_5);
 }

 VAR_15->res = VAR_18->res;
 VAR_15->direct = ((FUNC_17(VAR_18->res) & VAR_10) != 0);


 VAR_16 = FUNC_1(VAR_13, VAR_19, VAR_15, VAR_22,
     VAR_23);
 if (VAR_16 == ((void*)0)) {
  FUNC_12(VAR_15, VAR_8);
  FUNC_5(VAR_13, VAR_19, VAR_2);
  return (VAR_5);
 }

 FUNC_7(VAR_13, VAR_16);
 return (0);
}
