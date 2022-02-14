
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bios_regs {int ebx; int ecx; int eax; } ;
struct TYPE_2__ {int ventry; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bios_regs*,int ,int ) ;

__attribute__((used)) static int
FUNC_2(int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
 struct bios_regs VAR_9;

 VAR_9.eax = VAR_1;
 VAR_9.ebx = (VAR_4 << 8) | (VAR_5 << 3) | VAR_6;
 VAR_9.ecx = (VAR_8 << 8) | (0xa + VAR_7);
 return (FUNC_1(&VAR_9, VAR_2.ventry, FUNC_0(VAR_0, VAR_3)));
}
