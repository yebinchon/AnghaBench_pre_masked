
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long FUNC_0 (char*,char**,int) ;

__attribute__((used)) static unsigned long
FUNC_1 (char *VAR_0)
{
 char *VAR_1;
 long VAR_2;
 int VAR_3;
 unsigned long VAR_4, VAR_5;

 VAR_4 = VAR_5 = 0;
 for (;;) {
  VAR_2 = FUNC_0 (VAR_0, &VAR_1, 10);
  if (VAR_1 == VAR_0)
   break;
  if (*VAR_1 == '-') {
   VAR_5 = VAR_2;
   VAR_0 = VAR_1+1;
   continue;
  }
  if (*VAR_1 == ',')
   ++VAR_1;

  if (VAR_5)
   for (VAR_3=VAR_5; VAR_3<VAR_2; ++VAR_3)
    VAR_4 |= 1L << VAR_3;
  VAR_4 |= 1L << VAR_2;

  VAR_5 = 0;
  VAR_0 = VAR_1;
 }
 return VAR_4;
}
