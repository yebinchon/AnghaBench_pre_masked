
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* device_t ;
struct TYPE_3__ {scalar_t__ dev_softc_alloc; int * dev_sc; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

void
FUNC_1(device_t VAR_1, void *VAR_2)
{
 if (VAR_1->dev_softc_alloc) {
  FUNC_0(VAR_1->dev_sc, VAR_0);
  VAR_1->dev_sc = ((void*)0);
 }
 VAR_1->dev_sc = VAR_2;
 VAR_1->dev_softc_alloc = 0;
}
