
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_4__ {int channel; int buffer; } ;
struct TYPE_3__ {int channel; int buffer; } ;
struct mss_info {TYPE_2__ rch; TYPE_1__ pch; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct mss_info*) ;
 int VAR_0 ;
 int FUNC_3 (struct mss_info*,int) ;
 int FUNC_4 (struct mss_info*,int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct mss_info*,int ) ;
 int FUNC_7 (struct mss_info*,int ,int ) ;
 int FUNC_8 (struct mss_info*) ;
 int FUNC_9 (struct mss_info*) ;
 int FUNC_10 (char*,...) ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static void
FUNC_12(void *VAR_1)
{
     struct mss_info *VAR_2 = VAR_1;
     u_char VAR_3 = 0, VAR_4 = 0;
     int VAR_5;

     FUNC_1(FUNC_10("mss_intr\n"));
 FUNC_8(VAR_2);
     FUNC_3(VAR_2, 11);


     for (VAR_5 = 10; VAR_5 > 0 && FUNC_6(VAR_2, VAR_0) & 1; VAR_5--) {

  VAR_3 = FUNC_2(VAR_2)? FUNC_3(VAR_2, 24) : 0x30;
  VAR_3 &= ~VAR_4;
  if (FUNC_11(VAR_2->pch.buffer) && (VAR_3 & 0x10)) {
       VAR_4 |= 0x10;
   FUNC_9(VAR_2);
       FUNC_5(VAR_2->pch.channel);
   FUNC_8(VAR_2);
  }
  if (FUNC_11(VAR_2->rch.buffer) && (VAR_3 & 0x20)) {
       VAR_4 |= 0x20;
   FUNC_9(VAR_2);
       FUNC_5(VAR_2->rch.channel);
   FUNC_8(VAR_2);
  }

  if (FUNC_2(VAR_2)) FUNC_4(VAR_2, 24, ~VAR_3);
  else FUNC_7(VAR_2, VAR_0, 0);
     }
     if (VAR_5 == 10) {
  FUNC_0(FUNC_10("mss_intr: irq, but not from mss\n"));
 } else if (VAR_4 == 0) {
  FUNC_0(FUNC_10("mss_intr: unexpected irq with reason %x\n", VAR_3));




  FUNC_7(VAR_2, VAR_0, 0);
     }
 FUNC_9(VAR_2);
}
