
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* context; int * callback; } ;
struct pt_image {TYPE_1__ readmem; } ;
typedef int read_memory_callback_t ;


 int VAR_0 ;

int FUNC_0(struct pt_image *VAR_1,
     read_memory_callback_t *VAR_2, void *VAR_3)
{
 if (!VAR_1)
  return -VAR_0;

 VAR_1->readmem.callback = VAR_2;
 VAR_1->readmem.context = VAR_3;

 return 0;
}
