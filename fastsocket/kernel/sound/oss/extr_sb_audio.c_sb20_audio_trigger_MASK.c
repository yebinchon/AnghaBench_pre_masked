
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int irq_mode; int trigger_bits; int trg_intrflag; int trg_bytes; int trg_buf; } ;
typedef TYPE_1__ sb_devc ;
struct TYPE_5__ {TYPE_1__* devc; } ;




 TYPE_3__** VAR_0 ;
 int FUNC_0 (int,int ,int ,int ) ;
 int FUNC_1 (int,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_3(int VAR_1, int VAR_2)
{
 sb_devc *VAR_3 = VAR_0[VAR_1]->devc;
 VAR_2 &= VAR_3->irq_mode;

 if (!VAR_2)
  FUNC_2(VAR_3, 0xd0);
 else
 {
  switch (VAR_3->irq_mode)
  {
   case 129:
    FUNC_1(VAR_1, VAR_3->trg_buf, VAR_3->trg_bytes,
      VAR_3->trg_intrflag);
    break;

   case 128:
    FUNC_0(VAR_1, VAR_3->trg_buf, VAR_3->trg_bytes,
      VAR_3->trg_intrflag);
       break;
  }
 }
 VAR_3->trigger_bits = VAR_2;
}
