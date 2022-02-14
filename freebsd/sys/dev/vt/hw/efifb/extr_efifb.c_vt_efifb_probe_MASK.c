
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt_device {int dummy; } ;
struct efi_fb {int dummy; } ;
typedef int * caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int*) ;
 int * FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,int) ;

__attribute__((used)) static int
FUNC_3(struct vt_device *VAR_4)
{
 int VAR_5;
 struct efi_fb *VAR_6;
 caddr_t VAR_7;

 VAR_5 = 0;
 FUNC_0("hw.syscons.disable", &VAR_5);
 if (VAR_5 != 0)
  return (VAR_0);

 VAR_7 = FUNC_1("elf kernel");
 if (VAR_7 == ((void*)0))
  VAR_7 = FUNC_1("elf64 kernel");
 VAR_6 = (struct efi_fb *)FUNC_2(VAR_7,
     VAR_3 | VAR_2);
 if (VAR_6 == ((void*)0))
  return (VAR_0);

 return (VAR_1);
}
