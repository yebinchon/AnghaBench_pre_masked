
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct control_runtime {int ovol_updated; scalar_t__* output_vol; TYPE_1__* chip; } ;
struct comm_runtime {int (* write8 ) (struct comm_runtime*,int,int,scalar_t__) ;} ;
struct TYPE_2__ {struct comm_runtime* comm; } ;


 int FUNC_0 (struct comm_runtime*,int,int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct control_runtime *VAR_0)
{
 struct comm_runtime *VAR_1 = VAR_0->chip->comm;
 int VAR_2;

 if (VAR_1)
  for (VAR_2 = 0; VAR_2 < 6; VAR_2++)
   if (!(VAR_0->ovol_updated & (1 << VAR_2))) {
    VAR_1->write8(VAR_1, 0x12, 0x0f + VAR_2,
     180 - VAR_0->output_vol[VAR_2]);
    VAR_0->ovol_updated |= 1 << VAR_2;
   }
}
