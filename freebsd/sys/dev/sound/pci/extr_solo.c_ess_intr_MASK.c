
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int hwch; int channel; scalar_t__ stopping; } ;
struct TYPE_3__ {int hwch; int channel; scalar_t__ stopping; } ;
struct ess_info {scalar_t__ simplex_dir; TYPE_2__ rch; TYPE_1__ pch; scalar_t__ duplex; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ess_info*,int,int ) ;
 int FUNC_3 (struct ess_info*,int) ;
 int FUNC_4 (struct ess_info*) ;
 int FUNC_5 (struct ess_info*,int) ;
 int FUNC_6 (struct ess_info*,int) ;
 int FUNC_7 (struct ess_info*,int,int) ;
 int FUNC_8 (struct ess_info*) ;
 int FUNC_9 (struct ess_info*,int,int) ;
 int FUNC_10 (char*,...) ;

__attribute__((used)) static void
FUNC_11(void *VAR_3)
{
     struct ess_info *VAR_4 = (struct ess_info *)VAR_3;
 int VAR_5, VAR_6 = 0, VAR_7 = 0;

 FUNC_4(VAR_4);
 VAR_5 = 0;
 if (FUNC_3(VAR_4, 0x7a) & 0x80)
  VAR_5 |= 2;
 if (FUNC_5(VAR_4, 0x0c) & 0x01)
  VAR_5 |= 1;

 if (VAR_5 == 0) {
  FUNC_8(VAR_4);
  return;
 }

 if (VAR_4->duplex) {
  VAR_6 = (VAR_5 & VAR_4->pch.hwch)? 1 : 0;
  VAR_7 = (VAR_5 & VAR_4->rch.hwch)? 1 : 0;
 } else {
  if (VAR_4->simplex_dir == VAR_1)
   VAR_6 = 1;
  if (VAR_4->simplex_dir == VAR_2)
   VAR_7 = 1;
  if (!VAR_6 && !VAR_7)
   FUNC_10("solo: IRQ neither playback nor rec!\n");
 }

 FUNC_0(FUNC_10("ess_intr: pirq:%d rirq:%d\n",VAR_6,VAR_7));

 if (VAR_6) {
  if (VAR_4->pch.stopping) {
   FUNC_2(VAR_4, VAR_4->pch.hwch, 0);
   VAR_4->pch.stopping = 0;
   if (VAR_4->pch.hwch == 1)
    FUNC_9(VAR_4, 0xb8, FUNC_6(VAR_4, 0xb8) & ~0x01);
   else
    FUNC_7(VAR_4, 0x78, FUNC_3(VAR_4, 0x78) & ~0x03);
  }
  FUNC_8(VAR_4);
  FUNC_1(VAR_4->pch.channel);
  FUNC_4(VAR_4);
 }

 if (VAR_7) {
  if (VAR_4->rch.stopping) {
   FUNC_2(VAR_4, VAR_4->rch.hwch, 0);
   VAR_4->rch.stopping = 0;

   FUNC_9(VAR_4, 0xb8, FUNC_6(VAR_4, 0xb8) & ~0x01);
  }
  FUNC_8(VAR_4);
  FUNC_1(VAR_4->rch.channel);
  FUNC_4(VAR_4);
 }

 if (VAR_5 & 2)
  FUNC_7(VAR_4, 0x7a, FUNC_3(VAR_4, 0x7a) & ~0x80);
 if (VAR_5 & 1)
      FUNC_5(VAR_4, VAR_0);

 FUNC_8(VAR_4);
}
