
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct aac_softc {int aac_max_msix; int* aac_irq_rid; void** aac_intr; TYPE_1__* aac_msix; int aac_dev; struct resource** aac_irq; scalar_t__ msi_tupelo; scalar_t__ msi_enabled; } ;
struct TYPE_2__ {int vector_no; struct aac_softc* sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,struct resource*,int,int *,int ,TYPE_1__*,void**) ;
 int VAR_6 ;
 struct resource* FUNC_1 (int ,int ,int*,int) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int
FUNC_3(struct aac_softc *VAR_7)
{
 int VAR_8, VAR_9, VAR_10;
 struct resource *VAR_11;
 void *VAR_12;

 VAR_9 = VAR_7->aac_max_msix;
 VAR_10 = ((VAR_7->msi_enabled || VAR_7->msi_tupelo)? 1:0);

 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++, VAR_10++) {
  if ((VAR_11 = FUNC_1(VAR_7->aac_dev,VAR_5, &VAR_10,
   VAR_4 | VAR_3)) == ((void*)0)) {
   FUNC_2(VAR_7->aac_dev,"can't allocate interrupt\n");
   return (VAR_0);
  }
  VAR_7->aac_irq_rid[VAR_8] = VAR_10;
  VAR_7->aac_irq[VAR_8] = VAR_11;
  if (FUNC_0(VAR_7->aac_dev, VAR_11,
   VAR_1 | VAR_2, ((void*)0),
   VAR_6, &VAR_7->aac_msix[VAR_8], &VAR_12)) {
   FUNC_2(VAR_7->aac_dev, "can't set up interrupt\n");
   return (VAR_0);
  }
  VAR_7->aac_msix[VAR_8].vector_no = VAR_8;
  VAR_7->aac_msix[VAR_8].sc = VAR_7;
  VAR_7->aac_intr[VAR_8] = VAR_12;
 }

 return (0);
}
