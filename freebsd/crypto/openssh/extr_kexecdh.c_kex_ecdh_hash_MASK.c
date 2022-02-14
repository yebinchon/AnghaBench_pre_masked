
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sshbuf {int dummy; } ;
typedef int EC_POINT ;
typedef int EC_GROUP ;
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
 int FUNC_9 (struct sshbuf*,int const*,int const*) ;
 int FUNC_10 (struct sshbuf*,int const*,size_t) ;
 int FUNC_11 (struct sshbuf*,size_t) ;
 int FUNC_12 (struct sshbuf*,int ) ;
 int VAR_4 ;

int
FUNC_13(
    int VAR_5,
    const EC_GROUP *VAR_6,
    const char *VAR_7,
    const char *VAR_8,
    const u_char *VAR_9, size_t VAR_10,
    const u_char *VAR_11, size_t VAR_12,
    const u_char *VAR_13, size_t VAR_14,
    const EC_POINT *VAR_15,
    const EC_POINT *VAR_16,
    const BIGNUM *VAR_17,
    u_char *VAR_18, size_t *VAR_19)
{
 struct sshbuf *VAR_20;
 int VAR_21;

 if (*VAR_19 < FUNC_2(VAR_5))
  return VAR_2;
 if ((VAR_20 = FUNC_5()) == ((void*)0))
  return VAR_1;
 if ((VAR_21 = FUNC_8(VAR_20, VAR_7)) != 0 ||
     (VAR_21 = FUNC_8(VAR_20, VAR_8)) != 0 ||

     (VAR_21 = FUNC_11(VAR_20, VAR_10+1)) != 0 ||
     (VAR_21 = FUNC_12(VAR_20, VAR_0)) != 0 ||
     (VAR_21 = FUNC_6(VAR_20, VAR_9, VAR_10)) != 0 ||
     (VAR_21 = FUNC_11(VAR_20, VAR_12+1)) != 0 ||
     (VAR_21 = FUNC_12(VAR_20, VAR_0)) != 0 ||
     (VAR_21 = FUNC_6(VAR_20, VAR_11, VAR_12)) != 0 ||
     (VAR_21 = FUNC_10(VAR_20, VAR_13, VAR_14)) != 0 ||
     (VAR_21 = FUNC_9(VAR_20, VAR_15, VAR_6)) != 0 ||
     (VAR_21 = FUNC_9(VAR_20, VAR_16, VAR_6)) != 0 ||
     (VAR_21 = FUNC_7(VAR_20, VAR_17)) != 0) {
  FUNC_4(VAR_20);
  return VAR_21;
 }



 if (FUNC_1(VAR_5, VAR_20, VAR_18, *VAR_19) != 0) {
  FUNC_4(VAR_20);
  return VAR_3;
 }
 FUNC_4(VAR_20);
 *VAR_19 = FUNC_2(VAR_5);



 return 0;
}
