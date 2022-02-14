
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sshbuf {int dummy; } ;


 int FUNC_0 (int *,void const*,size_t) ;
 int FUNC_1 (struct sshbuf*,size_t,int **) ;

int
FUNC_2(struct sshbuf *VAR_0, const void *VAR_1, size_t VAR_2)
{
 u_char *VAR_3;
 int VAR_4;

 if ((VAR_4 = FUNC_1(VAR_0, VAR_2, &VAR_3)) < 0)
  return VAR_4;
 if (VAR_2 != 0)
  FUNC_0(VAR_3, VAR_1, VAR_2);
 return 0;
}
