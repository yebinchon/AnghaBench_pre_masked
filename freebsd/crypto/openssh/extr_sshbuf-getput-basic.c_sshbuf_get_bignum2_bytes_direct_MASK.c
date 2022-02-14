
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sshbuf {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct sshbuf*,size_t) ;
 int FUNC_3 (struct sshbuf*,int const**,size_t*) ;

int
FUNC_4(struct sshbuf *VAR_4,
    const u_char **VAR_5, size_t *VAR_6)
{
 const u_char *VAR_7;
 size_t VAR_8, VAR_9;
 int VAR_10;

 if ((VAR_10 = FUNC_3(VAR_4, &VAR_7, &VAR_9)) < 0)
  return VAR_10;
 VAR_8 = VAR_9;

 if ((VAR_8 != 0 && (*VAR_7 & 0x80) != 0))
  return VAR_1;

 if (VAR_8 > VAR_0 + 1 ||
     (VAR_8 == VAR_0 + 1 && *VAR_7 != 0))
  return VAR_2;

 while (VAR_8 > 0 && *VAR_7 == 0x00) {
  VAR_7++;
  VAR_8--;
 }
 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_7;
 if (VAR_6 != ((void*)0))
  *VAR_6 = VAR_8;
 if (FUNC_2(VAR_4, VAR_9 + 4) != 0) {

  FUNC_1(("SSH_ERR_INTERNAL_ERROR"));
  FUNC_0();
  return VAR_3;
 }
 return 0;
}
