
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct pccard_ivar {TYPE_1__* pf; } ;
typedef int device_t ;
struct TYPE_2__ {int pf_ccr_offset; } ;


 int FUNC_0 (int ) ;
 struct pccard_ivar* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0, device_t VAR_1, uint32_t VAR_2,
    uint8_t *VAR_3)
{
 struct pccard_ivar *VAR_4 = FUNC_1(VAR_1);

 *VAR_3 = FUNC_2(VAR_4->pf, VAR_2);
 FUNC_0((VAR_1, "ccr_read of %#x (%#x) is %#x\n", VAR_2,
   VAR_4->pf->pf_ccr_offset, *VAR_3));
 return 0;
}
