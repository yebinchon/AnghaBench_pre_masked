
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshkey {int dummy; } ;
struct sshbuf {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 struct sshbuf* FUNC_1 (char const*) ;
 int FUNC_2 (struct sshbuf*) ;
 int FUNC_3 (struct sshbuf*,char*,struct sshkey**,int *) ;

__attribute__((used)) static struct sshkey *
FUNC_4(const char *VAR_0)
{
 struct sshbuf *VAR_1;
 struct sshkey *VAR_2;

 VAR_1 = FUNC_1(VAR_0);
 FUNC_0(FUNC_3(VAR_1, "", &VAR_2, ((void*)0)), 0);
 FUNC_2(VAR_1);
 return VAR_2;
}
