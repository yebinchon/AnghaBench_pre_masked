
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshkey {int dummy; } ;
struct ssh {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,struct sshkey*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(struct sshkey *VAR_2, struct ssh *VAR_3)
{
 if (FUNC_1(VAR_0, VAR_1, VAR_2) == -1)
  FUNC_0("Host key verification failed.");
 return 0;
}
