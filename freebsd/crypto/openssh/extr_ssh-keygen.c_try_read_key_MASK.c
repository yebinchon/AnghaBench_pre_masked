
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshkey {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct sshkey*) ;
 struct sshkey* FUNC_2 (int ) ;
 int FUNC_3 (struct sshkey*,char**) ;

__attribute__((used)) static struct sshkey *
FUNC_4(char **VAR_1)
{
 struct sshkey *VAR_2;
 int VAR_3;

 if ((VAR_2 = FUNC_2(VAR_0)) == ((void*)0))
  FUNC_0("sshkey_new failed");
 if ((VAR_3 = FUNC_3(VAR_2, VAR_1)) == 0)
  return VAR_2;

 FUNC_1(VAR_2);
 return ((void*)0);
}
