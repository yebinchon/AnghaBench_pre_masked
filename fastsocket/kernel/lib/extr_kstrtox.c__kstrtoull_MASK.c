
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (char const*,unsigned int,unsigned long long*) ;
 char* FUNC_1 (char const*,unsigned int*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_3, unsigned int VAR_4, unsigned long long *VAR_5)
{
 unsigned long long VAR_6;
 unsigned int VAR_7;

 VAR_3 = FUNC_1(VAR_3, &VAR_4);
 VAR_7 = FUNC_0(VAR_3, VAR_4, &VAR_6);
 if (VAR_7 & VAR_2)
  return -VAR_1;
 VAR_7 &= ~VAR_2;
 if (VAR_7 == 0)
  return -VAR_0;
 VAR_3 += VAR_7;
 if (*VAR_3 == '\n')
  VAR_3++;
 if (*VAR_3)
  return -VAR_0;
 *VAR_5 = VAR_6;
 return 0;
}
