
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct sshcipher_ctx {int plaintext; int encrypt; int * evp; int ac_ctx; struct sshcipher const* cipher; int cp_ctx; } ;
struct sshcipher {int flags; int key_len; int * (* evptype ) () ;} ;
typedef int EVP_CIPHER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 scalar_t__ FUNC_4 (int *,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int *,int const*,int *,int *,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int *,int const*) ;
 int FUNC_7 (int *,int const*,int,int) ;
 struct sshcipher_ctx* FUNC_8 (int,int) ;
 int FUNC_9 (int *,int const*,int) ;
 scalar_t__ FUNC_10 (struct sshcipher const*) ;
 int FUNC_11 (struct sshcipher const*) ;
 int FUNC_12 (struct sshcipher_ctx*,int) ;
 int FUNC_13 (struct sshcipher_ctx*) ;
 int * FUNC_14 () ;

int
FUNC_15(struct sshcipher_ctx **VAR_9, const struct sshcipher *VAR_10,
    const u_char *VAR_11, u_int VAR_12, const u_char *VAR_13, u_int VAR_14,
    int VAR_15)
{
 struct sshcipher_ctx *VAR_16 = ((void*)0);
 int VAR_17 = VAR_6;





 *VAR_9 = ((void*)0);
 if ((VAR_16 = FUNC_8(sizeof(*VAR_16), 1)) == ((void*)0))
  return VAR_5;

 VAR_16->plaintext = (VAR_10->flags & VAR_2) != 0;
 VAR_16->encrypt = VAR_15;

 if (VAR_12 < VAR_10->key_len ||
     (VAR_13 != ((void*)0) && VAR_14 < FUNC_11(VAR_10))) {
  VAR_17 = VAR_7;
  goto out;
 }

 VAR_16->cipher = VAR_10;
 if ((VAR_16->cipher->flags & VAR_1) != 0) {
  VAR_17 = FUNC_9(&VAR_16->cp_ctx, VAR_11, VAR_12);
  goto out;
 }
 if ((VAR_16->cipher->flags & VAR_2) != 0) {
  VAR_17 = 0;
  goto out;
 }

 if ((VAR_16->cipher->flags & VAR_0) != 0) {
  FUNC_7(&VAR_16->ac_ctx, VAR_11, 8 * VAR_12, 8 * VAR_14);
  FUNC_6(&VAR_16->ac_ctx, VAR_13);
  VAR_17 = 0;
  goto out;
 }
 VAR_17 = VAR_7;
 goto out;
 out:
 if (VAR_17 == 0) {

  *VAR_9 = VAR_16;
 } else {
  if (VAR_16 != ((void*)0)) {



   FUNC_12(VAR_16, sizeof(*VAR_16));
   FUNC_13(VAR_16);
  }
 }
 return VAR_17;
}
