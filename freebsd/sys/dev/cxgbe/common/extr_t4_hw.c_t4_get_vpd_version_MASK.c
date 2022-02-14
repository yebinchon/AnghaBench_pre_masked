
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct adapter {int pf; int mbox; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct adapter*,int ,int ,int ,int,int*,int*) ;

int FUNC_3(struct adapter *VAR_2, u32 *VAR_3)
{
 u32 VAR_4;
 int VAR_5;

 VAR_4 = (FUNC_0(VAR_0) |
   FUNC_1(VAR_1));
 VAR_5 = FUNC_2(VAR_2, VAR_2->mbox, VAR_2->pf, 0,
         1, &VAR_4, VAR_3);
 if (VAR_5)
  *VAR_3 = 0;
 return VAR_5;
}
