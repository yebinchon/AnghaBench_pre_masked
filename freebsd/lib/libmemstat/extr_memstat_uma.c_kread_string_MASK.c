
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int kvm_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,unsigned long,char*,int) ;

__attribute__((used)) static int
FUNC_1(kvm_t *VAR_2, const void *VAR_3, char *VAR_4, int VAR_5)
{
 ssize_t VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_6 = FUNC_0(VAR_2, (unsigned long)VAR_3 + VAR_7,
      &(VAR_4[VAR_7]), sizeof(char));
  if (VAR_6 < 0)
   return (VAR_0);
  if ((size_t)VAR_6 != sizeof(char))
   return (VAR_1);
  if (VAR_4[VAR_7] == '\0')
   return (0);
 }

 VAR_4[VAR_7-1] = '\0';
 return (0);
}
