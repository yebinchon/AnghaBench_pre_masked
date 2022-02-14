
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 void* FUNC_0 (struct archive_read*,int,int*) ;
 size_t FUNC_1 (char const*) ;

__attribute__((used)) static int
FUNC_2(struct archive_read *VAR_1, int VAR_2)
{
 const char *VAR_3;
 const void *VAR_4;
 ssize_t VAR_5, VAR_6, VAR_7;
 size_t VAR_8;



 if (VAR_2 > 30)
  return (-1);

 if ((VAR_3 = FUNC_0(VAR_1, VAR_0, ((void*)0))) == ((void*)0))
  return (-1);

 if (FUNC_1(VAR_3) == 0)
  return (30);

 if (VAR_3[0] == 'M' && VAR_3[1] == 'Z') {

  VAR_6 = 0;
  VAR_7 = 4096;
  while (VAR_6 < (1024 * 20)) {
   VAR_4 = FUNC_0(VAR_1, VAR_6 + VAR_7,
       &VAR_5);
   if (VAR_4 == ((void*)0)) {

    VAR_7 >>= 1;
    if (VAR_7 < (VAR_0 + 3))
     return (0);
    continue;
   }
   VAR_3 = (const char *)VAR_4 + VAR_6;
   while (VAR_3 + VAR_0 < (const char *)VAR_4 + VAR_5) {
    if ((VAR_8 = FUNC_1(VAR_3)) == 0)
     return (30);
    VAR_3 += VAR_8;
   }
   VAR_6 = VAR_3 - (const char *)VAR_4;
  }
 }
 return (0);
}
