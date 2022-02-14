
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct e1000_hw_stats {int gorc; scalar_t__ roc; int prc1522; int prc1023; int prc511; int prc255; int prc127; int prc64; int mprc; int bprc; int gprc; int crcerrs; } ;
struct e1000_hw {int dummy; } ;


 int FUNC_0 (struct e1000_hw*) ;

void FUNC_1(struct e1000_hw *VAR_0,
      struct e1000_hw_stats *VAR_1, u32 VAR_2,
      u8 *VAR_3, u32 VAR_4)
{
 if (!(FUNC_0(VAR_0)))
  goto out;


 VAR_2--;






 VAR_1->crcerrs--;

 VAR_1->gprc++;


 VAR_1->gorc += VAR_2;






 if ((VAR_3[0] == 0xff) && (VAR_3[1] == 0xff))

  VAR_1->bprc++;
 else if (*VAR_3 & 0x01)

  VAR_1->mprc++;





 if ((VAR_2 == VAR_4) && (VAR_1->roc > 0))
  VAR_1->roc--;





 if (VAR_2 == 64) {
  VAR_1->prc64++;
  VAR_1->prc127--;
 } else if (VAR_2 == 127) {
  VAR_1->prc127++;
  VAR_1->prc255--;
 } else if (VAR_2 == 255) {
  VAR_1->prc255++;
  VAR_1->prc511--;
 } else if (VAR_2 == 511) {
  VAR_1->prc511++;
  VAR_1->prc1023--;
 } else if (VAR_2 == 1023) {
  VAR_1->prc1023++;
  VAR_1->prc1522--;
 } else if (VAR_2 == 1522) {
  VAR_1->prc1522++;
 }

out:
 return;
}
