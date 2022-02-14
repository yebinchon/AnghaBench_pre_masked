
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;
struct sshbuf {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,char const*,size_t) ;
 int FUNC_3 (struct sshbuf*,char const**,size_t*) ;

int
FUNC_4(struct sshbuf *VAR_1, u_char **VAR_2, size_t *VAR_3)
{
 const u_char *VAR_4;
 size_t VAR_5;
 int VAR_6;

 if (VAR_2 != ((void*)0))
  *VAR_2 = ((void*)0);
 if (VAR_3 != ((void*)0))
  *VAR_3 = 0;
 if ((VAR_6 = FUNC_3(VAR_1, &VAR_4, &VAR_5)) < 0)
  return VAR_6;
 if (VAR_2 != ((void*)0)) {
  if ((*VAR_2 = FUNC_1(VAR_5 + 1)) == ((void*)0)) {
   FUNC_0(("SSH_ERR_ALLOC_FAIL"));
   return VAR_0;
  }
  if (VAR_5 != 0)
   FUNC_2(*VAR_2, VAR_4, VAR_5);
  (*VAR_2)[VAR_5] = '\0';
 }
 if (VAR_3 != ((void*)0))
  *VAR_3 = VAR_5;
 return 0;
}
