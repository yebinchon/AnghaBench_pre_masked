
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_char ;
struct sshbuf {int dummy; } ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (struct sshbuf*,int) ;
 int * FUNC_2 (struct sshbuf*) ;

int
FUNC_3(struct sshbuf *VAR_0, u_int32_t *VAR_1)
{
 const u_char *VAR_2 = FUNC_2(VAR_0);
 int VAR_3;

 if ((VAR_3 = FUNC_1(VAR_0, 4)) < 0)
  return VAR_3;
 if (VAR_1 != ((void*)0))
  *VAR_1 = FUNC_0(VAR_2);
 return 0;
}
