
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct testvec {int blkno; int ptxt; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int,int ) ;
 int FUNC_1 (int,int ,int) ;

__attribute__((used)) static int
FUNC_2(int VAR_2, const struct testvec *VAR_3)
{

 if (FUNC_0(VAR_2, VAR_3->blkno * VAR_0, VAR_1) < 0)
  return -1;

 if (FUNC_1(VAR_2, VAR_3->ptxt, VAR_0) != VAR_0)
  return -1;

 return 0;
}
