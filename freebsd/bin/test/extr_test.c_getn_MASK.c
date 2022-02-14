
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 long FUNC_2 (char const*,char**,int) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_2)
{
 char *VAR_3;
 long VAR_4;

 VAR_1 = 0;
 VAR_4 = FUNC_2(VAR_2, &VAR_3, 10);

 if (VAR_2 == VAR_3)
  FUNC_0("%s: bad number", VAR_2);

 if (VAR_1 != 0)
  FUNC_0((VAR_1 == VAR_0) ? "%s: bad number" :
       "%s: out of range", VAR_2);

 while (FUNC_1((unsigned char)*VAR_3))
  VAR_3++;

 if (*VAR_3)
  FUNC_0("%s: bad number", VAR_2);

 return (int) VAR_4;
}
