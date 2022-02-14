
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct sc_info {int currbank; int lock; TYPE_2__* rch; TYPE_1__* pch; int dev; } ;
struct TYPE_4__ {int channel; scalar_t__ run; } ;
struct TYPE_3__ {int channel; scalar_t__ run; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct sc_info*,int ,int) ;
 int FUNC_3 (struct sc_info*,int ,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(void *VAR_4)
{
 struct sc_info *VAR_5 = (struct sc_info *)VAR_4;
 u_int32_t VAR_6, VAR_7;

 FUNC_4(VAR_5->lock);
 VAR_6 = FUNC_2(VAR_5, VAR_3, 4);
 if (VAR_6 & 0x00008000)
  FUNC_1(VAR_5->dev, "timeout irq\n");
 if (VAR_6 & 0x80008000) {
  FUNC_3(VAR_5, VAR_3, VAR_6 & 0x80008000, 4);
  VAR_5->currbank = FUNC_2(VAR_5, VAR_1, 4) & 0x00000001;

  VAR_7 = 0;
  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
   if (VAR_5->pch[VAR_6].run) {
    VAR_7 = 1;
    FUNC_5(VAR_5->lock);
    FUNC_0(VAR_5->pch[VAR_6].channel);
    FUNC_4(VAR_5->lock);
   }
  }
  for (VAR_6 = 0; VAR_6 < 2; VAR_6++) {
   if (VAR_5->rch[VAR_6].run) {
    VAR_7 = 1;
    FUNC_5(VAR_5->lock);
    FUNC_0(VAR_5->rch[VAR_6].channel);
    FUNC_4(VAR_5->lock);
   }
  }
  VAR_6 = FUNC_2(VAR_5, VAR_2, 4);
  if (VAR_7)
   FUNC_3(VAR_5, VAR_2, VAR_6 | 0x00000002, 4);

 }
 FUNC_5(VAR_5->lock);
}
