
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_char ;
struct sshbuf {int dummy; } ;


 int FUNC_0 (struct sshbuf*,int *,int ) ;
 int FUNC_1 (struct sshbuf*,int *) ;
 int FUNC_2 (struct sshbuf*,int *,int *) ;
 int FUNC_3 (struct sshbuf*,int ,int **) ;

int
FUNC_4(struct sshbuf *VAR_0, struct sshbuf *VAR_1)
{
 u_int32_t VAR_2;
 u_char *VAR_3;
 int VAR_4;






 if ((VAR_4 = FUNC_2(VAR_0, ((void*)0), ((void*)0))) != 0 ||
     (VAR_4 = FUNC_1(VAR_0, &VAR_2)) != 0 ||
     (VAR_4 = FUNC_3(VAR_1, VAR_2, &VAR_3)) != 0 ||
     (VAR_4 = FUNC_0(VAR_0, VAR_3, VAR_2)) != 0)
  return VAR_4;
 return 0;
}
