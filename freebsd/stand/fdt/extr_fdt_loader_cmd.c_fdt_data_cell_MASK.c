
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int const) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,char*,int,char*) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static int
FUNC_5(const void *VAR_0, int VAR_1, char **VAR_2)
{
 char *VAR_3, *VAR_4;
 const uint32_t *VAR_5;
 int VAR_6, VAR_7, VAR_8;


 VAR_6 = VAR_1 / 4;






 VAR_8 = VAR_1 * 2;
 if (VAR_6 > 1) {

  VAR_8 += (VAR_6 - 1) * 1;
 }

 VAR_8 += VAR_6 * 2;

 VAR_8 += 3;

 VAR_3 = (char *)FUNC_2(VAR_8);
 VAR_4 = (char *)FUNC_2(VAR_8);
 if (VAR_3 == ((void*)0))
  goto error;

 if (VAR_4 == ((void*)0)) {
  FUNC_1(VAR_3);
  goto error;
 }

 VAR_3[0] = '\0';
 FUNC_4(VAR_3, "<");

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7 += 4) {
  VAR_5 = (const uint32_t *)((const uint8_t *)VAR_0 + VAR_7);
  FUNC_3(VAR_4, "0x%08x%s", FUNC_0(*VAR_5),
      VAR_7 < (VAR_1 - 4) ? " " : "");
  FUNC_4(VAR_3, VAR_4);
 }
 FUNC_4(VAR_3, ">");
 *VAR_2 = VAR_3;

 FUNC_1(VAR_4);

 return (0);
error:
 return (1);
}
