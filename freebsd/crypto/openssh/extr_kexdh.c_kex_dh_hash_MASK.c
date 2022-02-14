
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sshbuf {int dummy; } ;
typedef int BIGNUM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int *,size_t) ;
 scalar_t__ FUNC_1 (int,struct sshbuf*,int *,size_t) ;
 size_t FUNC_2 (int) ;
 int FUNC_3 (struct sshbuf*,int ) ;
 int FUNC_4 (struct sshbuf*) ;
 struct sshbuf* FUNC_5 () ;
 int FUNC_6 (struct sshbuf*,int const*,size_t) ;
 int FUNC_7 (struct sshbuf*,int const*) ;
 int FUNC_8 (struct sshbuf*,char const*) ;
 int FUNC_9 (struct sshbuf*,int const*,size_t) ;
 int FUNC_10 (struct sshbuf*,size_t) ;
 int FUNC_11 (struct sshbuf*,int ) ;
 int VAR_4 ;

int
FUNC_12(
    int VAR_5,
    const char *VAR_6,
    const char *VAR_7,
    const u_char *VAR_8, size_t VAR_9,
    const u_char *VAR_10, size_t VAR_11,
    const u_char *VAR_12, size_t VAR_13,
    const BIGNUM *VAR_14,
    const BIGNUM *VAR_15,
    const BIGNUM *VAR_16,
    u_char *VAR_17, size_t *VAR_18)
{
 struct sshbuf *VAR_19;
 int VAR_20;

 if (*VAR_18 < FUNC_2(VAR_5))
  return VAR_2;
 if ((VAR_19 = FUNC_5()) == ((void*)0))
  return VAR_1;
 if ((VAR_20 = FUNC_8(VAR_19, VAR_6)) != 0 ||
     (VAR_20 = FUNC_8(VAR_19, VAR_7)) != 0 ||

     (VAR_20 = FUNC_10(VAR_19, VAR_9+1)) != 0 ||
     (VAR_20 = FUNC_11(VAR_19, VAR_0)) != 0 ||
     (VAR_20 = FUNC_6(VAR_19, VAR_8, VAR_9)) != 0 ||
     (VAR_20 = FUNC_10(VAR_19, VAR_11+1)) != 0 ||
     (VAR_20 = FUNC_11(VAR_19, VAR_0)) != 0 ||
     (VAR_20 = FUNC_6(VAR_19, VAR_10, VAR_11)) != 0 ||
     (VAR_20 = FUNC_9(VAR_19, VAR_12, VAR_13)) != 0 ||
     (VAR_20 = FUNC_7(VAR_19, VAR_14)) != 0 ||
     (VAR_20 = FUNC_7(VAR_19, VAR_15)) != 0 ||
     (VAR_20 = FUNC_7(VAR_19, VAR_16)) != 0) {
  FUNC_4(VAR_19);
  return VAR_20;
 }



 if (FUNC_1(VAR_5, VAR_19, VAR_17, *VAR_18) != 0) {
  FUNC_4(VAR_19);
  return VAR_3;
 }
 FUNC_4(VAR_19);
 *VAR_18 = FUNC_2(VAR_5);



 return 0;
}
