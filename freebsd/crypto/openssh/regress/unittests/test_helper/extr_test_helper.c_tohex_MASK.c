
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (size_t) ;

__attribute__((used)) static char *
FUNC_2(const void *VAR_0, size_t VAR_1)
{
 u_int8_t *VAR_2 = (u_int8_t *)VAR_0;
 size_t VAR_3, VAR_4;
 const char *VAR_5 = "0123456789abcdef";
 char *VAR_6 = FUNC_1((VAR_1 * 2) + 1);

 FUNC_0(VAR_6 != ((void*)0));
 for (VAR_3 = VAR_4 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_6[VAR_4++] = VAR_5[(VAR_2[VAR_3] >> 4) & 0xf];
  VAR_6[VAR_4++] = VAR_5[VAR_2[VAR_3] & 0xf];
 }
 VAR_6[VAR_4] = '\0';
 return VAR_6;
}
