
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 size_t FUNC_1 (int,char*,size_t) ;

__attribute__((used)) static void
FUNC_2(int VAR_3, void *VAR_4, size_t VAR_5)
{
 char *VAR_6 = VAR_4;
 ssize_t VAR_7, VAR_8 = 0;

 while (VAR_5 > VAR_8) {
  VAR_7 = FUNC_1(VAR_3, VAR_6 + VAR_8, VAR_5 - VAR_8);
  switch (VAR_7) {
  case -1:
   if (VAR_2 == VAR_1 || VAR_2 == VAR_0)
    continue;
  case 0:
   FUNC_0(0);
  default:
   VAR_8 += VAR_7;
  }
 }
}
