
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {uintptr_t bsd_ioctl_len; scalar_t__ bsd_ioctl_data; } ;


 size_t VAR_0 ;
 uintptr_t VAR_1 ;
 uintptr_t VAR_2 ;
 struct task_struct* VAR_3 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline int
FUNC_1(void **VAR_4, size_t VAR_5)
{
 uintptr_t VAR_6 = (uintptr_t)(*VAR_4);

 if (FUNC_0(VAR_6 >= VAR_2 &&
     VAR_6 < VAR_1)) {
  struct task_struct *VAR_7 = VAR_3;
  if (VAR_7 == ((void*)0)) {
   *VAR_4 = ((void*)0);
   return (1);
  }


  VAR_6 -= VAR_2;


  if ((VAR_5 > VAR_0) ||
      (VAR_6 + VAR_5) > VAR_7->bsd_ioctl_len) {
   *VAR_4 = ((void*)0);
   return (1);
  }


  VAR_6 += (uintptr_t)VAR_7->bsd_ioctl_data;


  *VAR_4 = (void *)VAR_6;
  return (1);
 }
 return (0);
}
