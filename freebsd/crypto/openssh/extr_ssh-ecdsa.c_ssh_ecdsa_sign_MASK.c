
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct sshkey {int * ecdsa; int ecdsa_nid; int type; } ;
struct sshbuf {int dummy; } ;
typedef int digest ;
typedef int ECDSA_SIG ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int const**,int const**) ;
 int * FUNC_2 (int *,size_t,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,int) ;
 int * FUNC_4 (size_t) ;
 int FUNC_5 (int *,int ,size_t) ;
 size_t FUNC_6 (int) ;
 int FUNC_7 (int,int const*,size_t,int *,int) ;
 int FUNC_8 (struct sshbuf*) ;
 size_t FUNC_9 (struct sshbuf*) ;
 struct sshbuf* FUNC_10 () ;
 int FUNC_11 (struct sshbuf*) ;
 int FUNC_12 (struct sshbuf*,int const*) ;
 int FUNC_13 (struct sshbuf*,int ) ;
 int FUNC_14 (struct sshbuf*,struct sshbuf*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct sshkey const*) ;
 scalar_t__ FUNC_17 (int ) ;

int
FUNC_18(const struct sshkey *VAR_6, u_char **VAR_7, size_t *VAR_8,
    const u_char *VAR_9, size_t VAR_10, u_int VAR_11)
{
 ECDSA_SIG *VAR_12 = ((void*)0);
 const BIGNUM *VAR_13, *VAR_14;
 int VAR_15;
 u_char VAR_16[VAR_1];
 size_t VAR_17, VAR_18;
 struct sshbuf *VAR_19 = ((void*)0), *VAR_20 = ((void*)0);
 int VAR_21 = VAR_3;

 if (VAR_8 != ((void*)0))
  *VAR_8 = 0;
 if (VAR_7 != ((void*)0))
  *VAR_7 = ((void*)0);

 if (VAR_6 == ((void*)0) || VAR_6->ecdsa == ((void*)0) ||
     FUNC_17(VAR_6->type) != VAR_0)
  return VAR_4;

 if ((VAR_15 = FUNC_15(VAR_6->ecdsa_nid)) == -1 ||
     (VAR_18 = FUNC_6(VAR_15)) == 0)
  return VAR_3;
 if ((VAR_21 = FUNC_7(VAR_15, VAR_9, VAR_10,
     VAR_16, sizeof(VAR_16))) != 0)
  goto out;

 if ((VAR_12 = FUNC_2(VAR_16, VAR_18, VAR_6->ecdsa)) == ((void*)0)) {
  VAR_21 = VAR_5;
  goto out;
 }

 if ((VAR_20 = FUNC_10()) == ((void*)0) || (VAR_19 = FUNC_10()) == ((void*)0)) {
  VAR_21 = VAR_2;
  goto out;
 }
 FUNC_1(VAR_12, &VAR_13, &VAR_14);
 if ((VAR_21 = FUNC_12(VAR_20, VAR_13)) != 0 ||
     (VAR_21 = FUNC_12(VAR_20, VAR_14)) != 0)
  goto out;
 if ((VAR_21 = FUNC_13(VAR_19, FUNC_16(VAR_6))) != 0 ||
     (VAR_21 = FUNC_14(VAR_19, VAR_20)) != 0)
  goto out;
 VAR_17 = FUNC_9(VAR_19);
 if (VAR_7 != ((void*)0)) {
  if ((*VAR_7 = FUNC_4(VAR_17)) == ((void*)0)) {
   VAR_21 = VAR_2;
   goto out;
  }
  FUNC_5(*VAR_7, FUNC_11(VAR_19), VAR_17);
 }
 if (VAR_8 != ((void*)0))
  *VAR_8 = VAR_17;
 VAR_21 = 0;
 out:
 FUNC_3(VAR_16, sizeof(VAR_16));
 FUNC_8(VAR_19);
 FUNC_8(VAR_20);
 FUNC_0(VAR_12);
 return VAR_21;
}
