
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct resource* msix_res; } ;
struct sfxge_softc {TYPE_1__ intr; int dev; } ;
struct resource {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,struct resource*) ;
 int FUNC_1 (struct resource*) ;

__attribute__((used)) static void
FUNC_2(struct sfxge_softc *VAR_1)
{
 device_t VAR_2;
 struct resource *VAR_3;
 int VAR_4;

 VAR_2 = VAR_1->dev;
 VAR_3 = VAR_1->intr.msix_res;

 VAR_4 = FUNC_1(VAR_3);
 FUNC_0(VAR_2, VAR_0, VAR_4, VAR_3);
}
