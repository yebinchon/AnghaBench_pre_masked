
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_pci_range {void* len; void* base; } ;
typedef int ranges ;
typedef int phandle_t ;
typedef int pcell_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,char*,int*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct mtk_pci_range*,int) ;
 scalar_t__ FUNC_3 (int ,int*,int*) ;
 void* FUNC_4 (void*,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(phandle_t VAR_4, struct mtk_pci_range *VAR_5,
    struct mtk_pci_range *VAR_6)
{
 struct mtk_pci_range *VAR_7;
 pcell_t VAR_8[VAR_3];
 pcell_t VAR_9, VAR_10, VAR_11;
 pcell_t *VAR_12;
 pcell_t VAR_13, VAR_14, VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;




 if ((FUNC_3(VAR_4, &VAR_9, &VAR_10)) != 0)
  return (VAR_0);
 if (VAR_9 != 3 || VAR_10 != 2)
  return (VAR_2);

 VAR_11 = FUNC_5(VAR_4);
 if (VAR_11 != 1)
  return (VAR_2);

 VAR_20 = FUNC_1(VAR_4, "ranges");
 if (VAR_20 > sizeof(VAR_8))
  return (VAR_1);

 if (FUNC_0(VAR_4, "ranges", VAR_8, sizeof(VAR_8)) <= 0)
  return (VAR_0);

 VAR_16 = sizeof(pcell_t) * (VAR_9 + VAR_11 +
     VAR_10);
 VAR_17 = VAR_20 / VAR_16;






 FUNC_2(VAR_5, sizeof(*VAR_5));
 FUNC_2(VAR_6, sizeof(*VAR_6));

 VAR_12 = &VAR_8[0];
 for (VAR_18 = 0; VAR_18 < VAR_17; VAR_18++) {
  VAR_13 = FUNC_4((void *)VAR_12, 1);
  VAR_12++;
  VAR_14 = FUNC_4((void *)VAR_12, 1);
  VAR_12++;
  VAR_15 = FUNC_4((void *)VAR_12, 1);
  VAR_12++;

  if (VAR_13 & 0x02000000) {
   VAR_7 = VAR_6;
  } else if (VAR_13 & 0x01000000) {
   VAR_7 = VAR_5;
  } else {
   VAR_19 = VAR_2;
   goto out;
  }

  VAR_7->base = FUNC_4((void *)VAR_12,
      VAR_11);
  VAR_12 += VAR_11;

  VAR_7->len = FUNC_4((void *)VAR_12, VAR_10);
  VAR_12 += VAR_10;
 }

 VAR_19 = 0;
out:
 return (VAR_19);
}
