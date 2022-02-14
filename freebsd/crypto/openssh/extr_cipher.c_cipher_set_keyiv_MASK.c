
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sshcipher_ctx {int evp; struct sshcipher* cipher; } ;
struct sshcipher {int flags; scalar_t__ evptype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,void*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int const*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (struct sshcipher const*) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int ,int,int *,int) ;

int
FUNC_5(struct sshcipher_ctx *VAR_6, const u_char *VAR_7, size_t VAR_8)
{





 if ((VAR_6->cipher->flags & VAR_0) != 0)
  return 0;
 if ((VAR_6->cipher->flags & VAR_1) != 0)
  return 0;
 return 0;
}
