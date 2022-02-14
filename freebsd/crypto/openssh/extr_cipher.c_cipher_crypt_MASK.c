
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct sshcipher_ctx {int evp; scalar_t__ encrypt; TYPE_1__* cipher; int ac_ctx; int cp_ctx; } ;
struct TYPE_2__ {int flags; int block_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,int *,int *,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *,int const*,int *,int) ;
 int FUNC_3 (int *,int,int *,int const*,int,int,int,scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,int const*,int) ;

int
FUNC_6(struct sshcipher_ctx *VAR_9, u_int VAR_10, u_char *VAR_11,
   const u_char *VAR_12, u_int VAR_13, u_int VAR_14, u_int VAR_15)
{
 if ((VAR_9->cipher->flags & VAR_1) != 0) {
  return FUNC_3(&VAR_9->cp_ctx, VAR_10, VAR_11, VAR_12,
      VAR_13, VAR_14, VAR_15, VAR_9->encrypt);
 }
 if ((VAR_9->cipher->flags & VAR_2) != 0) {
  FUNC_5(VAR_11, VAR_12, VAR_14 + VAR_13);
  return 0;
 }

 if ((VAR_9->cipher->flags & VAR_0) != 0) {
  if (VAR_14)
   FUNC_5(VAR_11, VAR_12, VAR_14);
  FUNC_2(&VAR_9->ac_ctx, VAR_12 + VAR_14,
      VAR_11 + VAR_14, VAR_13);
  return 0;
 }
 return VAR_6;
}
