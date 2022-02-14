
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {struct file* next; } ;
struct TYPE_2__ {struct file** last; } ;
struct _7zip {TYPE_1__ empty_list; } ;



__attribute__((used)) static void
FUNC_0(struct _7zip *VAR_0, struct file *VAR_1)
{
 VAR_1->next = ((void*)0);
 *VAR_0->empty_list.last = VAR_1;
 VAR_0->empty_list.last = &(VAR_1->next);
}
