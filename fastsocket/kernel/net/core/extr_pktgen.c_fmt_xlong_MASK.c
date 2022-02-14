
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char FUNC_0 (unsigned int) ;

__attribute__((used)) static int FUNC_1(char *VAR_0, unsigned int VAR_1)
{
 char *VAR_2 = VAR_0;
 *VAR_0 = FUNC_0((VAR_1 >> 12) & 0xf);
 if (VAR_0 != VAR_2 || *VAR_0 != '0')
  ++VAR_0;
 *VAR_0 = FUNC_0((VAR_1 >> 8) & 0xf);
 if (VAR_0 != VAR_2 || *VAR_0 != '0')
  ++VAR_0;
 *VAR_0 = FUNC_0((VAR_1 >> 4) & 0xf);
 if (VAR_0 != VAR_2 || *VAR_0 != '0')
  ++VAR_0;
 *VAR_0 = FUNC_0(VAR_1 & 0xf);
 return VAR_0 - VAR_2 + 1;
}
