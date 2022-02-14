
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
typedef int u_char ;
struct sshkey {int * rsa; int type; } ;
struct sshbuf {int dummy; } ;
typedef int digest ;
typedef int BIGNUM ;


 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int const**,int *,int *) ;
 int FUNC_2 (int,int *,size_t,int *,size_t*,int *) ;
 size_t FUNC_3 (int *) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,size_t) ;
 int * FUNC_6 (size_t) ;
 int FUNC_7 (int *,int ,size_t) ;
 int FUNC_8 (int *,int *,size_t) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (char const*) ;
 size_t FUNC_12 (int) ;
 int FUNC_13 (int,int const*,size_t,int *,int) ;
 int FUNC_14 (struct sshbuf*) ;
 size_t FUNC_15 (struct sshbuf*) ;
 struct sshbuf* FUNC_16 () ;
 int FUNC_17 (struct sshbuf*) ;
 int FUNC_18 (struct sshbuf*,int ) ;
 int FUNC_19 (struct sshbuf*,int *,size_t) ;
 scalar_t__ FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (char const*) ;

int
FUNC_22(const struct sshkey *VAR_10, u_char **VAR_11, size_t *VAR_12,
    const u_char *VAR_13, size_t VAR_14, const char *VAR_15)
{
 const BIGNUM *VAR_16;
 u_char VAR_17[VAR_2], *VAR_18 = ((void*)0);
 size_t VAR_19 = 0;
 u_int VAR_20, VAR_21;
 int VAR_22, VAR_23, VAR_24 = VAR_5;
 struct sshbuf *VAR_25 = ((void*)0);

 if (VAR_12 != ((void*)0))
  *VAR_12 = 0;
 if (VAR_11 != ((void*)0))
  *VAR_11 = ((void*)0);

 if (VAR_15 == ((void*)0) || FUNC_21(VAR_15) == 0)
  VAR_23 = VAR_3;
 else
  VAR_23 = FUNC_11(VAR_15);
 if (VAR_10 == ((void*)0) || VAR_10->rsa == ((void*)0) || VAR_23 == -1 ||
     FUNC_20(VAR_10->type) != VAR_0)
  return VAR_6;
 FUNC_1(VAR_10->rsa, &VAR_16, ((void*)0), ((void*)0));
 if (FUNC_0(VAR_16) < VAR_9)
  return VAR_7;
 VAR_19 = FUNC_3(VAR_10->rsa);
 if (VAR_19 <= 0 || VAR_19 > VAR_1)
  return VAR_6;


 VAR_22 = FUNC_10(VAR_23);
 if ((VAR_20 = FUNC_12(VAR_23)) == 0)
  return VAR_5;
 if ((VAR_24 = FUNC_13(VAR_23, VAR_13, VAR_14,
     VAR_17, sizeof(VAR_17))) != 0)
  goto out;

 if ((VAR_18 = FUNC_6(VAR_19)) == ((void*)0)) {
  VAR_24 = VAR_4;
  goto out;
 }

 if (FUNC_2(VAR_22, VAR_17, VAR_20, VAR_18, &VAR_21, VAR_10->rsa) != 1) {
  VAR_24 = VAR_8;
  goto out;
 }
 if (VAR_21 < VAR_19) {
  size_t VAR_26 = VAR_19 - VAR_21;
  FUNC_8(VAR_18 + VAR_26, VAR_18, VAR_21);
  FUNC_4(VAR_18, VAR_26);
 } else if (VAR_21 > VAR_19) {
  VAR_24 = VAR_5;
  goto out;
 }

 if ((VAR_25 = FUNC_16()) == ((void*)0)) {
  VAR_24 = VAR_4;
  goto out;
 }
 if ((VAR_24 = FUNC_18(VAR_25, FUNC_9(VAR_23))) != 0 ||
     (VAR_24 = FUNC_19(VAR_25, VAR_18, VAR_19)) != 0)
  goto out;
 VAR_21 = FUNC_15(VAR_25);
 if (VAR_11 != ((void*)0)) {
  if ((*VAR_11 = FUNC_6(VAR_21)) == ((void*)0)) {
   VAR_24 = VAR_4;
   goto out;
  }
  FUNC_7(*VAR_11, FUNC_17(VAR_25), VAR_21);
 }
 if (VAR_12 != ((void*)0))
  *VAR_12 = VAR_21;
 VAR_24 = 0;
 out:
 FUNC_4(VAR_17, sizeof(VAR_17));
 FUNC_5(VAR_18, VAR_19);
 FUNC_14(VAR_25);
 return VAR_24;
}
