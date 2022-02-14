
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmchan_matrix {int dummy; } ;
struct pcm_feeder {int * data; TYPE_1__* desc; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,struct pcmchan_matrix*,struct pcmchan_matrix*) ;

int
FUNC_1(struct pcm_feeder *VAR_2, struct pcmchan_matrix *VAR_3,
    struct pcmchan_matrix *VAR_4)
{

 if (VAR_2 == ((void*)0) || VAR_2->desc == ((void*)0) || VAR_2->desc->type != VAR_1 ||
     VAR_2->data == ((void*)0))
  return (VAR_0);

 return (FUNC_0(VAR_2->data, VAR_3, VAR_4));
}
