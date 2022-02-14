
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adapter*,int ) ;

__attribute__((used)) static int FUNC_1(struct adapter *VAR_2)
{
 u32 VAR_3;
 u32 VAR_4 = 1;
 int VAR_5 = 0;
 int VAR_6 = 10;
 int VAR_7 = 0;

 while (VAR_4 & (1 < VAR_6)) {
  VAR_3 = FUNC_0(VAR_2, VAR_0);
  VAR_4 = (0 != (VAR_3 & VAR_1));
  VAR_5++;
 }

 if (VAR_4)
  VAR_7 = -1;

 return VAR_7;
}
