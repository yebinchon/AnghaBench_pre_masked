
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vector_str {size_t size; int * container; } ;
typedef int ssize_t ;


 int FUNC_0 (struct vector_str const*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static char *
FUNC_4(const struct vector_str *VAR_0, size_t *VAR_1)
{
 ssize_t VAR_2, VAR_3, VAR_4;
 size_t VAR_5;
 char *VAR_6;

 if (VAR_0 == ((void*)0) || VAR_0->size == 0)
  return (((void*)0));

 if ((VAR_4 = FUNC_0(VAR_0)) == 0)
  return (((void*)0));

 if ((VAR_6 = FUNC_1(sizeof(char) * (VAR_4 + 1))) == ((void*)0))
  return (((void*)0));

 VAR_2 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_0->size; ++VAR_5) {
  VAR_3 = FUNC_3(VAR_0->container[VAR_5]);

  FUNC_2(VAR_6 + VAR_2, VAR_0->container[VAR_5], VAR_3);

  VAR_2 += VAR_3;
 }

 VAR_6[VAR_4] = '\0';

 if (VAR_1 != ((void*)0))
  *VAR_1 = VAR_4;

 return (VAR_6);
}
