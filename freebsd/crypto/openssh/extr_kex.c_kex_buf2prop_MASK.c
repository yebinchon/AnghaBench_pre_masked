
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
typedef size_t u_char ;
struct sshbuf {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 char** FUNC_0 (size_t,int) ;
 int FUNC_1 (char*,size_t,...) ;
 int FUNC_2 (char**) ;
 int * VAR_3 ;
 int FUNC_3 (struct sshbuf*,int ) ;
 int FUNC_4 (struct sshbuf*) ;
 struct sshbuf* FUNC_5 (struct sshbuf*) ;
 int FUNC_6 (struct sshbuf*,char**,int *) ;
 int FUNC_7 (struct sshbuf*,size_t*) ;
 int FUNC_8 (struct sshbuf*,size_t*) ;

int
FUNC_9(struct sshbuf *VAR_4, int *VAR_5, char ***VAR_6)
{
 struct sshbuf *VAR_7 = ((void*)0);
 u_char VAR_8;
 u_int VAR_9;
 char **VAR_10 = ((void*)0);
 int VAR_11;

 *VAR_6 = ((void*)0);
 if ((VAR_10 = FUNC_0(VAR_1, sizeof(char *))) == ((void*)0))
  return VAR_2;
 if ((VAR_7 = FUNC_5(VAR_4)) == ((void*)0)) {
  VAR_11 = VAR_2;
  goto out;
 }
 if ((VAR_11 = FUNC_3(VAR_7, VAR_0)) != 0)
  goto out;

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  if ((VAR_11 = FUNC_6(VAR_7, &(VAR_10[VAR_9]), ((void*)0))) != 0)
   goto out;
  FUNC_1("%s: %s", VAR_3[VAR_9], VAR_10[VAR_9]);
 }

 if ((VAR_11 = FUNC_8(VAR_7, &VAR_8)) != 0 ||
     (VAR_11 = FUNC_7(VAR_7, &VAR_9)) != 0)
  goto out;
 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_8;
 FUNC_1("first_kex_follows %d ", VAR_8);
 FUNC_1("reserved %u ", VAR_9);
 VAR_11 = 0;
 *VAR_6 = VAR_10;
 out:
 if (VAR_11 != 0 && VAR_10 != ((void*)0))
  FUNC_2(VAR_10);
 FUNC_4(VAR_7);
 return VAR_11;
}
