
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint64_t ;
typedef size_t uint32_t ;
struct pvscsi_softc {int dev; } ;
struct pvscsi_dma {size_t paddr; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct pvscsi_softc*,struct pvscsi_dma*,size_t,size_t) ;

__attribute__((used)) static int
FUNC_2(struct pvscsi_softc *VAR_2, struct pvscsi_dma *VAR_3,
    uint64_t *VAR_4, uint32_t VAR_5)
{
 int VAR_6;
 uint32_t VAR_7;
 uint64_t VAR_8;

 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_5 * VAR_1, VAR_1);
 if (VAR_6) {
  FUNC_0(VAR_2->dev, "Error allocating pages, error %d\n",
      VAR_6);
  return (VAR_6);
 }

 VAR_8 = VAR_3->paddr >> VAR_0;
 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_4[VAR_7] = VAR_8 + VAR_7;
 }

 return (0);
}
