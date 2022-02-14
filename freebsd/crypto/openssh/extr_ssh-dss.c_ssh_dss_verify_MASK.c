
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef char u_char ;
struct sshkey {int * dsa; int type; } ;
struct sshbuf {int dummy; } ;
typedef int digest ;
typedef int DSA_SIG ;
typedef int BIGNUM ;


 int * FUNC_0 (char*,int,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (char*,size_t,int *,int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (char*,size_t) ;
 int FUNC_8 (char*) ;
 size_t FUNC_9 (int ) ;
 int FUNC_10 (int ,char const*,size_t,char*,int) ;
 int FUNC_11 (struct sshbuf*) ;
 struct sshbuf* FUNC_12 (char const*,size_t) ;
 scalar_t__ FUNC_13 (struct sshbuf*,char**,int *) ;
 scalar_t__ FUNC_14 (struct sshbuf*,char**,size_t*) ;
 scalar_t__ FUNC_15 (struct sshbuf*) ;
 scalar_t__ FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (char*,char*) ;

int
FUNC_18(const struct sshkey *VAR_13,
    const u_char *VAR_14, size_t VAR_15,
    const u_char *VAR_16, size_t VAR_17, u_int VAR_18)
{
 DSA_SIG *VAR_19 = ((void*)0);
 BIGNUM *VAR_20 = ((void*)0), *VAR_21 = ((void*)0);
 u_char VAR_22[VAR_3], *VAR_23 = ((void*)0);
 size_t VAR_24, VAR_25 = FUNC_9(VAR_4);
 int VAR_26 = VAR_6;
 struct sshbuf *VAR_27 = ((void*)0);
 char *VAR_28 = ((void*)0);

 if (VAR_13 == ((void*)0) || VAR_13->dsa == ((void*)0) ||
     FUNC_16(VAR_13->type) != VAR_1 ||
     VAR_14 == ((void*)0) || VAR_15 == 0)
  return VAR_7;
 if (VAR_25 == 0)
  return VAR_6;


 if ((VAR_27 = FUNC_12(VAR_14, VAR_15)) == ((void*)0))
  return VAR_5;
 if (FUNC_13(VAR_27, &VAR_28, ((void*)0)) != 0 ||
     FUNC_14(VAR_27, &VAR_23, &VAR_24) != 0) {
  VAR_26 = VAR_8;
  goto out;
 }
 if (FUNC_17("ssh-dss", VAR_28) != 0) {
  VAR_26 = VAR_9;
  goto out;
 }
 if (FUNC_15(VAR_27) != 0) {
  VAR_26 = VAR_12;
  goto out;
 }

 if (VAR_24 != VAR_2) {
  VAR_26 = VAR_8;
  goto out;
 }


 if ((VAR_19 = FUNC_4()) == ((void*)0) ||
     (VAR_20 = FUNC_2()) == ((void*)0) ||
     (VAR_21 = FUNC_2()) == ((void*)0)) {
  VAR_26 = VAR_5;
  goto out;
 }
 if ((FUNC_0(VAR_23, VAR_0, VAR_20) == ((void*)0)) ||
     (FUNC_0(VAR_23 + VAR_0, VAR_0, VAR_21) == ((void*)0))) {
  VAR_26 = VAR_10;
  goto out;
 }
 if (!FUNC_5(VAR_19, VAR_20, VAR_21)) {
  VAR_26 = VAR_10;
  goto out;
 }
 VAR_20 = VAR_21 = ((void*)0);


 if ((VAR_26 = FUNC_10(VAR_4, VAR_16, VAR_17,
     VAR_22, sizeof(VAR_22))) != 0)
  goto out;

 switch (FUNC_6(VAR_22, VAR_25, VAR_19, VAR_13->dsa)) {
 case 1:
  VAR_26 = 0;
  break;
 case 0:
  VAR_26 = VAR_11;
  goto out;
 default:
  VAR_26 = VAR_10;
  goto out;
 }

 out:
 FUNC_7(VAR_22, sizeof(VAR_22));
 FUNC_3(VAR_19);
 FUNC_1(VAR_20);
 FUNC_1(VAR_21);
 FUNC_11(VAR_27);
 FUNC_8(VAR_28);
 if (VAR_23 != ((void*)0)) {
  FUNC_7(VAR_23, VAR_24);
  FUNC_8(VAR_23);
 }
 return VAR_26;
}
