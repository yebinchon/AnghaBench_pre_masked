
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct sshkey {int * ed25519_sk; int type; } ;
struct sshbuf {int dummy; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,unsigned long long*,int const*,size_t,int *) ;
 size_t VAR_4 ;
 int FUNC_1 (int *,size_t) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (size_t) ;
 int FUNC_4 (int *,int ,size_t) ;
 int FUNC_5 (struct sshbuf*) ;
 size_t FUNC_6 (struct sshbuf*) ;
 struct sshbuf* FUNC_7 () ;
 int FUNC_8 (struct sshbuf*) ;
 int FUNC_9 (struct sshbuf*,char*) ;
 int FUNC_10 (struct sshbuf*,int *,unsigned long long) ;
 scalar_t__ FUNC_11 (int ) ;

int
FUNC_12(const struct sshkey *VAR_5, u_char **VAR_6, size_t *VAR_7,
    const u_char *VAR_8, size_t VAR_9, u_int VAR_10)
{
 u_char *VAR_11 = ((void*)0);
 size_t VAR_12 = 0, VAR_13;
 unsigned long long VAR_14;
 int VAR_15, VAR_16;
 struct sshbuf *VAR_17 = ((void*)0);

 if (VAR_7 != ((void*)0))
  *VAR_7 = 0;
 if (VAR_6 != ((void*)0))
  *VAR_6 = ((void*)0);

 if (VAR_5 == ((void*)0) ||
     FUNC_11(VAR_5->type) != VAR_1 ||
     VAR_5->ed25519_sk == ((void*)0) ||
     VAR_9 >= VAR_0 - VAR_4)
  return VAR_3;
 VAR_14 = VAR_12 = VAR_9 + VAR_4;
 if ((VAR_11 = FUNC_3(VAR_12)) == ((void*)0))
  return VAR_2;

 if ((VAR_16 = FUNC_0(VAR_11, &VAR_14, VAR_8, VAR_9,
     VAR_5->ed25519_sk)) != 0 || VAR_14 <= VAR_9) {
  VAR_15 = VAR_3;
  goto out;
 }

 if ((VAR_17 = FUNC_7()) == ((void*)0)) {
  VAR_15 = VAR_2;
  goto out;
 }
 if ((VAR_15 = FUNC_9(VAR_17, "ssh-ed25519")) != 0 ||
     (VAR_15 = FUNC_10(VAR_17, VAR_11, VAR_14 - VAR_9)) != 0)
  goto out;
 VAR_13 = FUNC_6(VAR_17);
 if (VAR_6 != ((void*)0)) {
  if ((*VAR_6 = FUNC_3(VAR_13)) == ((void*)0)) {
   VAR_15 = VAR_2;
   goto out;
  }
  FUNC_4(*VAR_6, FUNC_8(VAR_17), VAR_13);
 }
 if (VAR_7 != ((void*)0))
  *VAR_7 = VAR_13;

 VAR_15 = 0;
 out:
 FUNC_5(VAR_17);
 if (VAR_11 != ((void*)0)) {
  FUNC_1(VAR_11, VAR_12);
  FUNC_2(VAR_11);
 }

 return VAR_15;
}
