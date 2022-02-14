
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sshbuf {int dummy; } ;


 int FUNC_0 (struct sshbuf*,int,int **) ;

int
FUNC_1(struct sshbuf *VAR_0, u_char VAR_1)
{
 u_char *VAR_2;
 int VAR_3;

 if ((VAR_3 = FUNC_0(VAR_0, 1, &VAR_2)) < 0)
  return VAR_3;
 VAR_2[0] = VAR_1;
 return 0;
}
