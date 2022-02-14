
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
typedef int device_t ;
typedef scalar_t__ bus_space_handle_t ;
typedef scalar_t__ bus_size_t ;
typedef scalar_t__ bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,scalar_t__,scalar_t__,int ,scalar_t__*) ;
 int FUNC_1 (int ,struct resource*) ;
 int VAR_3 ;
 int FUNC_2 (struct resource*) ;
 int FUNC_3 (struct resource*) ;
 scalar_t__ FUNC_4 (struct resource*) ;
 scalar_t__ FUNC_5 (struct resource*) ;
 int FUNC_6 (struct resource*,scalar_t__) ;
 int FUNC_7 (struct resource*,int *) ;
 int FUNC_8 (struct resource*,void*) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_4, device_t VAR_5, int VAR_6, int VAR_7,
    struct resource *VAR_8)
{
 int VAR_9;
 bus_addr_t VAR_10;
 bus_size_t VAR_11;
 bus_space_handle_t VAR_12;

 if ((VAR_9 = FUNC_2(VAR_8)) != 0)
  return (VAR_9);




 if (VAR_6 == VAR_2 || VAR_6 == VAR_0) {
  VAR_10 = (bus_addr_t)FUNC_5(VAR_8);
  VAR_11 = (bus_size_t)FUNC_4(VAR_8);
  VAR_9 = FUNC_0(&VAR_3, VAR_10, VAR_11, 0, &VAR_12);
  if (VAR_9 != 0) {
   FUNC_3(VAR_8);
   return (VAR_9);
  }
  FUNC_7(VAR_8, &VAR_3);
  FUNC_8(VAR_8, (void *)VAR_12);
  FUNC_6(VAR_8, VAR_12);
 } else if (VAR_6 == VAR_1) {
  VAR_9 = FUNC_1(VAR_5, VAR_8);
  if (VAR_9 != 0) {
   FUNC_3(VAR_8);
   return (VAR_9);
  }
 }
 return (0);
}
