
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_2__ {int channel; } ;
struct au_info {int unit; TYPE_1__ pch; int interrupts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct au_info*,int ,int ,int) ;
 int FUNC_1 (struct au_info*,int ,int ,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int,...) ;

__attribute__((used)) static void
FUNC_4 (void *VAR_11)
{
 struct au_info *VAR_12 = VAR_11;
 u_int32_t VAR_13, VAR_14;

 VAR_12->interrupts++;
 VAR_13=FUNC_0(VAR_12, 0, VAR_5, 4);
 FUNC_3("pcm%d: interrupt with src %x\n", VAR_12->unit, VAR_13);
 if (VAR_13 & VAR_1) FUNC_3("pcm%d: fatal error irq\n", VAR_12->unit);
 if (VAR_13 & VAR_2) FUNC_3("pcm%d: parity error irq\n", VAR_12->unit);
 if (VAR_13 & VAR_4) {
  (void)FUNC_0(VAR_12, 0, VAR_6, 4);
  FUNC_1(VAR_12, 0, VAR_6, 0, 4);
  FUNC_1(VAR_12, 0, VAR_6, 0x10000, 4);
 }
 if (VAR_13 & VAR_3) {
         VAR_14=FUNC_0(VAR_12, 0, VAR_7, 4) & (VAR_0-1);
         FUNC_2(VAR_12->pch.channel);
  (void)FUNC_0(VAR_12, 0, VAR_8, 4);
  (void)FUNC_0(VAR_12, 0, VAR_9, 4);
  (void)FUNC_0(VAR_12, 0, VAR_10, 4);
 }
 FUNC_1(VAR_12, 0, VAR_5, VAR_13 & 0x7ff, 4);
 FUNC_0(VAR_12, 0, VAR_5, 4);
}
