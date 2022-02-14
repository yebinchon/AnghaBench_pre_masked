
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_child {int enabled; struct ntb_child* next; int dev; } ;
typedef enum ntb_width { ____Placeholder_ntb_width } ntb_width ;
typedef enum ntb_speed { ____Placeholder_ntb_speed } ntb_speed ;
typedef int device_t ;


 int FUNC_0 (int ,int,int) ;
 struct ntb_child* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct ntb_child** FUNC_3 (int ) ;

int
FUNC_4(device_t VAR_0, enum ntb_speed VAR_1, enum ntb_width VAR_2)
{
 struct ntb_child *VAR_3 = FUNC_1(VAR_0);
 struct ntb_child **VAR_4 = FUNC_3(FUNC_2(VAR_3->dev));
 struct ntb_child *VAR_5;

 for (VAR_5 = *VAR_4; VAR_5 != ((void*)0); VAR_5 = VAR_5->next) {
  if (VAR_5->enabled) {
   VAR_3->enabled = 1;
   return (0);
  }
 }
 VAR_3->enabled = 1;
 return (FUNC_0(FUNC_2(VAR_0), VAR_1, VAR_2));
}
