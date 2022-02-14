
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshkey {int dummy; } ;
struct sshbuf {int dummy; } ;


 int FUNC_0 (struct sshbuf*) ;
 int FUNC_1 (struct sshbuf*,struct sshbuf**) ;
 int FUNC_2 (struct sshbuf*,struct sshkey**,int) ;

int
FUNC_3(struct sshbuf *VAR_0, struct sshkey **VAR_1)
{
 struct sshbuf *VAR_2;
 int VAR_3;

 if ((VAR_3 = FUNC_1(VAR_0, &VAR_2)) != 0)
  return VAR_3;
 VAR_3 = FUNC_2(VAR_2, VAR_1, 1);
 FUNC_0(VAR_2);
 return VAR_3;
}
