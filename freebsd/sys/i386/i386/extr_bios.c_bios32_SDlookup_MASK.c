
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bios_regs {int eax; scalar_t__ edx; scalar_t__ ecx; scalar_t__ ebx; } ;
struct TYPE_2__ {int id; } ;
struct bios32_SDentry {scalar_t__ entry; scalar_t__ base; int ventry; scalar_t__ len; TYPE_1__ ident; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct bios_regs*,scalar_t__,int ) ;
 scalar_t__ VAR_2 ;

int
FUNC_3(struct bios32_SDentry *VAR_3)
{
    struct bios_regs VAR_4;

    if (VAR_2 == 0)
 return (1);

    VAR_4.eax = VAR_3->ident.id;
    VAR_4.ebx = VAR_4.ecx = VAR_4.edx = 0;
    FUNC_2(&VAR_4, VAR_2, FUNC_1(VAR_0, VAR_1));
    if ((VAR_4.eax & 0xff) == 0) {
 VAR_3->base = VAR_4.ebx;
 VAR_3->len = VAR_4.ecx;
 VAR_3->entry = VAR_4.edx;
 VAR_3->ventry = FUNC_0(VAR_3->base + VAR_3->entry);
 return (0);
    }
    return (1);
}
