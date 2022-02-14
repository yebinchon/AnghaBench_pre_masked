
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sshbuf {int dummy; } ;
typedef int d ;
typedef int BIGNUM ;


 int FUNC_0 (int const*,int *) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int *,size_t) ;
 int FUNC_5 (struct sshbuf*,size_t,int **) ;

int
FUNC_6(struct sshbuf *VAR_3, const BIGNUM *VAR_4)
{
 int VAR_5, VAR_6 = FUNC_1(VAR_4);
 size_t VAR_7 = (VAR_6 + 7) / 8;
 u_char VAR_8[VAR_0], *VAR_9;

 if (VAR_6 < 0 || VAR_7 > VAR_0)
  return VAR_2;
 if (FUNC_0(VAR_4, VAR_8) != (int)VAR_7)
  return VAR_1;
 if ((VAR_5 = FUNC_5(VAR_3, VAR_7 + 2, &VAR_9)) < 0) {
  FUNC_3(VAR_8, sizeof(VAR_8));
  return VAR_5;
 }
 FUNC_2(VAR_9, VAR_6);
 if (VAR_7 != 0)
  FUNC_4(VAR_9 + 2, VAR_8, VAR_7);
 FUNC_3(VAR_8, sizeof(VAR_8));
 return 0;
}
