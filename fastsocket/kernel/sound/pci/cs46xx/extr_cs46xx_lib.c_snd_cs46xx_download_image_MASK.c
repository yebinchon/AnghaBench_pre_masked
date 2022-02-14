
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_cs46xx {int dummy; } ;
struct TYPE_4__ {TYPE_1__* memory; int * map; } ;
struct TYPE_3__ {int size; int offset; } ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_cs46xx*,int *,int ,int) ;

int FUNC_1(struct snd_cs46xx *VAR_2)
{
 int VAR_3, VAR_4;
 unsigned long VAR_5 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if ((VAR_4 = FUNC_0(VAR_2,
            &VAR_0.map[VAR_5],
            VAR_0.memory[VAR_3].offset,
            VAR_0.memory[VAR_3].size)) < 0)
   return VAR_4;
  VAR_5 += VAR_0.memory[VAR_3].size >> 2;
 }
 return 0;
}
