
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_paddr_t ;
struct resource {int dummy; } ;
typedef int device_t ;
typedef int bus_space_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,int *) ;
 int VAR_3 ;
 int FUNC_1 (int ,struct resource*) ;
 int FUNC_2 (struct resource*) ;
 int FUNC_3 (struct resource*) ;
 int FUNC_4 (struct resource*) ;
 int FUNC_5 (struct resource*) ;
 int FUNC_6 (struct resource*) ;
 int FUNC_7 (struct resource*,int ) ;
 int FUNC_8 (struct resource*,int ) ;
 int FUNC_9 (struct resource*,void*) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_4, device_t VAR_5, int VAR_6, int VAR_7,
    struct resource *VAR_8)
{
 void *VAR_9;
 vm_paddr_t VAR_10;
 vm_size_t VAR_11;
 int VAR_12;




 if (VAR_6 == VAR_2 || VAR_6 == VAR_0) {
  VAR_10 = FUNC_6(VAR_8);
  VAR_11 = FUNC_5(VAR_8);
  FUNC_8(VAR_8, VAR_3);
  VAR_12 = FUNC_0(FUNC_4(VAR_8), VAR_10, VAR_11, 0,
      (bus_space_handle_t *)&VAR_9);
  if (VAR_12 != 0) {
   FUNC_3(VAR_8);
   return (VAR_12);
  }
  FUNC_9(VAR_8, VAR_9);
  FUNC_7(VAR_8, (bus_space_handle_t)(uintptr_t)VAR_9);
 } else if (VAR_6 == VAR_1) {







 }

 return (FUNC_2(VAR_8));
}
