
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sshbuf {int dummy; } ;


 int FUNC_0 (int *,size_t) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,void const*,size_t) ;
 int FUNC_3 (struct sshbuf*,size_t,int **) ;

int
FUNC_4(struct sshbuf *VAR_2, const void *VAR_3, size_t VAR_4)
{
 u_char *VAR_5;
 int VAR_6;

 if (VAR_4 > VAR_0 - 4) {
  FUNC_1(("SSH_ERR_NO_BUFFER_SPACE"));
  return VAR_1;
 }
 if ((VAR_6 = FUNC_3(VAR_2, VAR_4 + 4, &VAR_5)) < 0)
  return VAR_6;
 FUNC_0(VAR_5, VAR_4);
 if (VAR_4 != 0)
  FUNC_2(VAR_5 + 4, VAR_3, VAR_4);
 return 0;
}
