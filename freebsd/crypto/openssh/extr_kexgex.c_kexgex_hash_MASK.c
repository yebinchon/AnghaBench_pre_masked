
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
 int VAR_4 ;
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
 int FUNC_10 (struct sshbuf*,int) ;
 int FUNC_11 (struct sshbuf*,int ) ;
 int VAR_5 ;

int
FUNC_12(
    int VAR_6,
    const char *VAR_7,
    const char *VAR_8,
    const u_char *VAR_9, size_t VAR_10,
    const u_char *VAR_11, size_t VAR_12,
    const u_char *VAR_13, size_t VAR_14,
    int VAR_15, int VAR_16, int VAR_17,
    const BIGNUM *VAR_18,
    const BIGNUM *VAR_19,
    const BIGNUM *VAR_20,
    const BIGNUM *VAR_21,
    const BIGNUM *VAR_22,
    u_char *VAR_23, size_t *VAR_24)
{
 struct sshbuf *VAR_25;
 int VAR_26;

 if (*VAR_24 < FUNC_2(VAR_1))
  return VAR_3;
 if ((VAR_25 = FUNC_5()) == ((void*)0))
  return VAR_2;
 if ((VAR_26 = FUNC_8(VAR_25, VAR_7)) != 0 ||
     (VAR_26 = FUNC_8(VAR_25, VAR_8)) != 0 ||

     (VAR_26 = FUNC_10(VAR_25, VAR_10+1)) != 0 ||
     (VAR_26 = FUNC_11(VAR_25, VAR_0)) != 0 ||
     (VAR_26 = FUNC_6(VAR_25, VAR_9, VAR_10)) != 0 ||
     (VAR_26 = FUNC_10(VAR_25, VAR_12+1)) != 0 ||
     (VAR_26 = FUNC_11(VAR_25, VAR_0)) != 0 ||
     (VAR_26 = FUNC_6(VAR_25, VAR_11, VAR_12)) != 0 ||
     (VAR_26 = FUNC_9(VAR_25, VAR_13, VAR_14)) != 0 ||
     (VAR_15 != -1 && (VAR_26 = FUNC_10(VAR_25, VAR_15)) != 0) ||
     (VAR_26 = FUNC_10(VAR_25, VAR_16)) != 0 ||
     (VAR_17 != -1 && (VAR_26 = FUNC_10(VAR_25, VAR_17)) != 0) ||
     (VAR_26 = FUNC_7(VAR_25, VAR_18)) != 0 ||
     (VAR_26 = FUNC_7(VAR_25, VAR_19)) != 0 ||
     (VAR_26 = FUNC_7(VAR_25, VAR_20)) != 0 ||
     (VAR_26 = FUNC_7(VAR_25, VAR_21)) != 0 ||
     (VAR_26 = FUNC_7(VAR_25, VAR_22)) != 0) {
  FUNC_4(VAR_25);
  return VAR_26;
 }



 if (FUNC_1(VAR_6, VAR_25, VAR_23, *VAR_24) != 0) {
  FUNC_4(VAR_25);
  return VAR_4;
 }
 FUNC_4(VAR_25);
 *VAR_24 = FUNC_2(VAR_6);



 return 0;
}
