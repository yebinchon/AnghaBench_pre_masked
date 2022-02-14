
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sshbuf {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (size_t) ;
 int * FUNC_2 (int const*,char,size_t) ;
 int FUNC_3 (char*,int const*,size_t) ;
 int FUNC_4 (struct sshbuf*,int const**,size_t*) ;
 int FUNC_5 (struct sshbuf*) ;

int
FUNC_6(struct sshbuf *VAR_2, char **VAR_3, size_t *VAR_4)
{
 size_t VAR_5;
 const u_char *VAR_6, *VAR_7;
 int VAR_8;

 if (VAR_3 != ((void*)0))
  *VAR_3 = ((void*)0);
 if (VAR_4 != ((void*)0))
  *VAR_4 = 0;
 if ((VAR_8 = FUNC_4(VAR_2, &VAR_6, &VAR_5)) != 0)
  return VAR_8;

 if (VAR_5 > 0 &&
     (VAR_7 = FUNC_2(VAR_6 , '\0', VAR_5)) != ((void*)0) && VAR_7 < VAR_6 + VAR_5 - 1) {
  FUNC_0(("SSH_ERR_INVALID_FORMAT"));
  return VAR_1;
 }
 if ((VAR_8 = FUNC_5(VAR_2)) != 0)
  return -1;
 if (VAR_3 != ((void*)0)) {
  if ((*VAR_3 = FUNC_1(VAR_5 + 1)) == ((void*)0)) {
   FUNC_0(("SSH_ERR_ALLOC_FAIL"));
   return VAR_0;
  }
  if (VAR_5 != 0)
   FUNC_3(*VAR_3, VAR_6, VAR_5);
  (*VAR_3)[VAR_5] = '\0';
 }
 if (VAR_4 != ((void*)0))
  *VAR_4 = (size_t)VAR_5;
 return 0;
}
