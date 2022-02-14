
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (struct adapter*) ;
 unsigned int FUNC_3 (struct adapter*,int ) ;
 int FUNC_4 (struct adapter*,int ,unsigned int) ;

int FUNC_5(struct adapter *VAR_6, int VAR_7, unsigned int VAR_8)
{
 unsigned int VAR_9, VAR_10 = VAR_2 - VAR_7 / 2;


 VAR_8 *= FUNC_2(VAR_6);
 VAR_8 = (VAR_8 + 5000) / 10000;
 if (VAR_8 > VAR_4)
  return -VAR_3;

 FUNC_4(VAR_6, VAR_0, VAR_10);
 VAR_9 = FUNC_3(VAR_6, VAR_1);
 if (VAR_7 & 1)
  VAR_9 = (VAR_9 & FUNC_0(VAR_4)) | FUNC_1(VAR_8);
 else
  VAR_9 = (VAR_9 & FUNC_1(VAR_5)) | FUNC_0(VAR_8);
 FUNC_4(VAR_6, VAR_1, VAR_9);
 FUNC_3(VAR_6, VAR_1);
 return 0;
}
