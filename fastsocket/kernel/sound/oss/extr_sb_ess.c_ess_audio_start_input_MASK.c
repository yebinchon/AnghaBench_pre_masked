
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int intr_active; int irq_mode; } ;
typedef TYPE_2__ sb_devc ;
struct TYPE_8__ {TYPE_1__* dmap_in; TYPE_2__* devc; } ;
struct TYPE_6__ {int dma; } ;


 int VAR_0 ;
 TYPE_5__** VAR_1 ;
 int FUNC_0 (TYPE_2__*,int,int,int) ;
 int FUNC_1 (TYPE_2__*,int,unsigned char) ;

__attribute__((used)) static void FUNC_2
 (int VAR_2, unsigned long VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6 = VAR_4;
 sb_devc *VAR_7 = VAR_1[VAR_2]->devc;
 short VAR_8 = -VAR_4;





 if (VAR_1[VAR_2]->dmap_in->dma > 3) VAR_6 >>= 1;
 VAR_6--;

 VAR_7->irq_mode = VAR_0;

 FUNC_1 (VAR_7, 0xa4, (unsigned char) ((unsigned short) VAR_8 & 0xff));
 FUNC_1 (VAR_7, 0xa5, (unsigned char) (((unsigned short) VAR_8 >> 8) & 0xff));

 FUNC_0 (VAR_7, 0xb8, 0x0f, 0x0f);
 VAR_7->intr_active = 1;
}
