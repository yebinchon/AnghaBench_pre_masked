
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (char*,char*,int,char const*) ;

__attribute__((used)) static char *
FUNC_1(uint32_t VAR_0)
{
 static char VAR_1[8];
 static const char *VAR_2[] = { "", "K", "M", "G" };
 int VAR_3;

 VAR_3 = 0;
 while (VAR_3 < 3 && VAR_0 > 1023) {
  VAR_0 /= 1024;
  VAR_3++;
 }

 FUNC_0(VAR_1, "%u%sB", VAR_0, VAR_2[VAR_3]);
 return (VAR_1);
}
