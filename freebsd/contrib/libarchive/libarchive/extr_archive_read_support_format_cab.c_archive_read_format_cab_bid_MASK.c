
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read {int dummy; } ;
typedef int ssize_t ;


 char* FUNC_0 (struct archive_read*,int,int*) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;

__attribute__((used)) static int
FUNC_3(struct archive_read *VAR_0, int VAR_1)
{
 const char *VAR_2;
 ssize_t VAR_3, VAR_4, VAR_5;



 if (VAR_1 > 64)
  return (-1);

 if ((VAR_2 = FUNC_0(VAR_0, 8, ((void*)0))) == ((void*)0))
  return (-1);

 if (FUNC_2(VAR_2, "MSCF\0\0\0\0", 8) == 0)
  return (64);






 if (VAR_2[0] == 'M' && VAR_2[1] == 'Z') {
  VAR_4 = 0;
  VAR_5 = 4096;
  while (VAR_4 < (1024 * 128)) {
   const char *VAR_6 = FUNC_0(VAR_0, VAR_4 + VAR_5,
       &VAR_3);
   if (VAR_6 == ((void*)0)) {

    VAR_5 >>= 1;
    if (VAR_5 < 128)
     return (0);
    continue;
   }
   VAR_2 = VAR_6 + VAR_4;
   while (VAR_2 + 8 < VAR_6 + VAR_3) {
    int VAR_7;
    if ((VAR_7 = FUNC_1(VAR_2)) == 0)
     return (64);
    VAR_2 += VAR_7;
   }
   VAR_4 = VAR_2 - VAR_6;
  }
 }
 return (0);
}
