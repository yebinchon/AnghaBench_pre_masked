
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ufs2_daddr_t ;
struct inodesc {long id_numfrags; int id_blkno; } ;


 int FUNC_0 (struct inodesc*) ;

void
FUNC_1(ufs2_daddr_t VAR_0, long VAR_1)
{
 struct inodesc VAR_2;

 VAR_2.id_blkno = VAR_0;
 VAR_2.id_numfrags = VAR_1;
 (void)FUNC_0(&VAR_2);
}
