
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshkey {int dummy; } ;
struct sshbuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (struct sshbuf*) ;
 int FUNC_2 (struct sshbuf*) ;
 struct sshbuf* FUNC_3 () ;
 int FUNC_4 (struct sshkey const*,struct sshbuf*) ;

int
FUNC_5(const struct sshkey *VAR_2, char **VAR_3)
{
 int VAR_4 = VAR_1;
 struct sshbuf *VAR_5 = ((void*)0);
 char *VAR_6 = ((void*)0);

 if (VAR_3 != ((void*)0))
  *VAR_3 = ((void*)0);
 if ((VAR_5 = FUNC_3()) == ((void*)0))
  return VAR_0;
 if ((VAR_4 = FUNC_4(VAR_2, VAR_5)) != 0)
  goto out;
 if ((VAR_6 = FUNC_1(VAR_5)) == ((void*)0)) {
  VAR_4 = VAR_0;
  goto out;
 }

 if (VAR_3 != ((void*)0)) {
  *VAR_3 = VAR_6;
  VAR_6 = ((void*)0);
 }
 VAR_4 = 0;
 out:
 FUNC_2(VAR_5);
 FUNC_0(VAR_6);
 return VAR_4;
}
