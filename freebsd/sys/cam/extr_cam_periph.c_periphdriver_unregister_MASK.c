
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct periph_driver {int flags; int (* deinit ) () ;char* driver_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct periph_driver** VAR_4 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;

int
FUNC_5(void *VAR_5)
{
 struct periph_driver *VAR_6 = (struct periph_driver *)VAR_5;
 int VAR_7, VAR_8;


 if (((VAR_6->flags & VAR_0) != 0 && VAR_2 > 0) ||
     VAR_2 > 1) {
  if (VAR_6->deinit == ((void*)0)) {
   FUNC_1("CAM periph driver '%s' doesn't have deinit.\n",
       VAR_6->driver_name);
   return (VAR_1);
  }
  VAR_7 = VAR_6->deinit();
  if (VAR_7 != 0)
   return (VAR_7);
 }

 FUNC_3();
 for (VAR_8 = 0; VAR_8 < VAR_3 && VAR_4[VAR_8] != VAR_6; VAR_8++)
  ;
 FUNC_0(VAR_8 < VAR_3,
     ("Periph driver '%s' was not registered", VAR_6->driver_name));
 for (; VAR_8 + 1 < VAR_3; VAR_8++)
  VAR_4[VAR_8] = VAR_4[VAR_8 + 1];
 VAR_4[VAR_8 + 1] = ((void*)0);
 VAR_3--;
 FUNC_4();
 return (0);
}
