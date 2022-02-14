
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshkey {int dummy; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sshkey*,struct sshkey*) ;
 scalar_t__ FUNC_1 (struct sshkey*,struct sshkey*) ;
 int FUNC_2 (struct sshkey*) ;
 int FUNC_3 (char const*,struct sshkey**) ;
 int FUNC_4 (int,char const*,char const*,struct sshkey**,int *,int*) ;
 int FUNC_5 (struct sshkey*) ;

int
FUNC_6(int VAR_2, const char *VAR_3, const char *VAR_4,
    struct sshkey **VAR_5, int *VAR_6)
{
 struct sshkey *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
 int VAR_9;

 if (VAR_5 != ((void*)0))
  *VAR_5 = ((void*)0);

 switch (VAR_2) {





 case 131:
 case 128:
 case 129:
  break;
 default:
  return VAR_1;
 }

 if ((VAR_9 = FUNC_4(VAR_2, VAR_3,
     VAR_4, &VAR_7, ((void*)0), VAR_6)) != 0 ||
     (VAR_9 = FUNC_3(VAR_3, &VAR_8)) != 0)
  goto out;


 if (FUNC_1(VAR_7, VAR_8) == 0) {
  VAR_9 = VAR_0;
  goto out;
 }

 if ((VAR_9 = FUNC_5(VAR_7)) != 0 ||
     (VAR_9 = FUNC_0(VAR_8, VAR_7)) != 0)
  goto out;
 VAR_9 = 0;
 if (VAR_5 != ((void*)0)) {
  *VAR_5 = VAR_7;
  VAR_7 = ((void*)0);
 }
 out:
 FUNC_2(VAR_7);
 FUNC_2(VAR_8);
 return VAR_9;
}
