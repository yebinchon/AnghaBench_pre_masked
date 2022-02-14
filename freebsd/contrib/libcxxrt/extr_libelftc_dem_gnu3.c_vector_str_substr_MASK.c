
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vector_str {int * container; } ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char*,int ,size_t) ;
 size_t FUNC_2 (int ) ;

__attribute__((used)) static char *
FUNC_3(const struct vector_str *VAR_0, size_t VAR_1, size_t VAR_2,
    size_t *VAR_3)
{
 size_t VAR_4, VAR_5, VAR_6;
 char *VAR_7;

 if (VAR_0 == ((void*)0) || VAR_1 > VAR_2)
  return (((void*)0));

 VAR_6 = 0;
 for (VAR_5 = VAR_1; VAR_5 < VAR_2 + 1; ++VAR_5)
  VAR_6 += FUNC_2(VAR_0->container[VAR_5]);

 if ((VAR_7 = FUNC_0(sizeof(char) * (VAR_6 + 1))) == ((void*)0))
  return (((void*)0));

 if (VAR_3 != ((void*)0))
  *VAR_3 = VAR_6;

 VAR_4 = 0;
 for (VAR_5 = VAR_1; VAR_5 < VAR_2 + 1; ++VAR_5) {
  VAR_6 = FUNC_2(VAR_0->container[VAR_5]);
  FUNC_1(VAR_7 + VAR_4, VAR_0->container[VAR_5], VAR_6);
  VAR_4 += VAR_6;
 }
 VAR_7[VAR_4] = '\0';

 return (VAR_7);
}
