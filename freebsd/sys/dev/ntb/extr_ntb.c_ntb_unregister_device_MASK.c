
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_child {int ctx_lock; int dev; struct ntb_child* next; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct ntb_child** FUNC_1 (int ) ;
 int FUNC_2 (struct ntb_child*,int ) ;
 int FUNC_3 (int *) ;

int
FUNC_4(device_t VAR_1)
{
 struct ntb_child **VAR_2 = FUNC_1(VAR_1);
 struct ntb_child *VAR_3;
 int VAR_4 = 0;

 while ((VAR_3 = *VAR_2) != ((void*)0)) {
  *VAR_2 = (*VAR_2)->next;
  VAR_4 = FUNC_0(VAR_1, VAR_3->dev);
  if (VAR_4)
   break;
  FUNC_3(&VAR_3->ctx_lock);
  FUNC_2(VAR_3, VAR_0);
 }
 return (VAR_4);
}
