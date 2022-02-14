
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ufs2_daddr_t ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,long) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int,int ) ;
 long FUNC_2 (int ,char*,long) ;

void
FUNC_3(ufs2_daddr_t VAR_3, char *VAR_4, long VAR_5)
{

 if (FUNC_1(VAR_2, (off_t)VAR_3 * VAR_1, VAR_0) < 0 ||
     FUNC_2(VAR_2, VAR_4, VAR_5) != VAR_5)
  FUNC_0(1, "blkread failed on block %ld", (long)VAR_3);
}
