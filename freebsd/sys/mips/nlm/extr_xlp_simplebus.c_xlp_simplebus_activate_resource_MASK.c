
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
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct resource*) ;
 int FUNC_2 (struct resource*) ;
 int FUNC_3 (struct resource*) ;
 int FUNC_4 (struct resource*,int ) ;
 int FUNC_5 (struct resource*,void*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2, device_t VAR_3, int VAR_4, int VAR_5,
    struct resource *VAR_6)
{
 void *VAR_7;
 vm_paddr_t VAR_8;
 vm_size_t VAR_9;




 if (VAR_4 == VAR_1 || VAR_4 == VAR_0) {
  VAR_8 = FUNC_3(VAR_6);
  VAR_9 = FUNC_2(VAR_6);
  VAR_7 = FUNC_0(VAR_8, VAR_9);

  FUNC_5(VAR_6, VAR_7);
  FUNC_4(VAR_6, (bus_space_handle_t)(uintptr_t)VAR_7);
 }

 return (FUNC_1(VAR_6));
}
