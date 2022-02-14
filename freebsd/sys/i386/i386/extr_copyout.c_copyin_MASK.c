
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* vm_offset_t ;
struct copyin_arg0 {size_t len; void* kc; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 uintptr_t VAR_3 ;
 scalar_t__ FUNC_0 (void const*,void*,size_t,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (void*,size_t,int,int ,struct copyin_arg0*) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 () ;
 void* FUNC_3 (void*) ;

int
FUNC_4(const void *VAR_6, void *VAR_7, size_t VAR_8)
{
 struct copyin_arg0 VAR_9;
 vm_offset_t VAR_10;
 size_t VAR_11;

 if ((uintptr_t)VAR_6 + VAR_8 < (uintptr_t)VAR_6 ||
     (uintptr_t)VAR_6 + VAR_8 > VAR_3)
  return (VAR_0);
 if (VAR_8 == 0 || (VAR_5 && VAR_8 <= VAR_2 &&
     FUNC_0(VAR_6, VAR_7, VAR_8, FUNC_2()) == 0))
  return (0);
 for (VAR_11 = 0, VAR_10 = (vm_offset_t)VAR_6, VAR_9.kc = (vm_offset_t)VAR_7;
     VAR_11 < VAR_8; VAR_10 += VAR_9.len, VAR_9.kc += VAR_9.len, VAR_11 += VAR_9.len) {
  VAR_9.len = FUNC_3(VAR_10) - VAR_10;
  if (VAR_9.len == 0)
   VAR_9.len = VAR_1;
  if (VAR_11 + VAR_9.len > VAR_8)
   VAR_9.len = VAR_8 - VAR_11;
  if (FUNC_1(VAR_10, VAR_9.len, 0, VAR_4, &VAR_9) != 0)
   return (VAR_0);
 }
 return (0);
}
