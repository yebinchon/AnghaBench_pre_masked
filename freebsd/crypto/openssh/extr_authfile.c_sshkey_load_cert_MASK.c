
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshkey {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char**,char*,char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct sshkey*) ;
 struct sshkey* FUNC_3 (int ) ;
 int FUNC_4 (struct sshkey*,char*,int *) ;

int
FUNC_5(const char *VAR_3, struct sshkey **VAR_4)
{
 struct sshkey *VAR_5 = ((void*)0);
 char *VAR_6 = ((void*)0);
 int VAR_7 = VAR_2;

 if (VAR_4 != ((void*)0))
  *VAR_4 = ((void*)0);

 if (FUNC_0(&VAR_6, "%s-cert.pub", VAR_3) == -1)
  return VAR_1;

 if ((VAR_5 = FUNC_3(VAR_0)) == ((void*)0)) {
  goto out;
 }
 if ((VAR_7 = FUNC_4(VAR_5, VAR_6, ((void*)0))) != 0)
  goto out;

 if (VAR_4 != ((void*)0)) {
  *VAR_4 = VAR_5;
  VAR_5 = ((void*)0);
 }
 VAR_7 = 0;
 out:
 FUNC_1(VAR_6);
 FUNC_2(VAR_5);
 return VAR_7;
}
