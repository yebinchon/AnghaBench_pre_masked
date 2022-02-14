
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
typedef int u_char ;
struct sshbuf {int dummy; } ;
typedef int BIGNUM ;


 int * FUNC_0 (int const*,size_t,int *) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (struct sshbuf*,int) ;
 int FUNC_5 (struct sshbuf*) ;
 int * FUNC_6 (struct sshbuf*) ;

int
FUNC_7(struct sshbuf *VAR_5, BIGNUM *VAR_6)
{
 const u_char *VAR_7 = FUNC_6(VAR_5);
 u_int16_t VAR_8;
 size_t VAR_9;


 if (FUNC_5(VAR_5) < 2)
  return VAR_4;
 VAR_8 = FUNC_1(VAR_7);
 VAR_9 = (VAR_8 + 7) >> 3;
 if (VAR_9 > VAR_0)
  return VAR_2;
 if (FUNC_5(VAR_5) < 2 + VAR_9)
  return VAR_4;
 if (VAR_6 != ((void*)0) && FUNC_0(VAR_7 + 2, VAR_9, VAR_6) == ((void*)0))
  return VAR_1;
 if (FUNC_4(VAR_5, 2 + VAR_9) != 0) {
  FUNC_3(("SSH_ERR_INTERNAL_ERROR"));
  FUNC_2();
  return VAR_3;
 }
 return 0;
}
