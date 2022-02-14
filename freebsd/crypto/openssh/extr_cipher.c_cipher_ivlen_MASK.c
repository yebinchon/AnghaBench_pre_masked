
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct sshcipher {scalar_t__ iv_len; int flags; scalar_t__ block_size; } ;


 int VAR_0 ;

u_int
FUNC_0(const struct sshcipher *VAR_1)
{




 return (VAR_1->iv_len != 0 || (VAR_1->flags & VAR_0) != 0) ?
     VAR_1->iv_len : VAR_1->block_size;
}
