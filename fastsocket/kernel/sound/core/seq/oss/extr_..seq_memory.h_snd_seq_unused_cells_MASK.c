
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_pool {int total_elements; int counter; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline int FUNC_1(struct snd_seq_pool *VAR_0)
{
 return VAR_0 ? VAR_0->total_elements - FUNC_0(&VAR_0->counter) : 0;
}
