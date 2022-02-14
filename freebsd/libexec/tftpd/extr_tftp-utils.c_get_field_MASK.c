
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,char*) ;

ssize_t
FUNC_3(int VAR_2, char *VAR_3, ssize_t VAR_4)
{
 char *VAR_5 = VAR_3;

 while (VAR_5 < VAR_3 + VAR_4) {
  if (*VAR_5 == '\0') break;
  VAR_5++;
 }
 if (*VAR_5 != '\0') {
  FUNC_2(VAR_1, "Bad option - no trailing \\0 found");
  FUNC_1(VAR_2, VAR_0);
  FUNC_0(1);
 }
 return (VAR_5 - VAR_3 + 1);
}
