
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sshbuf {int dummy; } ;
typedef int d ;
typedef int BIGNUM ;


 int FUNC_0 (int const*,int*) ;
 int FUNC_1 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (struct sshbuf*,int*,int) ;

int
FUNC_4(struct sshbuf *VAR_3, const BIGNUM *VAR_4)
{
 u_char VAR_5[VAR_0 + 1];
 int VAR_6 = FUNC_1(VAR_4), VAR_7 = 0, VAR_8;

 if (VAR_6 < 0 || VAR_6 > VAR_0)
  return VAR_2;
 *VAR_5 = '\0';
 if (FUNC_0(VAR_4, VAR_5 + 1) != VAR_6)
  return VAR_1;

 if (VAR_6 > 0 && (VAR_5[1] & 0x80) != 0)
  VAR_7 = 1;
 if ((VAR_8 = FUNC_3(VAR_3, VAR_5 + 1 - VAR_7, VAR_6 + VAR_7)) < 0) {
  FUNC_2(VAR_5, sizeof(VAR_5));
  return VAR_8;
 }
 FUNC_2(VAR_5, sizeof(VAR_5));
 return 0;
}
