
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct viawd_device {scalar_t__ device; int * desc; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 struct viawd_device* VAR_1 ;

__attribute__((used)) static struct viawd_device *
FUNC_2(device_t VAR_2)
{
 struct viawd_device *VAR_3;

 if (FUNC_1(VAR_2) != VAR_0)
  return (((void*)0));
 for (VAR_3 = VAR_1; VAR_3->desc != ((void*)0); VAR_3++)
  if (FUNC_0(VAR_2) == VAR_3->device)
   return (VAR_3);
 return (((void*)0));
}
