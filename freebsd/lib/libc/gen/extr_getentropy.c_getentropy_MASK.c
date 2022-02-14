
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;





 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (void*,size_t) ;
 int FUNC_3 (void*,size_t,int ) ;

int
FUNC_4(void *VAR_3, size_t VAR_4)
{
 ssize_t VAR_5;
 bool VAR_6;

 if (VAR_4 > 256) {
  VAR_2 = VAR_0;
  return (-1);
 }

 VAR_6 = (FUNC_0() >= VAR_1);

 while (VAR_4 > 0) {
  if (VAR_6) {
   VAR_5 = FUNC_3(VAR_3, VAR_4, 0);
   if (VAR_5 == -1) {
    switch (VAR_2) {
    case 130:







     VAR_6 = 0;
     continue;
    case 128:
     continue;
    case 129:
     return (-1);
    default:
     FUNC_1();
    }
   }
  } else {
   return (FUNC_2(VAR_3, VAR_4));
  }


  if (VAR_5 == 0)
   FUNC_1();

  VAR_3 = (char *)VAR_3 + VAR_5;
  VAR_4 -= VAR_5;
 }

 return (0);
}
