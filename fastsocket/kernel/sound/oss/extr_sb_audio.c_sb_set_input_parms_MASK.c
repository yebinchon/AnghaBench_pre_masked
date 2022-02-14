
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ bits; unsigned long trg_buf; int trg_bytes; int trg_intrflag; unsigned long trg_buf_16; int trg_bytes_16; int trg_intrflag_16; void* irq_mode_16; void* irq_mode; int fullduplex; } ;
typedef TYPE_1__ sb_devc ;
struct TYPE_4__ {TYPE_1__* devc; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 TYPE_2__** VAR_2 ;

__attribute__((used)) static void FUNC_0(int VAR_3, unsigned long VAR_4, int VAR_5, int VAR_6)
{
 sb_devc *VAR_7 = VAR_2[VAR_3]->devc;

 if (!VAR_7->fullduplex || VAR_7->bits != VAR_0)
 {
  VAR_7->trg_buf = VAR_4;
  VAR_7->trg_bytes = VAR_5;
  VAR_7->trg_intrflag = VAR_6;
  VAR_7->irq_mode = VAR_1;
 }
 else
 {
  VAR_7->trg_buf_16 = VAR_4;
  VAR_7->trg_bytes_16 = VAR_5;
  VAR_7->trg_intrflag_16 = VAR_6;
  VAR_7->irq_mode_16 = VAR_1;
 }
}
