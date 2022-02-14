
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshkey {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (int,int,char const*,struct sshkey**,char**) ;
 scalar_t__ FUNC_3 (int,char const*) ;
 int FUNC_4 (struct sshkey*,char const*) ;

int
FUNC_5(int VAR_3, const char *VAR_4, const char *VAR_5,
    struct sshkey **VAR_6, char **VAR_7, int *VAR_8)
{
 int VAR_9, VAR_10;

 if (VAR_6 != ((void*)0))
  *VAR_6 = ((void*)0);
 if (VAR_7 != ((void*)0))
  *VAR_7 = ((void*)0);

 if ((VAR_9 = FUNC_1(VAR_4, VAR_0)) < 0) {
  if (VAR_8 != ((void*)0))
   *VAR_8 = 0;
  return VAR_2;
 }
 if (FUNC_3(VAR_9, VAR_4) != 0) {
  if (VAR_8 != ((void*)0))
   *VAR_8 = 0;
  VAR_10 = VAR_1;
  goto out;
 }
 if (VAR_8 != ((void*)0))
  *VAR_8 = 1;

 VAR_10 = FUNC_2(VAR_9, VAR_3, VAR_5, VAR_6, VAR_7);
 if (VAR_10 == 0 && VAR_6 && *VAR_6)
  VAR_10 = FUNC_4(*VAR_6, VAR_4);
 out:
 FUNC_0(VAR_9);
 return VAR_10;
}
