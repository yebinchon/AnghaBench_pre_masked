
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ intr_mask; } ;
typedef TYPE_1__ ig4iic_softc_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(ig4iic_softc_t *VAR_1, uint32_t VAR_2)
{
 if (VAR_1->intr_mask != VAR_2) {
  FUNC_0(VAR_1, VAR_0, VAR_2);
  VAR_1->intr_mask = VAR_2;
 }
}
