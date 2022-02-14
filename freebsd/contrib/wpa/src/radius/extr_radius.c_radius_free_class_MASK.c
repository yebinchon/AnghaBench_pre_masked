
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radius_class_data {size_t count; TYPE_1__* attr; } ;
struct TYPE_2__ {struct TYPE_2__* data; } ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(struct radius_class_data *VAR_0)
{
 size_t VAR_1;
 if (VAR_0 == ((void*)0))
  return;
 for (VAR_1 = 0; VAR_1 < VAR_0->count; VAR_1++)
  FUNC_0(VAR_0->attr[VAR_1].data);
 FUNC_0(VAR_0->attr);
 VAR_0->attr = ((void*)0);
 VAR_0->count = 0;
}
