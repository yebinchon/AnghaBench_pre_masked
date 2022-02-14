
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sshbuf {int dummy; } ;


 size_t VAR_0 ;
 char* FUNC_0 (size_t) ;
 int * FUNC_1 (int const*,char,size_t) ;
 int FUNC_2 (char*,int const*,size_t) ;
 size_t FUNC_3 (struct sshbuf*) ;
 int * FUNC_4 (struct sshbuf*) ;

char *
FUNC_5(struct sshbuf *VAR_1)
{
 const u_char *VAR_2 = ((void*)0), *VAR_3 = FUNC_4(VAR_1);
 size_t VAR_4 = FUNC_3(VAR_1);
 char *VAR_5;

 if (VAR_3 == ((void*)0) || VAR_4 > VAR_0)
  return ((void*)0);

 if (VAR_4 > 0 && (VAR_2 = FUNC_1(VAR_3, '\0', VAR_4)) != ((void*)0)) {
  if (VAR_2 != VAR_3 + VAR_4 - 1)
   return ((void*)0);
  VAR_4--;
 }
 if ((VAR_5 = FUNC_0(VAR_4 + 1)) == ((void*)0))
  return ((void*)0);
 if (VAR_4 > 0)
  FUNC_2(VAR_5, VAR_3, VAR_4);
 VAR_5[VAR_4] = '\0';
 return VAR_5;
}
