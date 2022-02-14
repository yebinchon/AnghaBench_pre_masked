
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x509_name {size_t num_attr; int email; TYPE_1__* attr; } ;
struct TYPE_2__ {scalar_t__ type; int value; } ;


 int FUNC_0 (int ,int ) ;

int FUNC_1(struct x509_name *VAR_0, struct x509_name *VAR_1)
{
 int VAR_2;
 size_t VAR_3;

 if (!VAR_0 && VAR_1)
  return -1;
 if (VAR_0 && !VAR_1)
  return 1;
 if (!VAR_0 && !VAR_1)
  return 0;
 if (VAR_0->num_attr < VAR_1->num_attr)
  return -1;
 if (VAR_0->num_attr > VAR_1->num_attr)
  return 1;

 for (VAR_3 = 0; VAR_3 < VAR_0->num_attr; VAR_3++) {
  if (VAR_0->attr[VAR_3].type < VAR_1->attr[VAR_3].type)
   return -1;
  if (VAR_0->attr[VAR_3].type > VAR_1->attr[VAR_3].type)
   return -1;
  VAR_2 = FUNC_0(VAR_0->attr[VAR_3].value, VAR_1->attr[VAR_3].value);
  if (VAR_2)
   return VAR_2;
 }
 VAR_2 = FUNC_0(VAR_0->email, VAR_1->email);
 if (VAR_2)
  return VAR_2;

 return 0;
}
