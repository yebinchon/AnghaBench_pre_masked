
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sshkey {int dummy; } ;
struct sshbuf {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct sshbuf*,char**,int *) ;
 int FUNC_2 (struct sshbuf*,int const**,size_t*) ;
 int FUNC_3 (int const*,size_t,struct sshkey**) ;

__attribute__((used)) static int
FUNC_4(struct sshbuf *VAR_0, struct sshkey **VAR_1, char **VAR_2)
{
 int VAR_3;
 char *VAR_4 = ((void*)0);
 const u_char *VAR_5;
 size_t VAR_6;

 if ((VAR_3 = FUNC_2(VAR_0, &VAR_5, &VAR_6)) != 0 ||
     (VAR_3 = FUNC_1(VAR_0, &VAR_4, ((void*)0))) != 0)
  goto out;
 if ((VAR_3 = FUNC_3(VAR_5, VAR_6, VAR_1)) != 0)
  goto out;
 if (VAR_2 != ((void*)0)) {
  *VAR_2 = VAR_4;
  VAR_4 = ((void*)0);
 }
 VAR_3 = 0;
 out:
 FUNC_0(VAR_4);
 return VAR_3;
}
