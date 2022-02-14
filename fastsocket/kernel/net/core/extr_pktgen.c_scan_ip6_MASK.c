
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
struct in_addr {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (struct in_addr*,int *,int) ;
 unsigned long FUNC_2 (char const*,char**,int) ;
 unsigned long FUNC_3 (char const*,char**,int) ;
 scalar_t__ FUNC_4 (char const*) ;

__attribute__((used)) static unsigned int FUNC_5(const char *VAR_0, char VAR_1[16])
{
 unsigned int VAR_2;
 unsigned int VAR_3 = 0;
 unsigned long VAR_4;
 char VAR_5[16];
 unsigned int VAR_6 = 0;
 unsigned int VAR_7 = 0;
 __be32 VAR_8;
 char *VAR_9;

 for (VAR_2 = 0; VAR_2 < 16; VAR_2++)
  VAR_1[VAR_2] = 0;

 for (;;) {
  if (*VAR_0 == ':') {
   VAR_3++;
   if (VAR_0[1] == ':') {
    VAR_0 += 2;
    VAR_3++;
    break;
   }
   VAR_0++;
  }

  VAR_4 = FUNC_3(VAR_0, &VAR_9, 16);
  VAR_2 = VAR_9 - VAR_0;
  if (!VAR_2)
   return 0;
  if (VAR_6 == 12 && VAR_0[VAR_2] == '.') {



   VAR_8 = FUNC_0(VAR_0);
   FUNC_1((struct in_addr *)(VAR_1 + 12), &VAR_8, sizeof(VAR_8));
   return VAR_2 + VAR_3;
  }
  VAR_1[VAR_6++] = (VAR_4 >> 8);
  VAR_1[VAR_6++] = (VAR_4 & 255);
  VAR_0 += VAR_2;
  VAR_3 += VAR_2;
  if (VAR_6 == 16)
   return VAR_3;
 }


 for (;;) {
  if (*VAR_0 == ':') {
   if (VAR_7 == 0)
    break;
   VAR_0++;
   VAR_3++;
  } else if (VAR_7 != 0)
   break;

  VAR_4 = FUNC_2(VAR_0, &VAR_9, 16);
  VAR_2 = VAR_9 - VAR_0;
  if (!VAR_2) {
   if (*VAR_0)
    VAR_3--;
   break;
  }
  if (VAR_7 + VAR_6 <= 12 && VAR_0[VAR_2] == '.') {
   VAR_8 = FUNC_0(VAR_0);
   FUNC_1((struct in_addr *)(VAR_5 + VAR_7), &VAR_8,
          sizeof(VAR_8));
   VAR_7 += 4;
   VAR_3 += FUNC_4(VAR_0);
   break;
  }
  VAR_5[VAR_7++] = (VAR_4 >> 8);
  VAR_5[VAR_7++] = (VAR_4 & 255);
  VAR_0 += VAR_2;
  VAR_3 += VAR_2;
  if (VAR_6 + VAR_7 == 16)
   break;
 }
 for (VAR_2 = 0; VAR_2 < VAR_7; VAR_2++)
  VAR_1[16 - VAR_7 + VAR_2] = VAR_5[VAR_2];
 return VAR_3;
}
