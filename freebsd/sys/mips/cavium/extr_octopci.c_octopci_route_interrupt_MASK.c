
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct octopci_softc {int dummy; } ;
typedef int device_t ;
struct TYPE_2__ {int board_type; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 () ;
 struct octopci_softc* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;
 unsigned int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_3, device_t VAR_4, int VAR_5)
{
 struct octopci_softc *VAR_6;
 unsigned VAR_7, VAR_8, VAR_9;
 unsigned VAR_10;

 VAR_6 = FUNC_1(VAR_3);

 if (FUNC_2(VAR_0))
  return (VAR_1 + VAR_5 - 1);

        VAR_7 = FUNC_3(VAR_4);
        VAR_8 = FUNC_5(VAR_4);
        VAR_9 = FUNC_4(VAR_4);
 switch (FUNC_0()->board_type) {
 default:
  break;
 }

 VAR_10 = VAR_8 + VAR_5 - 3;

 return (VAR_1 + (VAR_10 & 3));
}
