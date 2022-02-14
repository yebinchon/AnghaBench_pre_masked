
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char* FUNC_0 (struct archive_read*,int,int*) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;

__attribute__((used)) static int
FUNC_3(struct archive_read *VAR_3, int VAR_4)
{
 const char *VAR_5;



 if (VAR_4 > 32)
  return (-1);

 if ((VAR_5 = FUNC_0(VAR_3, 6, ((void*)0))) == ((void*)0))
  return (0);



 if (FUNC_2(VAR_5, VAR_2, 6) == 0)
  return (48);
 if ((VAR_5[0] == 'M' && VAR_5[1] == 'Z') || FUNC_2(VAR_5, "\x7F\x45LF", 4) == 0) {
  ssize_t VAR_6 = VAR_1;
  ssize_t VAR_7 = 4096;
  ssize_t VAR_8;
  while (VAR_6 + VAR_7 <= (VAR_0)) {
   const char *VAR_9 = FUNC_0(VAR_3,
     VAR_6 + VAR_7, &VAR_8);
   if (VAR_9 == ((void*)0)) {

    VAR_7 >>= 1;
    if (VAR_7 < 0x40)
     return (0);
    continue;
   }
   VAR_5 = VAR_9 + VAR_6;
   while (VAR_5 + 32 < VAR_9 + VAR_8) {
    int VAR_10 = FUNC_1(VAR_5);
    if (VAR_10 == 0)
     return (48);
    VAR_5 += VAR_10;
   }
   VAR_6 = VAR_5 - VAR_9;
  }
 }
 return (0);
}
