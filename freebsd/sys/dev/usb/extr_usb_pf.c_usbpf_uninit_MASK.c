
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_bus {int * ifp; } ;
typedef int device_t ;
typedef int * devclass_t ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,int **,int*) ;
 struct usb_bus* FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_6(void *VAR_3)
{
 int VAR_4;
 device_t *VAR_5;
 devclass_t VAR_6;
 struct usb_bus *VAR_7;
 int VAR_8;
 int VAR_9;

 FUNC_4(VAR_1);

 VAR_6 = FUNC_0(VAR_2);
 if (VAR_6 == ((void*)0))
  return;
 VAR_8 = FUNC_1(VAR_6, &VAR_5, &VAR_4);
 if (VAR_8)
  return;
 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  VAR_7 = FUNC_2(VAR_5[VAR_9]);
  if (VAR_7 != ((void*)0) && VAR_7->ifp != ((void*)0))
   FUNC_5(VAR_1, VAR_7->ifp);
 }
 FUNC_3(VAR_5, VAR_0);
}
