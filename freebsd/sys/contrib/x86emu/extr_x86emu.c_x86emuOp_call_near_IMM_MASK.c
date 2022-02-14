
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; scalar_t__ R_IP; scalar_t__ R_EIP; } ;
struct x86emu {TYPE_1__ x86; } ;
typedef scalar_t__ int32_t ;
typedef scalar_t__ int16_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct x86emu*) ;
 scalar_t__ FUNC_1 (struct x86emu*) ;
 int FUNC_2 (struct x86emu*,scalar_t__) ;
 int FUNC_3 (struct x86emu*,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct x86emu *VAR_1)
{
 if (VAR_1->x86.mode & VAR_0) {
  int32_t VAR_2;
  VAR_2 = (int32_t) FUNC_0(VAR_1);
  VAR_2 += (int32_t) VAR_1->x86.R_EIP;
  FUNC_2(VAR_1, VAR_1->x86.R_EIP);
  VAR_1->x86.R_EIP = VAR_2;
 } else {
  int16_t VAR_3;
  VAR_3 = (int16_t) FUNC_1(VAR_1);
  VAR_3 += (int16_t) VAR_1->x86.R_IP;
  FUNC_3(VAR_1, VAR_1->x86.R_IP);
  VAR_1->x86.R_IP = VAR_3;
 }
}
