
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int8_t ;
typedef scalar_t__ u_char ;
struct sshbuf {int dummy; } ;


 int FUNC_0 (struct sshbuf*,int) ;
 scalar_t__* FUNC_1 (struct sshbuf*) ;

int
FUNC_2(struct sshbuf *VAR_0, u_char *VAR_1)
{
 const u_char *VAR_2 = FUNC_1(VAR_0);
 int VAR_3;

 if ((VAR_3 = FUNC_0(VAR_0, 1)) < 0)
  return VAR_3;
 if (VAR_1 != ((void*)0))
  *VAR_1 = (u_int8_t)*VAR_2;
 return 0;
}
