
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshkey {int dummy; } ;
struct sshbuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sshbuf*) ;
 struct sshbuf* FUNC_1 () ;
 int FUNC_2 (int,struct sshbuf*) ;
 int FUNC_3 (struct sshbuf*,int,char const*,struct sshkey**,char**) ;

int
FUNC_4(int VAR_1, int VAR_2, const char *VAR_3,
    struct sshkey **VAR_4, char **VAR_5)
{
 struct sshbuf *VAR_6 = ((void*)0);
 int VAR_7;

 if (VAR_4 != ((void*)0))
  *VAR_4 = ((void*)0);
 if ((VAR_6 = FUNC_1()) == ((void*)0)) {
  VAR_7 = VAR_0;
  goto out;
 }
 if ((VAR_7 = FUNC_2(VAR_1, VAR_6)) != 0 ||
     (VAR_7 = FUNC_3(VAR_6, VAR_2,
     VAR_3, VAR_4, VAR_5)) != 0)
  goto out;


 VAR_7 = 0;
 out:
 FUNC_0(VAR_6);
 return VAR_7;
}
