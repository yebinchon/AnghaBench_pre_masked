
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int (* ac97_switch ) (struct oxygen*,unsigned int,int) ;} ;
struct oxygen {TYPE_2__** controls; int card; TYPE_1__ model; } ;
struct TYPE_4__ {int private_value; int id; } ;


 int VAR_0 ;
 int FUNC_0 (struct oxygen*,int ,unsigned int) ;
 int FUNC_1 (struct oxygen*,int ,unsigned int,int) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (struct oxygen*,unsigned int,int) ;

__attribute__((used)) static void FUNC_4(struct oxygen *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3;
 u16 VAR_4;

 if (!VAR_1->controls[VAR_2])
  return;
 VAR_3 = VAR_1->controls[VAR_2]->private_value & 0xff;
 VAR_4 = FUNC_0(VAR_1, 0, VAR_3);
 if (!(VAR_4 & 0x8000)) {
  FUNC_1(VAR_1, 0, VAR_3, VAR_4 | 0x8000);
  if (VAR_1->model.ac97_switch)
   VAR_1->model.ac97_switch(VAR_1, VAR_3, 0x8000);
  FUNC_2(VAR_1->card, VAR_0,
          &VAR_1->controls[VAR_2]->id);
 }
}
