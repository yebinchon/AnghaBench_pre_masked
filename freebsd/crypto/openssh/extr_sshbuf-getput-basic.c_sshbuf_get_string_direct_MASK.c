
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sshbuf {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct sshbuf*,size_t) ;
 int FUNC_3 (struct sshbuf*,int const**,size_t*) ;

int
FUNC_4(struct sshbuf *VAR_1, const u_char **VAR_2, size_t *VAR_3)
{
 size_t VAR_4;
 const u_char *VAR_5;
 int VAR_6;

 if (VAR_2 != ((void*)0))
  *VAR_2 = ((void*)0);
 if (VAR_3 != ((void*)0))
  *VAR_3 = 0;
 if ((VAR_6 = FUNC_3(VAR_1, &VAR_5, &VAR_4)) < 0)
  return VAR_6;
 if (VAR_2 != ((void*)0))
  *VAR_2 = VAR_5;
 if (VAR_3 != ((void*)0))
  *VAR_3 = VAR_4;
 if (FUNC_2(VAR_1, VAR_4 + 4) != 0) {

  FUNC_1(("SSH_ERR_INTERNAL_ERROR"));
  FUNC_0();
  return VAR_0;
 }
 return 0;
}
