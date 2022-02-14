
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int q_len; } ;
struct snd_queue {int head; TYPE_1__ dmem; int free_cnt; } ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static void
FUNC_1(struct snd_queue *VAR_0, int VAR_1)
{

 FUNC_0(&VAR_0->free_cnt, VAR_1);
 VAR_0->head += VAR_1;
 VAR_0->head &= (VAR_0->dmem.q_len - 1);
}
