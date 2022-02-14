
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct sshkey {int * dsa; int type; } ;
struct sshbuf {int dummy; } ;
typedef int digest ;
typedef int DSA_SIG ;
typedef int BIGNUM ;


 int FUNC_0 (int const*,int *) ;
 size_t FUNC_1 (int const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int const**,int const**) ;
 int * FUNC_4 (int *,size_t,int *) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int *,int) ;
 int * FUNC_6 (size_t) ;
 int FUNC_7 (int *,int ,size_t) ;
 size_t FUNC_8 (int ) ;
 int FUNC_9 (int ,int const*,size_t,int *,int) ;
 int FUNC_10 (struct sshbuf*) ;
 size_t FUNC_11 (struct sshbuf*) ;
 struct sshbuf* FUNC_12 () ;
 int FUNC_13 (struct sshbuf*) ;
 int FUNC_14 (struct sshbuf*,char*) ;
 int FUNC_15 (struct sshbuf*,int *,int) ;
 scalar_t__ FUNC_16 (int ) ;

int
FUNC_17(const struct sshkey *VAR_9, u_char **VAR_10, size_t *VAR_11,
    const u_char *VAR_12, size_t VAR_13, u_int VAR_14)
{
 DSA_SIG *VAR_15 = ((void*)0);
 const BIGNUM *VAR_16, *VAR_17;
 u_char VAR_18[VAR_3], VAR_19[VAR_2];
 size_t VAR_20, VAR_21, VAR_22, VAR_23 = FUNC_8(VAR_4);
 struct sshbuf *VAR_24 = ((void*)0);
 int VAR_25 = VAR_7;

 if (VAR_11 != ((void*)0))
  *VAR_11 = 0;
 if (VAR_10 != ((void*)0))
  *VAR_10 = ((void*)0);

 if (VAR_9 == ((void*)0) || VAR_9->dsa == ((void*)0) ||
     FUNC_16(VAR_9->type) != VAR_1)
  return VAR_7;
 if (VAR_23 == 0)
  return VAR_6;

 if ((VAR_25 = FUNC_9(VAR_4, VAR_12, VAR_13,
     VAR_18, sizeof(VAR_18))) != 0)
  goto out;

 if ((VAR_15 = FUNC_4(VAR_18, VAR_23, VAR_9->dsa)) == ((void*)0)) {
  VAR_25 = VAR_8;
  goto out;
 }

 FUNC_3(VAR_15, &VAR_16, &VAR_17);
 VAR_20 = FUNC_1(VAR_16);
 VAR_21 = FUNC_1(VAR_17);
 if (VAR_20 > VAR_0 || VAR_21 > VAR_0) {
  VAR_25 = VAR_6;
  goto out;
 }
 FUNC_5(VAR_19, VAR_2);
 FUNC_0(VAR_16, VAR_19 + VAR_2 - VAR_0 - VAR_20);
 FUNC_0(VAR_17, VAR_19 + VAR_2 - VAR_21);

 if ((VAR_24 = FUNC_12()) == ((void*)0)) {
  VAR_25 = VAR_5;
  goto out;
 }
 if ((VAR_25 = FUNC_14(VAR_24, "ssh-dss")) != 0 ||
     (VAR_25 = FUNC_15(VAR_24, VAR_19, VAR_2)) != 0)
  goto out;

 VAR_22 = FUNC_11(VAR_24);
 if (VAR_10 != ((void*)0)) {
  if ((*VAR_10 = FUNC_6(VAR_22)) == ((void*)0)) {
   VAR_25 = VAR_5;
   goto out;
  }
  FUNC_7(*VAR_10, FUNC_13(VAR_24), VAR_22);
 }
 if (VAR_11 != ((void*)0))
  *VAR_11 = VAR_22;
 VAR_25 = 0;
 out:
 FUNC_5(VAR_18, sizeof(VAR_18));
 FUNC_2(VAR_15);
 FUNC_10(VAR_24);
 return VAR_25;
}
