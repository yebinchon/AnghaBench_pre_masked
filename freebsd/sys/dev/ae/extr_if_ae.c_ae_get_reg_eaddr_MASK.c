
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int dev; } ;
typedef TYPE_1__ ae_softc_t ;


 scalar_t__ FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int
FUNC_3(ae_softc_t *VAR_4, uint32_t *VAR_5)
{




 VAR_5[0] = FUNC_1(VAR_4, VAR_0);
 VAR_5[1] = FUNC_1(VAR_4, VAR_1);
 VAR_5[1] &= 0xffff;

 if (FUNC_0(VAR_5) != 0) {
  if (VAR_3)
   FUNC_2(VAR_4->dev,
       "Ethernet address registers are invalid.\n");
  return (VAR_2);
 }
 return (0);
}
