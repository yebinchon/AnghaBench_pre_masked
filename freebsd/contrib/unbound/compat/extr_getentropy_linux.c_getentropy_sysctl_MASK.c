
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __sysctl_args {int* name; int nlen; char* oldval; size_t* oldlenp; } ;



 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*,size_t) ;
 size_t FUNC_1 (size_t,int) ;
 scalar_t__ FUNC_2 (int ,struct __sysctl_args*) ;

__attribute__((used)) static int
FUNC_3(void *VAR_3, size_t VAR_4)
{
 static int VAR_5[] = { 130, 129, 128 };
 size_t VAR_6;
 int VAR_7 = VAR_2;

 for (VAR_6 = 0; VAR_6 < VAR_4; ) {
  size_t VAR_8 = FUNC_1(VAR_4 - VAR_6, 16);


  struct __sysctl_args VAR_9 = {
   .name = VAR_5,
   .nlen = 3,
   .oldval = (char *)VAR_3 + VAR_6,
   .oldlenp = &VAR_8,
  };
  if (FUNC_2(VAR_1, &VAR_9) != 0)
   goto sysctlfailed;
  VAR_6 += VAR_8;
 }
 if (FUNC_0(VAR_3, VAR_4) == 0) {
  VAR_2 = VAR_7;
  return (0);
 }
sysctlfailed:
 VAR_2 = VAR_0;
 return -1;
}
