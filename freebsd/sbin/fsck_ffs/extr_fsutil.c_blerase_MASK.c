
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ufs2_daddr_t ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int*) ;

void
FUNC_1(int VAR_2, ufs2_daddr_t VAR_3, long VAR_4)
{
 off_t VAR_5[2];

 if (VAR_2 < 0)
  return;
 VAR_5[0] = VAR_3 * VAR_1;
 VAR_5[1] = VAR_4;
 FUNC_0(VAR_2, VAR_0, VAR_5);

 return;
}
