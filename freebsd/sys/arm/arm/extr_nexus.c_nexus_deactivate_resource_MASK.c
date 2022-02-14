
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


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__) ;
 int VAR_3 ;
 int FUNC_1 (int ,struct resource*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct resource*) ;
 scalar_t__ FUNC_4 (struct resource*) ;
 scalar_t__ FUNC_5 (struct resource*) ;
 int FUNC_6 (struct resource*,int ) ;
 int FUNC_7 (struct resource*,int *) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_4, device_t VAR_5, int VAR_6, int VAR_7,
    struct resource *VAR_8)
{
 bus_size_t VAR_9;
 bus_space_handle_t VAR_10;

 if (VAR_6 == VAR_2 || VAR_6 == VAR_0) {
  VAR_9 = (bus_size_t)FUNC_5(VAR_8);
  VAR_10 = FUNC_4(VAR_8);

  if (VAR_10 != 0) {



   FUNC_2((vm_offset_t)VAR_10, (vm_size_t)VAR_9);

   FUNC_7(VAR_8, ((void*)0));
   FUNC_6(VAR_8, 0);
  }
 } else if (VAR_6 == VAR_1) {



 }

 return (FUNC_3(VAR_8));
}
