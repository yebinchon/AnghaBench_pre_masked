
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshkey {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**,char*,char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct sshkey*) ;
 struct sshkey* FUNC_3 (int ) ;
 int FUNC_4 (struct sshkey*,char const*,char**) ;

int
FUNC_5(const char *VAR_2, struct sshkey **VAR_3, char **VAR_4)
{
 struct sshkey *VAR_5 = ((void*)0);
 char *VAR_6 = ((void*)0);
 int VAR_7;

 if (VAR_3 != ((void*)0))
  *VAR_3 = ((void*)0);
 if (VAR_4 != ((void*)0))
  *VAR_4 = ((void*)0);

 if ((VAR_5 = FUNC_3(VAR_0)) == ((void*)0))
  return VAR_1;
 if ((VAR_7 = FUNC_4(VAR_5, VAR_2, VAR_4)) == 0) {
  if (VAR_3 != ((void*)0)) {
   *VAR_3 = VAR_5;
   VAR_5 = ((void*)0);
  }
  VAR_7 = 0;
  goto out;
 }
 FUNC_2(VAR_5);


 if (FUNC_0(&VAR_6, "%s.pub", VAR_2) == -1)
  return VAR_1;
 if ((VAR_5 = FUNC_3(VAR_0)) == ((void*)0)) {
  VAR_7 = VAR_1;
  goto out;
 }
 if ((VAR_7 = FUNC_4(VAR_5, VAR_6, VAR_4)) == 0) {
  if (VAR_3 != ((void*)0)) {
   *VAR_3 = VAR_5;
   VAR_5 = ((void*)0);
  }
  VAR_7 = 0;
 }
 out:
 FUNC_1(VAR_6);
 FUNC_2(VAR_5);
 return VAR_7;
}
