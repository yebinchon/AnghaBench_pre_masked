
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sshbuf {int dummy; } ;


 int VAR_0 ;
 char* FUNC_0 (size_t) ;
 size_t FUNC_1 (struct sshbuf*) ;
 int* FUNC_2 (struct sshbuf*) ;
 char* FUNC_3 (char*) ;

char *
FUNC_4(struct sshbuf *VAR_1)
{
 size_t VAR_2, VAR_3, VAR_4 = FUNC_1(VAR_1);
 const u_char *VAR_5 = FUNC_2(VAR_1);
 char *VAR_6;
 const char VAR_7[] = "0123456789abcdef";

 if (VAR_4 == 0)
  return FUNC_3("");
 if (VAR_0 / 2 <= VAR_4 || (VAR_6 = FUNC_0(VAR_4 * 2 + 1)) == ((void*)0))
  return ((void*)0);
 for (VAR_2 = VAR_3 = 0; VAR_2 < VAR_4; VAR_2++) {
  VAR_6[VAR_3++] = VAR_7[(VAR_5[VAR_2] >> 4) & 0xf];
  VAR_6[VAR_3++] = VAR_7[VAR_5[VAR_2] & 0xf];
 }
 VAR_6[VAR_3] = '\0';
 return VAR_6;
}
