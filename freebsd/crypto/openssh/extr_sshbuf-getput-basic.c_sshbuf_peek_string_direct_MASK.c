
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_char ;
struct sshbuf {int dummy; } ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct sshbuf const*) ;
 int * FUNC_3 (struct sshbuf const*) ;

int
FUNC_4(const struct sshbuf *VAR_3, const u_char **VAR_4,
    size_t *VAR_5)
{
 u_int32_t VAR_6;
 const u_char *VAR_7 = FUNC_3(VAR_3);

 if (VAR_4 != ((void*)0))
  *VAR_4 = ((void*)0);
 if (VAR_5 != ((void*)0))
  *VAR_5 = 0;
 if (FUNC_2(VAR_3) < 4) {
  FUNC_1(("SSH_ERR_MESSAGE_INCOMPLETE"));
  return VAR_1;
 }
 VAR_6 = FUNC_0(VAR_7);
 if (VAR_6 > VAR_0 - 4) {
  FUNC_1(("SSH_ERR_STRING_TOO_LARGE"));
  return VAR_2;
 }
 if (FUNC_2(VAR_3) - 4 < VAR_6) {
  FUNC_1(("SSH_ERR_MESSAGE_INCOMPLETE"));
  return VAR_1;
 }
 if (VAR_4 != ((void*)0))
  *VAR_4 = VAR_7 + 4;
 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_6;
 return 0;
}
