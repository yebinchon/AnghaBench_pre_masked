
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_2__ {int startrid; int ** cookie; struct resource** res; } ;
struct pptdev {TYPE_1__ msix; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,struct resource*) ;
 int FUNC_1 (int ,struct resource*,void*) ;

__attribute__((used)) static void
FUNC_2(struct pptdev *VAR_1, int VAR_2)
{
 int VAR_3;
 struct resource *VAR_4;
 void *VAR_5;

 VAR_3 = VAR_1->msix.startrid + VAR_2;
 VAR_4 = VAR_1->msix.res[VAR_2];
 VAR_5 = VAR_1->msix.cookie[VAR_2];

 if (VAR_5 != ((void*)0))
  FUNC_1(VAR_1->dev, VAR_4, VAR_5);

 if (VAR_4 != ((void*)0))
  FUNC_0(VAR_1->dev, VAR_0, VAR_3, VAR_4);

 VAR_1->msix.res[VAR_2] = ((void*)0);
 VAR_1->msix.cookie[VAR_2] = ((void*)0);
}
