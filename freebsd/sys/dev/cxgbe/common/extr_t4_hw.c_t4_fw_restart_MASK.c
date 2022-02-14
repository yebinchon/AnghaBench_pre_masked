
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct adapter*,int ) ;
 int FUNC_2 (struct adapter*,int ,int ,int ) ;

int FUNC_3(struct adapter *VAR_7, unsigned int VAR_8)
{
 int VAR_9;

 FUNC_2(VAR_7, VAR_0, VAR_6, 0);
 for (VAR_9 = 0; VAR_9 < VAR_3; ) {
  if (!(FUNC_1(VAR_7, VAR_1) & VAR_5))
   return VAR_4;
  FUNC_0(100);
  VAR_9 += 100;
 }

 return -VAR_2;
}
