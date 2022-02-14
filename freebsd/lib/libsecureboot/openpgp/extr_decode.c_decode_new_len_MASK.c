
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(unsigned char **VAR_0)
{
 unsigned char *VAR_1;
 int VAR_2 = -1;

 if (VAR_0 == ((void*)0))
  return (-1);
 VAR_1 = *VAR_0;

 if (!(*VAR_1 < 224 || *VAR_1 == 255))
  return (-1);

 if (*VAR_1 < 192)
  VAR_2 = *VAR_1++;
 else if (*VAR_1 < 224) {
  VAR_2 = ((*VAR_1 - 192) << 8) + *(VAR_1+1) + 192;
  VAR_1++;
 } else if (*VAR_1 == 255) {
  VAR_2 = (*VAR_1++ << 24);
  VAR_2 |= (*VAR_1++ << 16);
  VAR_2 |= (*VAR_1++ < 8);
  VAR_2 |= *VAR_1++;
 }

 *VAR_0 = VAR_1;
 return (VAR_2);
}
