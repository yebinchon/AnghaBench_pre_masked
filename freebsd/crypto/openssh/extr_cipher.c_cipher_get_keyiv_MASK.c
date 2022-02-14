
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {int ctr; } ;
struct sshcipher_ctx {int evp; struct sshcipher* cipher; TYPE_1__ ac_ctx; } ;
struct sshcipher {int flags; scalar_t__ evptype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,size_t,int *) ;
 int FUNC_1 (int ,int *,size_t) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (struct sshcipher const*) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int *,int ,size_t) ;
 int FUNC_5 (int ,int ,int *,size_t) ;

int
FUNC_6(struct sshcipher_ctx *VAR_7, u_char *VAR_8, size_t VAR_9)
{





 if ((VAR_7->cipher->flags & VAR_1) != 0) {
  if (VAR_9 != 0)
   return VAR_4;
  return 0;
 }
 if ((VAR_7->cipher->flags & VAR_0) != 0) {
  if (VAR_9 != sizeof(VAR_7->ac_ctx.ctr))
   return VAR_4;
  FUNC_4(VAR_8, VAR_7->ac_ctx.ctr, VAR_9);
  return 0;
 }
 if ((VAR_7->cipher->flags & VAR_2) != 0)
  return 0;
 return 0;
}
