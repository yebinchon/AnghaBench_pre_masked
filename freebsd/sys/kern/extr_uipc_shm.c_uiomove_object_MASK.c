
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_object_t ;
struct uio {scalar_t__ uio_resid; scalar_t__ uio_offset; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ off_t ;


 size_t FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,size_t,struct uio*) ;

int
FUNC_2(vm_object_t VAR_0, off_t VAR_1, struct uio *VAR_2)
{
 ssize_t VAR_3;
 size_t VAR_4;
 int VAR_5;

 VAR_5 = 0;
 while ((VAR_3 = VAR_2->uio_resid) > 0) {
  if (VAR_1 <= VAR_2->uio_offset)
   break;
  VAR_4 = FUNC_0(VAR_1 - VAR_2->uio_offset, VAR_3);
  if (VAR_4 == 0)
   break;
  VAR_5 = FUNC_1(VAR_0, VAR_4, VAR_2);
  if (VAR_5 != 0 || VAR_3 == VAR_2->uio_resid)
   break;
 }
 return (VAR_5);
}
