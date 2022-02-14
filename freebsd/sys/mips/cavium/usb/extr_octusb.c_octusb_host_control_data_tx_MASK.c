
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct octusb_td {int error_any; scalar_t__ remainder; TYPE_1__* qh; int offset; int pc; } ;
struct TYPE_2__ {scalar_t__ fixup_len; scalar_t__ fixup_off; scalar_t__ fixup_buf; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (struct octusb_td*) ;
 int FUNC_2 (int ,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static uint8_t
FUNC_3(struct octusb_td *VAR_0)
{
 uint32_t VAR_1;


 if (FUNC_1(VAR_0))
  return (1);


 if (VAR_0->error_any)
  return (0);

 VAR_1 = VAR_0->qh->fixup_len - VAR_0->qh->fixup_off;

 if (VAR_0->remainder > VAR_1) {
  VAR_0->error_any = 1;
  FUNC_0(1, "Excess setup transmit data\n");
  return (0);
 }
 FUNC_2(VAR_0->pc, VAR_0->offset, VAR_0->qh->fixup_buf +
     VAR_0->qh->fixup_off + 8, VAR_0->remainder);

 VAR_0->offset += VAR_0->remainder;
 VAR_0->qh->fixup_off += VAR_0->remainder;
 VAR_0->remainder = 0;

 return (0);
}
