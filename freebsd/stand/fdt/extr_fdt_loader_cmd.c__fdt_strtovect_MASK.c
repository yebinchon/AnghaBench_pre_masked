
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,int *,scalar_t__) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_0, void *VAR_1, int VAR_2, unsigned char VAR_3,
    uint8_t VAR_4)
{
 const char *VAR_5 = VAR_0;
 const char *VAR_6 = VAR_0 + FUNC_2(VAR_0) - 2;
 uint32_t *VAR_7 = ((void*)0);
 uint8_t *VAR_8 = ((void*)0);
 int VAR_9 = 0;

 if (VAR_3 == sizeof(uint32_t))
  VAR_7 = (uint32_t *)VAR_1;
 else
  VAR_8 = (uint8_t *)VAR_1;

 if (VAR_2 == 0)
  return (0);

 while (VAR_5 < VAR_6) {


  while (!FUNC_1(*VAR_5) && VAR_5 < VAR_6)
   VAR_5++;

  if (VAR_7 != ((void*)0))
   VAR_7[VAR_9] =
       FUNC_0((uint32_t)FUNC_3(VAR_5, ((void*)0), VAR_4));

  else
   VAR_8[VAR_9] = (uint8_t)FUNC_3(VAR_5, ((void*)0), VAR_4);

  if (VAR_9 + 1 <= VAR_2 - 1)
   VAR_9++;
  else
   break;
  VAR_5++;

  while ((FUNC_1(*VAR_5) || *VAR_5 == 'x') && VAR_5 < VAR_6)
   VAR_5++;
 }
 return (VAR_9);
}
