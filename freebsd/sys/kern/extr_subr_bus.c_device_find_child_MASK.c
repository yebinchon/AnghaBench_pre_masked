
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* device_t ;
typedef int devclass_t ;
struct TYPE_5__ {struct TYPE_5__* parent; } ;


 int FUNC_0 (char const*) ;
 TYPE_1__* FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;

device_t
FUNC_3(device_t VAR_0, const char *VAR_1, int VAR_2)
{
 devclass_t VAR_3;
 device_t VAR_4;

 VAR_3 = FUNC_0(VAR_1);
 if (!VAR_3)
  return (((void*)0));

 if (VAR_2 != -1) {
  VAR_4 = FUNC_1(VAR_3, VAR_2);
  if (VAR_4 && VAR_4->parent == VAR_0)
   return (VAR_4);
 } else {
  for (VAR_2 = 0; VAR_2 < FUNC_2(VAR_3); VAR_2++) {
   VAR_4 = FUNC_1(VAR_3, VAR_2);
   if (VAR_4 && VAR_4->parent == VAR_0)
    return (VAR_4);
  }
 }
 return (((void*)0));
}
