
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshkey {int dummy; } ;
struct sshbuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct sshbuf*,char*,int ,char*) ;
 int FUNC_2 (struct sshkey const*) ;
 int FUNC_3 (struct sshkey const*,char**) ;

int
FUNC_4(const struct sshkey *VAR_1, struct sshbuf *VAR_2)
{
 int VAR_3 = VAR_0;
 char *VAR_4 = ((void*)0);

 if ((VAR_3 = FUNC_3(VAR_1, &VAR_4)) != 0)
  goto out;
 if ((VAR_3 = FUNC_1(VAR_2, "%s %s",
     FUNC_2(VAR_1), VAR_4)) != 0)
  goto out;
 VAR_3 = 0;
 out:
 FUNC_0(VAR_4);
 return VAR_3;
}
