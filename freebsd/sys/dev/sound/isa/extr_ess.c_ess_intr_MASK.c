
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int hwch; scalar_t__ stopping; int buffer; scalar_t__ run; int channel; } ;
struct TYPE_3__ {int hwch; scalar_t__ stopping; int buffer; scalar_t__ run; int channel; } ;
struct ess_info {TYPE_2__ rch; TYPE_1__ pch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ess_info*,int) ;
 int FUNC_2 (struct ess_info*) ;
 int FUNC_3 (struct ess_info*,int) ;
 int FUNC_4 (struct ess_info*,int) ;
 int FUNC_5 (struct ess_info*,int,int) ;
 int FUNC_6 (struct ess_info*) ;
 int FUNC_7 (struct ess_info*,int,int) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static void
FUNC_9(void *VAR_2)
{
     struct ess_info *VAR_3 = (struct ess_info *)VAR_2;
 int VAR_4, VAR_5, VAR_6;

 FUNC_2(VAR_3);
 VAR_4 = 0;
 if (FUNC_1(VAR_3, 0x7a) & 0x80)
  VAR_4 |= 2;
 if (FUNC_3(VAR_3, 0x0c) & 0x01)
  VAR_4 |= 1;

 VAR_5 = (VAR_4 & VAR_3->pch.hwch)? 1 : 0;
 VAR_6 = (VAR_4 & VAR_3->rch.hwch)? 1 : 0;

 if (VAR_5) {
  if (VAR_3->pch.run) {
   FUNC_6(VAR_3);
   FUNC_0(VAR_3->pch.channel);
   FUNC_2(VAR_3);
  }
  if (VAR_3->pch.stopping) {
   VAR_3->pch.run = 0;
   FUNC_8(VAR_3->pch.buffer, VAR_1);
   VAR_3->pch.stopping = 0;
   if (VAR_3->pch.hwch == 1)
    FUNC_7(VAR_3, 0xb8, FUNC_4(VAR_3, 0xb8) & ~0x01);
   else
    FUNC_5(VAR_3, 0x78, FUNC_1(VAR_3, 0x78) & ~0x03);
  }
 }

 if (VAR_6) {
  if (VAR_3->rch.run) {
   FUNC_6(VAR_3);
   FUNC_0(VAR_3->rch.channel);
   FUNC_2(VAR_3);
  }
  if (VAR_3->rch.stopping) {
   VAR_3->rch.run = 0;
   FUNC_8(VAR_3->rch.buffer, VAR_1);
   VAR_3->rch.stopping = 0;

   FUNC_7(VAR_3, 0xb8, FUNC_4(VAR_3, 0xb8) & ~0x01);
  }
 }

 if (VAR_4 & 2)
  FUNC_5(VAR_3, 0x7a, FUNC_1(VAR_3, 0x7a) & ~0x80);
 if (VAR_4 & 1)
      FUNC_3(VAR_3, VAR_0);
 FUNC_6(VAR_3);
}
