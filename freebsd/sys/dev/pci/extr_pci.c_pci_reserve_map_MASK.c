
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_int ;
struct resource_list {int dummy; } ;
struct resource {int dummy; } ;
struct pci_map {int pm_size; int pm_value; } ;
struct pci_devinfo {int cfg; struct resource_list resources; } ;
typedef int rman_res_t ;
typedef int pci_addr_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 struct pci_devinfo* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int,int,int,...) ;
 struct pci_map* FUNC_7 (int ,int,int,int) ;
 scalar_t__ FUNC_8 (int ,int) ;
 struct pci_map* FUNC_9 (int ,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,int,int*,int*,int *) ;
 int FUNC_12 (int ,int ,int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int ,struct pci_map*,int) ;
 int FUNC_15 (int ,int ,int,int) ;
 int FUNC_16 (struct resource_list*,int,int,int,int,int) ;
 int FUNC_17 (struct resource_list*,int,int) ;
 struct resource* FUNC_18 (struct resource_list*,int ,int ,int,int*,int,int,int,int) ;
 int FUNC_19 (struct resource*) ;

__attribute__((used)) static struct resource *
FUNC_20(device_t VAR_10, device_t VAR_11, int VAR_12, int *VAR_13,
    rman_res_t VAR_14, rman_res_t VAR_15, rman_res_t VAR_16, u_int VAR_17,
    u_int VAR_18)
{
 struct pci_devinfo *VAR_19 = FUNC_4(VAR_11);
 struct resource_list *VAR_20 = &VAR_19->resources;
 struct resource *VAR_21;
 struct pci_map *VAR_22;
 uint16_t VAR_23;
 pci_addr_t VAR_24, VAR_25;
 int VAR_26;

 VAR_21 = ((void*)0);


 if (FUNC_8(VAR_11, *VAR_13))
  goto out;

 VAR_22 = FUNC_9(VAR_11, *VAR_13);
 if (VAR_22 != ((void*)0)) {

  VAR_26 = VAR_22->pm_size;
  VAR_24 = VAR_22->pm_value;
 } else {
  FUNC_11(VAR_11, *VAR_13, &VAR_24, &VAR_25, ((void*)0));





  if (FUNC_0(&VAR_19->cfg, *VAR_13))
   VAR_26 = FUNC_13(VAR_25);
  else
   VAR_26 = FUNC_10(VAR_25);
  if (VAR_26 == 0)
   goto out;
  VAR_22 = FUNC_7(VAR_11, *VAR_13, VAR_24, VAR_26);
 }

 if (FUNC_1(VAR_24) || FUNC_0(&VAR_19->cfg, *VAR_13)) {
  if (VAR_12 != VAR_8) {
   if (VAR_9)
    FUNC_6(VAR_10,
        "child %s requested type %d for rid %#x,"
        " but the BAR says it is an memio\n",
        FUNC_5(VAR_11), VAR_12, *VAR_13);
   goto out;
  }
 } else {
  if (VAR_12 != VAR_7) {
   if (VAR_9)
    FUNC_6(VAR_10,
        "child %s requested type %d for rid %#x,"
        " but the BAR says it is an ioport\n",
        FUNC_5(VAR_11), VAR_12, *VAR_13);
   goto out;
  }
 }
 VAR_16 = ((pci_addr_t)1 << VAR_26) * VAR_17;
 if (FUNC_2(VAR_18) < VAR_26)
  VAR_18 = (VAR_18 & ~VAR_5) | FUNC_3(VAR_26);
 if (FUNC_1(VAR_24) && (VAR_24 & VAR_0))
  VAR_18 |= VAR_6;





 FUNC_16(VAR_20, VAR_12, *VAR_13, VAR_14, VAR_15, VAR_16);
 VAR_21 = FUNC_18(VAR_20, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15,
     VAR_16, VAR_18 & ~VAR_4);
 if (VAR_21 == ((void*)0)) {
  FUNC_17(VAR_20, VAR_12, *VAR_13);
  FUNC_6(VAR_11,
      "%#jx bytes of rid %#x res %d failed (%#jx, %#jx).\n",
      VAR_16, *VAR_13, VAR_12, VAR_14, VAR_15);
  goto out;
 }
 if (VAR_9)
  FUNC_6(VAR_11,
      "Lazy allocation of %#jx bytes rid %#x type %d at %#jx\n",
      VAR_16, *VAR_13, VAR_12, FUNC_19(VAR_21));


 VAR_23 = FUNC_12(VAR_11, VAR_3, 2);
 FUNC_15(VAR_11, VAR_3,
     VAR_23 & ~(FUNC_1(VAR_24) ? VAR_1 : VAR_2), 2);

 VAR_24 = FUNC_19(VAR_21);
 FUNC_14(VAR_11, VAR_22, VAR_24);


 FUNC_15(VAR_11, VAR_3, VAR_23, 2);
out:
 return (VAR_21);
}
