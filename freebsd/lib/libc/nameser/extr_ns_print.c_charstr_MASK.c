
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int,char**,size_t*) ;
 int VAR_1 ;
 int * FUNC_1 (char*,int const) ;

__attribute__((used)) static int
FUNC_2(const u_char *VAR_2, const u_char *VAR_3, char **VAR_4, size_t *VAR_5) {
 const u_char *VAR_6 = VAR_2;
 size_t VAR_7 = *VAR_5;
 char *VAR_8 = *VAR_4;

 if (FUNC_0("\"", 1, VAR_4, VAR_5) < 0)
  goto enospc;
 if (VAR_2 < VAR_3) {
  int VAR_9 = *VAR_2;

  if (VAR_2 + 1 + VAR_9 <= VAR_3) {
   VAR_2++;
   while (VAR_9-- > 0) {
    if (FUNC_1("\n\"\\", *VAR_2) != ((void*)0))
     if (FUNC_0("\\", 1, VAR_4, VAR_5) < 0)
      goto enospc;
    if (FUNC_0((const char *)VAR_2, 1,
        VAR_4, VAR_5) < 0)
     goto enospc;
    VAR_2++;
   }
  }
 }
 if (FUNC_0("\"", 1, VAR_4, VAR_5) < 0)
  goto enospc;
 return (VAR_2 - VAR_6);
 enospc:
 VAR_1 = VAR_0;
 *VAR_4 = VAR_8;
 *VAR_5 = VAR_7;
 return (-1);
}
