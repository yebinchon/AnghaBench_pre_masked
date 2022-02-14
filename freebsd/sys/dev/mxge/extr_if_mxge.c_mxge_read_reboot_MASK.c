
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int dev; } ;
typedef TYPE_1__ mxge_softc_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int) ;
 int FUNC_3 (int ,scalar_t__,int,int) ;

__attribute__((used)) static uint32_t
FUNC_4(mxge_softc_t *VAR_1)
{
 device_t VAR_2 = VAR_1->dev;
 uint32_t VAR_3;


 if (FUNC_1(VAR_2, VAR_0, &VAR_3) != 0) {
  FUNC_0(VAR_1->dev,
         "could not find vendor specific offset\n");
  return (uint32_t)-1;
 }

 FUNC_3(VAR_2, VAR_3 + 0x10, 0x3, 1);

 FUNC_3(VAR_2, VAR_3 + 0x18, 0xfffffff0, 4);
 return (FUNC_2(VAR_2, VAR_3 + 0x14, 4));
}
