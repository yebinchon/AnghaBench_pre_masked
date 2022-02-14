
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dma_buffer {int dummy; } ;
struct snd_mem_list {unsigned int id; int list; struct snd_dma_buffer buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 struct snd_mem_list* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct snd_dma_buffer *VAR_5, unsigned int VAR_6)
{
 struct snd_mem_list *VAR_7;

 if (FUNC_0(!VAR_5))
  return -VAR_0;
 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_2);
 if (! VAR_7)
  return -VAR_1;
 FUNC_3(&VAR_3);
 VAR_7->buffer = *VAR_5;
 VAR_7->id = VAR_6;
 FUNC_2(&VAR_7->list, &VAR_4);
 FUNC_4(&VAR_3);
 return 0;
}
