
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct adapter {int pf; int mbox; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct adapter*) ;
 int FUNC_3 (struct adapter*,int ,int ,int ,int,int*,int*,int ) ;

int FUNC_4(struct adapter *VAR_3)
{
 u32 VAR_4[1], VAR_5[1];
 int VAR_6;

 if (!FUNC_2(VAR_3))
  return 0;

 VAR_5[0] = 0xff;
 VAR_4[0] = (FUNC_0(VAR_1) |
   FUNC_1(VAR_2));
 VAR_6 = FUNC_3(VAR_3, VAR_3->mbox, VAR_3->pf, 0, 1, VAR_4, VAR_5,
   VAR_0);

 return VAR_6;
}
