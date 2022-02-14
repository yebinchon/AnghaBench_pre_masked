
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int st_blksize; } ;
struct TYPE_2__ {int sb_hiwat; } ;
struct socket {TYPE_1__ so_snd; } ;



int
FUNC_0(struct socket *VAR_0, struct stat *VAR_1)
{

 VAR_1->st_blksize = VAR_0->so_snd.sb_hiwat;
 return 0;
}
