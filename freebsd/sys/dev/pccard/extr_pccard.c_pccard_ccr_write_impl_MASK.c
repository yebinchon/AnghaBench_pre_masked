
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct pccard_ivar {struct pccard_function* pf; } ;
struct pccard_function {scalar_t__ pf_ccr_offset; int pf_ccrh; int pf_ccrt; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 struct pccard_ivar* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0, device_t VAR_1, uint32_t VAR_2,
    uint8_t VAR_3)
{
 struct pccard_ivar *VAR_4 = FUNC_1(VAR_1);
 struct pccard_function *VAR_5 = VAR_4->pf;





 FUNC_0((VAR_1, "ccr_write of %#x to %#x (%#x)\n", VAR_3, VAR_2,
   VAR_4->pf->pf_ccr_offset));
 FUNC_2(VAR_5->pf_ccrt, VAR_5->pf_ccrh, VAR_5->pf_ccr_offset + VAR_2,
     VAR_3);
 return 0;
}
