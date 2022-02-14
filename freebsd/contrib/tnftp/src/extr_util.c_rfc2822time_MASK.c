
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int dummy; } ;
typedef int result ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (char*,int,char*,struct tm const*) ;

const char *
FUNC_2(const struct tm *VAR_0)
{
 static char VAR_1[50];

 if (FUNC_1(VAR_1, sizeof(VAR_1),
     "%a, %d %b %Y %H:%M:%S %z\n", VAR_0) == 0)
  FUNC_0(1, "Can't convert RFC2822 time: buffer too small");
 return VAR_1;
}
