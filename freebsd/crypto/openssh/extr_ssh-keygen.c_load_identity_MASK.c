
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshkey {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_2 ;
 char* FUNC_3 (char*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,char*,struct sshkey**,int *) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (scalar_t__) ;

__attribute__((used)) static struct sshkey *
FUNC_8(char *VAR_3)
{
 char *VAR_4;
 struct sshkey *VAR_5;
 int VAR_6;

 if ((VAR_6 = FUNC_5(VAR_3, "", &VAR_5, ((void*)0))) == 0)
  return VAR_5;
 if (VAR_6 != VAR_1)
  FUNC_1("Load key \"%s\": %s", VAR_3, FUNC_4(VAR_6));
 if (VAR_2)
  VAR_4 = FUNC_7(VAR_2);
 else
  VAR_4 = FUNC_3("Enter passphrase: ", VAR_0);
 VAR_6 = FUNC_5(VAR_3, VAR_4, &VAR_5, ((void*)0));
 FUNC_0(VAR_4, FUNC_6(VAR_4));
 FUNC_2(VAR_4);
 if (VAR_6 != 0)
  FUNC_1("Load key \"%s\": %s", VAR_3, FUNC_4(VAR_6));
 return VAR_5;
}
