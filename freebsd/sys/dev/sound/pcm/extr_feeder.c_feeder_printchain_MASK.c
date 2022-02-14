
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pcm_feeder {struct pcm_feeder* source; TYPE_2__* desc; TYPE_1__* class; } ;
struct TYPE_4__ {int idx; } ;
struct TYPE_3__ {char* name; } ;


 int FUNC_0 (char*,...) ;

void
FUNC_1(struct pcm_feeder *VAR_0)
{
 struct pcm_feeder *VAR_1;

 FUNC_0("feeder chain (head @%p)\n", VAR_0);
 VAR_1 = VAR_0;
 while (VAR_1 != ((void*)0)) {
  FUNC_0("%s/%d @ %p\n", VAR_1->class->name, VAR_1->desc->idx, VAR_1);
  VAR_1 = VAR_1->source;
 }
 FUNC_0("[end]\n\n");
}
