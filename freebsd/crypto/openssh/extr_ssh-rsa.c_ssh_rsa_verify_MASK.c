
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sshkey {int * rsa; int type; } ;
struct sshbuf {int dummy; } ;
typedef int digest ;
typedef int BIGNUM ;


 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int const**,int *,int *) ;
 size_t FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,size_t) ;
 int FUNC_6 (int *,int *,size_t) ;
 int FUNC_7 (int,int *,size_t,int *,size_t,int *) ;
 int * FUNC_8 (int *,size_t) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char const*) ;
 size_t FUNC_11 (int) ;
 int FUNC_12 (int,int const*,size_t,int *,int) ;
 int FUNC_13 (struct sshbuf*) ;
 struct sshbuf* FUNC_14 (int const*,size_t) ;
 scalar_t__ FUNC_15 (struct sshbuf*,char**,int *) ;
 scalar_t__ FUNC_16 (struct sshbuf*,int **,size_t*) ;
 scalar_t__ FUNC_17 (struct sshbuf*) ;
 scalar_t__ FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (char const*,char*) ;

int
FUNC_20(const struct sshkey *VAR_12,
    const u_char *VAR_13, size_t VAR_14, const u_char *VAR_15, size_t VAR_16,
    const char *VAR_17)
{
 const BIGNUM *VAR_18;
 char *VAR_19 = ((void*)0);
 int VAR_20, VAR_21, VAR_22 = VAR_3;
 size_t VAR_23 = 0, VAR_24, VAR_25, VAR_26;
 struct sshbuf *VAR_27 = ((void*)0);
 u_char VAR_28[VAR_1], *VAR_29, *VAR_30 = ((void*)0);

 if (VAR_12 == ((void*)0) || VAR_12->rsa == ((void*)0) ||
     FUNC_18(VAR_12->type) != VAR_0 ||
     VAR_13 == ((void*)0) || VAR_14 == 0)
  return VAR_4;
 FUNC_1(VAR_12->rsa, &VAR_18, ((void*)0), ((void*)0));
 if (FUNC_0(VAR_18) < VAR_11)
  return VAR_7;

 if ((VAR_27 = FUNC_14(VAR_13, VAR_14)) == ((void*)0))
  return VAR_2;
 if (FUNC_15(VAR_27, &VAR_19, ((void*)0)) != 0) {
  VAR_22 = VAR_5;
  goto out;
 }
 if ((VAR_20 = FUNC_9(VAR_19)) == -1) {
  VAR_22 = VAR_8;
  goto out;
 }




 if (VAR_17 != ((void*)0) && FUNC_19(VAR_17, "ssh-rsa-cert-v01@openssh.com") != 0) {
  if ((VAR_21 = FUNC_10(VAR_17)) == -1) {
   VAR_22 = VAR_4;
   goto out;
  }
  if (VAR_20 != VAR_21) {
   VAR_22 = VAR_9;
   goto out;
  }
 }
 if (FUNC_16(VAR_27, &VAR_30, &VAR_23) != 0) {
  VAR_22 = VAR_5;
  goto out;
 }
 if (FUNC_17(VAR_27) != 0) {
  VAR_22 = VAR_10;
  goto out;
 }

 VAR_25 = FUNC_2(VAR_12->rsa);
 if (VAR_23 > VAR_25) {
  VAR_22 = VAR_6;
  goto out;
 } else if (VAR_23 < VAR_25) {
  VAR_24 = VAR_25 - VAR_23;
  VAR_29 = VAR_30;
  if ((VAR_30 = FUNC_8(VAR_30, VAR_25)) == ((void*)0)) {
   VAR_30 = VAR_29;
   VAR_22 = VAR_2;
   goto out;
  }
  FUNC_6(VAR_30 + VAR_24, VAR_30, VAR_23);
  FUNC_3(VAR_30, VAR_24);
  VAR_23 = VAR_25;
 }
 if ((VAR_26 = FUNC_11(VAR_20)) == 0) {
  VAR_22 = VAR_3;
  goto out;
 }
 if ((VAR_22 = FUNC_12(VAR_20, VAR_15, VAR_16,
     VAR_28, sizeof(VAR_28))) != 0)
  goto out;

 VAR_22 = FUNC_7(VAR_20, VAR_28, VAR_26, VAR_30, VAR_23,
     VAR_12->rsa);
 out:
 FUNC_5(VAR_30, VAR_23);
 FUNC_4(VAR_19);
 FUNC_13(VAR_27);
 FUNC_3(VAR_28, sizeof(VAR_28));
 return VAR_22;
}
