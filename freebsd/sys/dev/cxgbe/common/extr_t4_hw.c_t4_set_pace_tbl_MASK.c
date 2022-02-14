
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (struct adapter*,int) ;
 int FUNC_1 (struct adapter*,int ,unsigned int) ;

int FUNC_2(struct adapter *VAR_3, const unsigned int *VAR_4,
       unsigned int VAR_5, unsigned int VAR_6)
{
 unsigned int VAR_7[VAR_2], VAR_8;
 unsigned int VAR_9 = FUNC_0(VAR_3, 1000);

 if (VAR_6 > VAR_2)
     return -VAR_1;


 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++, VAR_4++) {
  VAR_7[VAR_8] = (1000 * *VAR_4 + VAR_9 / 2) / VAR_9;
  if (VAR_7[VAR_8] > 0x7ff)
   return -VAR_1;
  if (*VAR_4 && VAR_7[VAR_8] == 0)
   return -VAR_1;
 }
 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++, VAR_5++)
  FUNC_1(VAR_3, VAR_0, (VAR_5 << 16) | VAR_7[VAR_8]);
 return 0;
}
