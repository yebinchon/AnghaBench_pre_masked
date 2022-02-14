
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**) ;
 scalar_t__ FUNC_1 (char**,unsigned int) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static int
FUNC_3(char **VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4, VAR_5, VAR_6;
 char **VAR_7, **VAR_8, **VAR_9, *VAR_10;
 int VAR_11, VAR_12;


 if (VAR_3 <= 1)
  return (VAR_1);

 VAR_5 = VAR_6 = 0;
 VAR_7 = VAR_8 = ((void*)0);
 VAR_10 = VAR_2[0];
 for (VAR_4 = 1; VAR_4 < VAR_3; VAR_4++)
 {
  if (FUNC_2(VAR_2[VAR_4], VAR_10) < 0)
  {
   VAR_5++;
   VAR_9 = (char **)FUNC_1(VAR_7,
    VAR_5 * sizeof(char *));
   if (!VAR_9) {
    FUNC_0(VAR_8);
    FUNC_0(VAR_7);
    return (VAR_0);
   }
   VAR_7 = VAR_9;
   VAR_7[VAR_5 - 1] = VAR_2[VAR_4];
  }
  else
  {
   VAR_6++;
   VAR_9 = (char **)FUNC_1(VAR_8,
    VAR_6 * sizeof(char *));
   if (!VAR_9) {
    FUNC_0(VAR_8);
    FUNC_0(VAR_7);
    return (VAR_0);
   }
   VAR_8 = VAR_9;
   VAR_8[VAR_6 - 1] = VAR_2[VAR_4];
  }
 }


 VAR_11 = FUNC_3(VAR_7, VAR_5);
 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
  VAR_2[VAR_4] = VAR_7[VAR_4];
 FUNC_0(VAR_7);


 VAR_2[VAR_5] = VAR_10;


 VAR_12 = FUNC_3(VAR_8, VAR_6);
 for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++)
  VAR_2[VAR_5 + 1 + VAR_4] = VAR_8[VAR_4];
 FUNC_0(VAR_8);

 return (VAR_11 < VAR_12) ? VAR_11 : VAR_12;
}
