
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct vpd_readstate {int bytesinval; int off; int val; int cksum; int cfg; int pcib; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int,int *) ;

__attribute__((used)) static int
FUNC_2(struct vpd_readstate *VAR_1, uint8_t *VAR_2)
{
 uint32_t VAR_3;
 uint8_t VAR_4;

 if (VAR_1->bytesinval == 0) {
  if (FUNC_1(VAR_1->pcib, VAR_1->cfg, VAR_1->off, &VAR_3))
   return (VAR_0);
  VAR_1->val = FUNC_0(VAR_3);
  VAR_1->off += 4;
  VAR_4 = VAR_1->val & 0xff;
  VAR_1->bytesinval = 3;
 } else {
  VAR_1->val = VAR_1->val >> 8;
  VAR_4 = VAR_1->val & 0xff;
  VAR_1->bytesinval--;
 }

 VAR_1->cksum += VAR_4;
 *VAR_2 = VAR_4;
 return (0);
}
