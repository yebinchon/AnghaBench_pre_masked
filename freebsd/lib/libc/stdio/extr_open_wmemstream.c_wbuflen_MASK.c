
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbstate_t ;


 size_t FUNC_0 (char const*,int,int *) ;

__attribute__((used)) static size_t
FUNC_1(const mbstate_t *VAR_0, const char *VAR_1, int VAR_2)
{
 mbstate_t VAR_3;
 size_t VAR_4, VAR_5;

 VAR_5 = 0;
 VAR_3 = *VAR_0;
 while (VAR_2 > 0) {
  VAR_4 = FUNC_0(VAR_1, VAR_2, &VAR_3);
  if (VAR_4 == (size_t)-1)
   return (-1);
  if (VAR_4 == (size_t)-2)
   break;
  if (VAR_4 == 0)

   VAR_4 = 1;
  VAR_2 -= VAR_4;
  VAR_1 += VAR_4;
  VAR_5++;
 }
 return (VAR_5);
}
