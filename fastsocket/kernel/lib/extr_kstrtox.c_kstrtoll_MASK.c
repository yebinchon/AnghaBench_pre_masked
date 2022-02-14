
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*,unsigned int,unsigned long long*) ;
 int FUNC_1 (char const*,unsigned int,unsigned long long*) ;

int FUNC_2(const char *VAR_1, unsigned int VAR_2, long long *VAR_3)
{
 unsigned long long VAR_4;
 int VAR_5;

 if (VAR_1[0] == '-') {
  VAR_5 = FUNC_0(VAR_1 + 1, VAR_2, &VAR_4);
  if (VAR_5 < 0)
   return VAR_5;
  if ((long long)(-VAR_4) >= 0)
   return -VAR_0;
  *VAR_3 = -VAR_4;
 } else {
  VAR_5 = FUNC_1(VAR_1, VAR_2, &VAR_4);
  if (VAR_5 < 0)
   return VAR_5;
  if ((long long)VAR_4 < 0)
   return -VAR_0;
  *VAR_3 = VAR_4;
 }
 return 0;
}
