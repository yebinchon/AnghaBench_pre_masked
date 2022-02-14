
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_prioq {int cells; } ;


 int FUNC_0 (char*) ;

int FUNC_1(struct snd_seq_prioq * VAR_0)
{
 if (VAR_0 == ((void*)0)) {
  FUNC_0("oops: snd_seq_prioq_cell_in() called with NULL prioq\n");
  return 0;
 }
 return VAR_0->cells;
}
