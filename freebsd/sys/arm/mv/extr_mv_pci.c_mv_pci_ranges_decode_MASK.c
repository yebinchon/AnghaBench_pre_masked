
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_pci_range {int base_parent; int len; int base_pci; } ;
typedef int ranges ;
typedef int phandle_t ;
typedef int pcell_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,char*,int*,int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_4 ;
 int FUNC_2 (struct mv_pci_range*,int) ;
 scalar_t__ FUNC_3 (int ,int*,int*) ;
 void* FUNC_4 (void*,int) ;
 int VAR_5 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(phandle_t VAR_6, struct mv_pci_range *VAR_7,
    struct mv_pci_range *VAR_8)
{
 pcell_t VAR_9[VAR_3];
 struct mv_pci_range *VAR_10;
 pcell_t VAR_11, VAR_12, VAR_13;
 pcell_t *VAR_14;
 pcell_t VAR_15, VAR_16, VAR_17;
 int VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
 int VAR_24, VAR_25;




 if ((FUNC_3(VAR_6, &VAR_11, &VAR_12)) != 0)
  return (VAR_0);
 if (VAR_11 != 3 || VAR_12 != 2)
  return (VAR_2);

 VAR_13 = FUNC_5(VAR_6);
 if (VAR_13 > 3)
  return (VAR_2);

 VAR_23 = FUNC_1(VAR_6, "ranges");
 if (VAR_23 > sizeof(VAR_9))
  return (VAR_1);

 if (FUNC_0(VAR_6, "ranges", VAR_9, sizeof(VAR_9)) <= 0)
  return (VAR_0);

 VAR_18 = sizeof(pcell_t) * (VAR_11 + VAR_13 +
     VAR_12);
 VAR_19 = VAR_23 / VAR_18;






 FUNC_2(VAR_7, sizeof(*VAR_7));
 FUNC_2(VAR_8, sizeof(*VAR_8));

 VAR_14 = &VAR_9[0];
 VAR_22 = 0;
 for (VAR_20 = 0; VAR_20 < VAR_19; VAR_20++) {
  VAR_15 = FUNC_4((void *)VAR_14, 1);
  VAR_14++;
  VAR_16 = FUNC_4((void *)VAR_14, 1);
  VAR_14++;
  VAR_17 = FUNC_4((void *)VAR_14, 1);
  VAR_14++;
  VAR_24 = FUNC_4((void *)(VAR_14+1), 1);

  if (VAR_15 & 0x02000000) {
   VAR_10 = VAR_8;
   VAR_25 = 0;
  } else if (VAR_15 & 0x01000000) {
   VAR_10 = VAR_7;
   VAR_25 = 1;
  } else {
   VAR_21 = VAR_2;
   goto out;
  }

  if (VAR_13 == 3) {




   VAR_22 = 2;
   VAR_14 += VAR_22;
  }

  if ((VAR_13 - VAR_22) > 2) {
   VAR_21 = VAR_2;
   goto out;
  }
  VAR_10->base_parent = FUNC_4((void *)VAR_14,
      VAR_13 - VAR_22);
  VAR_14 += VAR_13 - VAR_22;

  if (VAR_12 > 2) {
   VAR_21 = VAR_2;
   goto out;
  }
  VAR_10->len = FUNC_4((void *)VAR_14, VAR_12);
  VAR_14 += VAR_12;

  VAR_10->base_pci = VAR_17;

  if (VAR_10->len == 0) {
   VAR_10->len = VAR_4;
   VAR_10->base_parent = VAR_5 +
       VAR_4 * ( 2 * VAR_24 + VAR_25);
  }
 }
 VAR_21 = 0;
out:
 return (VAR_21);
}
