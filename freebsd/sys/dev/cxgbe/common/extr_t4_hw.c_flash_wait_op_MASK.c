
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct adapter*,int,int ,int,int*) ;
 int FUNC_2 (struct adapter*,int,int,int,int ) ;

__attribute__((used)) static int FUNC_3(struct adapter *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;
 u32 VAR_6;

 while (1) {
  if ((VAR_5 = FUNC_2(VAR_2, 1, 1, 1, VAR_1)) != 0 ||
      (VAR_5 = FUNC_1(VAR_2, 1, 0, 1, &VAR_6)) != 0)
   return VAR_5;
  if (!(VAR_6 & 1))
   return 0;
  if (--VAR_3 == 0)
   return -VAR_0;
  if (VAR_4)
   FUNC_0(VAR_4);
 }
}
