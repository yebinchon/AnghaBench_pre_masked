
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (char const*,int,char*,char const*,int,char const*) ;
 int FUNC_3 (char*,int) ;

int
FUNC_4(const char *VAR_0, int VAR_1,
    const void *VAR_2, const char *VAR_3,
    size_t VAR_4, const char *VAR_5,
    char VAR_6, const char *VAR_7, void *VAR_8)
{
 const char *VAR_9 = (const char *)VAR_2;
 size_t VAR_10 = 0;
 size_t VAR_11;
 (void)VAR_5;

 FUNC_0(VAR_0, VAR_1);

 for (VAR_11 = 0; VAR_11 < VAR_4; ++VAR_11) {
  if (VAR_9[VAR_11] == VAR_6) {
   ++VAR_10;
  }
 }
 if (VAR_10 == VAR_4)
  return (1);

 FUNC_2(VAR_0, VAR_1, "%s (size %d) not filled with %s", VAR_3, (int)VAR_4, VAR_7);
 FUNC_3("   Only %d bytes were correct\n", (int)VAR_10);
 FUNC_1(VAR_8);
 return (0);
}
