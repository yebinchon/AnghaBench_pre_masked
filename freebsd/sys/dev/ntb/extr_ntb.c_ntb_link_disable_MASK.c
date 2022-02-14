
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_child {scalar_t__ enabled; struct ntb_child* next; int dev; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 struct ntb_child* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct ntb_child** FUNC_3 (int ) ;

int
FUNC_4(device_t VAR_0)
{
 struct ntb_child *VAR_1 = FUNC_1(VAR_0);
 struct ntb_child **VAR_2 = FUNC_3(FUNC_2(VAR_1->dev));
 struct ntb_child *VAR_3;

 if (!VAR_1->enabled)
  return (0);
 VAR_1->enabled = 0;
 for (VAR_3 = *VAR_2; VAR_3 != ((void*)0); VAR_3 = VAR_3->next) {
  if (VAR_3->enabled)
   return (0);
 }
 return (FUNC_0(FUNC_2(VAR_0)));
}
