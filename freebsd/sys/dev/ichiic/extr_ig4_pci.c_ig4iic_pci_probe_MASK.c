
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {int version; } ;
typedef TYPE_1__ ig4iic_softc_t ;
typedef int device_t ;
struct TYPE_6__ {scalar_t__ devid; int version; int desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 TYPE_2__* VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_3)
{
 ig4iic_softc_t *VAR_4 = FUNC_0(VAR_3);
 uint32_t VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(VAR_3);
 for (VAR_6 = 0; VAR_6 < FUNC_2(VAR_2); VAR_6++) {
  if (VAR_2[VAR_6].devid == VAR_5) {
   FUNC_1(VAR_3, VAR_2[VAR_6].desc);
   VAR_4->version = VAR_2[VAR_6].version;
   return (VAR_0);
  }
 }
 return (VAR_1);
}
