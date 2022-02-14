
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,unsigned char*,size_t,int ) ;

int
FUNC_3(int VAR_3, void *VAR_4, size_t VAR_5)
{
 ssize_t VAR_6;
 unsigned char *VAR_7;

 FUNC_0(VAR_3 >= 0);
 FUNC_0(VAR_5 > 0);
 FUNC_0(VAR_4 != ((void*)0));

 VAR_7 = VAR_4;
 do {
  FUNC_1(VAR_3, 0);
  VAR_6 = FUNC_2(VAR_3, VAR_7, VAR_5, 0);
  if (VAR_6 == -1) {
   if (VAR_2 == VAR_0)
    continue;
   return (-1);
  } else if (VAR_6 == 0) {
   VAR_2 = VAR_1;
   return (-1);
  }
  VAR_5 -= VAR_6;
  VAR_7 += VAR_6;
 } while (VAR_5 > 0);

 return (0);
}
