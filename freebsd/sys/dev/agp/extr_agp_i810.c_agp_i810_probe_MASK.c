
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct agp_i810_match {TYPE_1__* driver; } ;
typedef int * device_t ;
struct TYPE_2__ {int (* check_active ) (int *) ;int (* set_desc ) (int *,struct agp_i810_match const*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *) ;
 struct agp_i810_match* FUNC_1 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,struct agp_i810_match const*) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_3)
{
 device_t VAR_4;
 const struct agp_i810_match *VAR_5;
 int VAR_6;

 if (FUNC_4("agp", FUNC_2(VAR_3)))
  return (VAR_1);
 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5 == ((void*)0))
  return (VAR_1);

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4 == ((void*)0)) {
  if (VAR_2)
   FUNC_3("I810: can't find bridge device\n");
  return (VAR_1);
 }




 VAR_6 = VAR_5->driver->check_active(VAR_4);
 if (VAR_6 != 0) {
  if (VAR_2)
   FUNC_3("i810: disabled, not probing\n");
  return (VAR_6);
 }

 VAR_5->driver->set_desc(VAR_3, VAR_5);
 return (VAR_0);
}
