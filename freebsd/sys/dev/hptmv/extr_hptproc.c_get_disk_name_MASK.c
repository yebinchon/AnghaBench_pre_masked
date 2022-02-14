
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_7__ {int * ModelNumber; } ;
struct TYPE_6__ {scalar_t__ identifyDevice; } ;
struct TYPE_5__ {TYPE_2__* mv; } ;
typedef TYPE_1__* PDevice ;
typedef TYPE_2__ MV_SATA_CHANNEL ;
typedef TYPE_3__ IDENTIFY_DATA2 ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(char *VAR_0, PDevice VAR_1)
{
 int VAR_2;
 MV_SATA_CHANNEL *VAR_3 = VAR_1->mv;
 IDENTIFY_DATA2 *VAR_4 = (IDENTIFY_DATA2 *)VAR_3->identifyDevice;

 for (VAR_2 = 0; VAR_2 < 10; VAR_2++)
  ((WORD*)VAR_0)[VAR_2] = FUNC_0(VAR_4->ModelNumber[VAR_2]);
 VAR_0[20] = '\0';
}
