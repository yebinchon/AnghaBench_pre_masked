
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radius_class_data {size_t count; TYPE_1__* attr; } ;
struct radius_attr_data {int dummy; } ;
struct TYPE_2__ {int len; int * data; } ;


 TYPE_1__* FUNC_0 (size_t,int) ;
 int * FUNC_1 (int *,int ) ;

int FUNC_2(struct radius_class_data *VAR_0,
        const struct radius_class_data *VAR_1)
{
 size_t VAR_2;

 if (VAR_1->attr == ((void*)0))
  return 0;

 VAR_0->attr = FUNC_0(VAR_1->count, sizeof(struct radius_attr_data));
 if (VAR_0->attr == ((void*)0))
  return -1;

 VAR_0->count = 0;

 for (VAR_2 = 0; VAR_2 < VAR_1->count; VAR_2++) {
  VAR_0->attr[VAR_2].data = FUNC_1(VAR_1->attr[VAR_2].data,
           VAR_1->attr[VAR_2].len);
  if (VAR_0->attr[VAR_2].data == ((void*)0))
   break;
  VAR_0->count++;
  VAR_0->attr[VAR_2].len = VAR_1->attr[VAR_2].len;
 }

 return 0;
}
