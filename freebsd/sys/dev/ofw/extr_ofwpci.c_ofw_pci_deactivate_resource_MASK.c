
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_offset_t ;
struct resource {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int,struct resource*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct resource*) ;
 int FUNC_3 (struct resource*) ;
 scalar_t__ FUNC_4 (struct resource*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2, device_t VAR_3, int VAR_4, int VAR_5,
    struct resource *VAR_6)
{
 vm_size_t VAR_7;

 if (VAR_4 != VAR_0 && VAR_4 != VAR_1) {
  return (FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5,
      VAR_6));
 }

 VAR_7 = FUNC_3(VAR_6);
 FUNC_1((vm_offset_t)FUNC_4(VAR_6), VAR_7);

 return (FUNC_2(VAR_6));
}
