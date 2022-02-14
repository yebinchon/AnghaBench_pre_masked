
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 long VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,char const*,size_t) ;
 long FUNC_1 (char*,char**,int) ;

int
FUNC_2(const char *VAR_3, size_t VAR_4, int VAR_5)
{
 char VAR_6[32];
 char *VAR_7;
 long VAR_8;

 if (VAR_4 > 31)
  return -1;

 FUNC_0(VAR_6, VAR_3, VAR_4);
 VAR_6[(int)VAR_4] = '\0';

 VAR_2 = 0;
 VAR_8 = FUNC_1(VAR_6, &VAR_7, VAR_5);

 if (VAR_6[0] == '\0' || *VAR_7 != '\0')
  return -1;

 if (VAR_8 > VAR_0)
  VAR_8 = VAR_0;
 if (VAR_8 < VAR_1)
  VAR_8 = VAR_1;

 return (int)VAR_8;
}
