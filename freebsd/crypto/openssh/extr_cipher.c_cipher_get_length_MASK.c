
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct sshcipher_ctx {int cp_ctx; TYPE_1__* cipher; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int VAR_1 ;
 int FUNC_1 (int *,int*,int,int const*,int) ;

int
FUNC_2(struct sshcipher_ctx *VAR_2, u_int *VAR_3, u_int VAR_4,
    const u_char *VAR_5, u_int VAR_6)
{
 if ((VAR_2->cipher->flags & VAR_0) != 0)
  return FUNC_1(&VAR_2->cp_ctx, VAR_3, VAR_4,
      VAR_5, VAR_6);
 if (VAR_6 < 4)
  return VAR_1;
 *VAR_3 = FUNC_0(VAR_5);
 return 0;
}
