
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct unpcb {int unp_ino; } ;
struct stat {int st_ino; int st_dev; int st_blksize; } ;
struct TYPE_2__ {int sb_hiwat; } ;
struct socket {TYPE_1__ so_snd; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 struct unpcb* FUNC_1 (struct socket*) ;

__attribute__((used)) static int
FUNC_2(struct socket *VAR_1, struct stat *VAR_2)
{
 struct unpcb *VAR_3;

 VAR_3 = FUNC_1(VAR_1);
 FUNC_0(VAR_3 != ((void*)0), ("uipc_sense: unp == NULL"));

 VAR_2->st_blksize = VAR_1->so_snd.sb_hiwat;
 VAR_2->st_dev = VAR_0;
 VAR_2->st_ino = VAR_3->unp_ino;
 return (0);
}
