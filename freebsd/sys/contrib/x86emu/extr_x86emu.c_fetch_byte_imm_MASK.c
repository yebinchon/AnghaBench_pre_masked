
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int R_IP; int R_CS; } ;
struct x86emu {TYPE_1__ x86; } ;


 int FUNC_0 (struct x86emu*,int ,int ) ;

__attribute__((used)) static uint8_t
FUNC_1(struct x86emu *VAR_0)
{
 uint8_t VAR_1;

 VAR_1 = FUNC_0(VAR_0, VAR_0->x86.R_CS, VAR_0->x86.R_IP);
 VAR_0->x86.R_IP++;
 return VAR_1;
}
