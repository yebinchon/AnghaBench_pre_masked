
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long trg_buf_16; int trg_bytes_16; int trg_intrflag_16; unsigned long trg_buf; int trg_bytes; int trg_intrflag; void* irq_mode; void* irq_mode_16; scalar_t__ duplex; } ;
typedef TYPE_1__ sb_devc ;
struct TYPE_4__ {TYPE_1__* devc; } ;


 void* VAR_0 ;
 TYPE_2__** VAR_1 ;

__attribute__((used)) static void FUNC_0
 (int VAR_2, unsigned long VAR_3, int VAR_4, int VAR_5)
{
 sb_devc *VAR_6 = VAR_1[VAR_2]->devc;

 if (VAR_6->duplex) {
  VAR_6->trg_buf_16 = VAR_3;
  VAR_6->trg_bytes_16 = VAR_4;
  VAR_6->trg_intrflag_16 = VAR_5;
  VAR_6->irq_mode_16 = VAR_0;
 } else {
  VAR_6->trg_buf = VAR_3;
  VAR_6->trg_bytes = VAR_4;
  VAR_6->trg_intrflag = VAR_5;
  VAR_6->irq_mode = VAR_0;
 }
}
