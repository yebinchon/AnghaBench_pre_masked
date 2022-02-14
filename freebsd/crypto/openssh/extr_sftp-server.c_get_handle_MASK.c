
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sshbuf {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,size_t) ;
 int FUNC_2 (struct sshbuf*,int **,size_t*) ;

__attribute__((used)) static int
FUNC_3(struct sshbuf *VAR_0, int *VAR_1)
{
 u_char *VAR_2;
 int VAR_3;
 size_t VAR_4;

 *VAR_1 = -1;
 if ((VAR_3 = FUNC_2(VAR_0, &VAR_2, &VAR_4)) != 0)
  return VAR_3;
 if (VAR_4 < 256)
  *VAR_1 = FUNC_1(VAR_2, VAR_4);
 FUNC_0(VAR_2);
 return 0;
}
