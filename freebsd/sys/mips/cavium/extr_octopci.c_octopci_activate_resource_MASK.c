
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
typedef int device_t ;
typedef int bus_space_handle_t ;


 int VAR_0 ;



 int FUNC_0 (int ,int ,int,int,struct resource*) ;
 int FUNC_1 (int ,int ,int ,int ,int *) ;
 int FUNC_2 (struct resource*) ;
 int FUNC_3 (struct resource*) ;
 int FUNC_4 (struct resource*) ;
 int FUNC_5 (struct resource*) ;
 int FUNC_6 (struct resource*,int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_1, device_t VAR_2, int VAR_3, int VAR_4,
    struct resource *VAR_5)
{
 bus_space_handle_t VAR_6;
 int VAR_7;

 switch (VAR_3) {
 case 129:
  VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4,
            VAR_5);
  if (VAR_7 != 0)
   return (VAR_7);
  return (0);
 case 128:
 case 130:
  VAR_7 = FUNC_1(FUNC_4(VAR_5),
      FUNC_3(VAR_5), FUNC_5(VAR_5), 0, &VAR_6);
  if (VAR_7 != 0)
   return (VAR_7);
  FUNC_6(VAR_5, VAR_6);
  break;
 default:
  return (VAR_0);
 }

 VAR_7 = FUNC_2(VAR_5);
 if (VAR_7 != 0)
  return (VAR_7);
 return (0);
}
