
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,char*,char const,char*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static int
FUNC_4(const void *VAR_0, int VAR_1, char **VAR_2)
{
 char *VAR_3, *VAR_4;
 const char *VAR_5;
 int VAR_6, VAR_7;






 VAR_7 = VAR_1 * 2;
 if (VAR_1 > 1)

  VAR_7 += (VAR_1 - 1) * 1;

 VAR_7 += VAR_1 * 2;

 VAR_7 += 3;

 VAR_3 = (char *)FUNC_1(VAR_7);
 VAR_4 = (char *)FUNC_1(VAR_7);
 if (VAR_3 == ((void*)0))
  goto error;

 if (VAR_4 == ((void*)0)) {
  FUNC_0(VAR_3);
  goto error;
 }

 VAR_3[0] = '\0';
 FUNC_3(VAR_3, "[");

 for (VAR_6 = 0, VAR_5 = VAR_0; VAR_6 < VAR_1; VAR_6++) {
  FUNC_2(VAR_4, "0x%02x%s", VAR_5[VAR_6], VAR_6 < VAR_1 - 1 ? " " : "");
  FUNC_3(VAR_3, VAR_4);
 }
 FUNC_3(VAR_3, "]");
 *VAR_2 = VAR_3;

 FUNC_0(VAR_4);

 return (0);
error:
 return (1);
}
