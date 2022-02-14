
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 scalar_t__ FUNC_0 (int,unsigned char*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_1(int VAR_0, unsigned char *VAR_1, size_t VAR_2)
{
 size_t VAR_3 = 0;
 ssize_t VAR_4;

 while (VAR_3 < VAR_2) {
  VAR_4 = FUNC_0(VAR_0, VAR_1+VAR_3, VAR_2-VAR_3);
  if (VAR_4<0)
   return -1;
  else if (VAR_4 == 0)
   break;
  VAR_3 += VAR_4;
 }

 return (ssize_t)VAR_3;
}
