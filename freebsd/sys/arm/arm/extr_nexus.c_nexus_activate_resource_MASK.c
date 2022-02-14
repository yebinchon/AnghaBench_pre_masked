
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_offset_t ;
struct resource {int dummy; } ;
typedef int device_t ;
typedef scalar_t__ bus_space_handle_t ;
typedef scalar_t__ bus_size_t ;
typedef scalar_t__ bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*,scalar_t__,scalar_t__,int ,scalar_t__*) ;
 void* VAR_4 ;
 int FUNC_1 (int ,struct resource*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (struct resource*) ;
 int FUNC_4 (struct resource*) ;
 scalar_t__ FUNC_5 (struct resource*) ;
 scalar_t__ FUNC_6 (struct resource*) ;
 int FUNC_7 (struct resource*,scalar_t__) ;
 int FUNC_8 (struct resource*,void*) ;
 int FUNC_9 (struct resource*,void*) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_5, device_t VAR_6, int VAR_7, int VAR_8,
    struct resource *VAR_9)
{
 int VAR_10;
 bus_addr_t VAR_11;
 bus_size_t VAR_12;
 bus_space_handle_t VAR_13;

 if ((VAR_10 = FUNC_3(VAR_9)) != 0)
  return (VAR_10);




 if (VAR_7 == VAR_3 || VAR_7 == VAR_1) {
  VAR_11 = (bus_addr_t)FUNC_6(VAR_9);
  VAR_12 = (bus_size_t)FUNC_5(VAR_9);
  VAR_13 = (bus_space_handle_t)FUNC_2((vm_offset_t)VAR_11,
      (vm_size_t)VAR_12);
  if (VAR_13 == 0) {
   FUNC_4(VAR_9);
   return (VAR_0);
  }
  FUNC_8(VAR_9, (void *)1);

  FUNC_9(VAR_9, (void *)VAR_13);
  FUNC_7(VAR_9, VAR_13);
  return (0);
 } else if (VAR_7 == VAR_2) {







 }
 return (0);
}
