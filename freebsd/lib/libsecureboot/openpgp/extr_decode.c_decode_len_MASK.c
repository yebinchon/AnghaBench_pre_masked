
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char**) ;

__attribute__((used)) static int
FUNC_1(unsigned char **VAR_0, int VAR_1)
{
 unsigned char *VAR_2;
 int VAR_3;

 if (VAR_1 < 0)
  return (FUNC_0(VAR_0));

 if (VAR_0 == ((void*)0))
  return (-1);

 VAR_2 = *VAR_0;

 switch (VAR_1) {
 case 0:
  VAR_3 = *VAR_2++;
  break;
 case 1:
  VAR_3 = (*VAR_2++ << 8);
  VAR_3 |= *VAR_2++;
  break;
 case 2:
  VAR_3 = *VAR_2++ << 24;
  VAR_3 |= *VAR_2++ << 16;
  VAR_3 |= *VAR_2++ << 8;
  VAR_3 |= *VAR_2++;
  break;
 case 3:
 default:

  VAR_3 = -1;
 }

 *VAR_0 = VAR_2;
 return (VAR_3);
}
