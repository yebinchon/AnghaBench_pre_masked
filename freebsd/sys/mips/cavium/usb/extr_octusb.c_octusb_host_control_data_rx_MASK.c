
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct octusb_td {scalar_t__ remainder; TYPE_1__* qh; int offset; int pc; scalar_t__ error_any; } ;
struct TYPE_2__ {scalar_t__ fixup_actlen; scalar_t__ fixup_off; scalar_t__ fixup_buf; } ;


 scalar_t__ FUNC_0 (struct octusb_td*) ;
 int FUNC_1 (int ,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static uint8_t
FUNC_2(struct octusb_td *VAR_0)
{
 uint32_t VAR_1;


 if (FUNC_0(VAR_0))
  return (1);


 if (VAR_0->error_any)
  return (0);


 VAR_1 = VAR_0->qh->fixup_actlen - VAR_0->qh->fixup_off;

 if (VAR_1 > VAR_0->remainder)
  VAR_1 = VAR_0->remainder;

 FUNC_1(VAR_0->pc, VAR_0->offset, VAR_0->qh->fixup_buf +
     VAR_0->qh->fixup_off + 8, VAR_1);

 VAR_0->offset += VAR_1;
 VAR_0->remainder -= VAR_1;
 VAR_0->qh->fixup_off += VAR_1;

 return (0);
}
