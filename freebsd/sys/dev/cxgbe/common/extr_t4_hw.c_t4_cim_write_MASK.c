
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
 int FUNC_0 (struct adapter*,int ) ;
 int FUNC_1 (struct adapter*,int ,int,int ,int,int) ;
 int FUNC_2 (struct adapter*,int ,unsigned int) ;

int FUNC_3(struct adapter *VAR_5, unsigned int VAR_6, unsigned int VAR_7,
   const unsigned int *VAR_8)
{
 int VAR_9 = 0;

 if (FUNC_0(VAR_5, VAR_0) & VAR_3)
  return -VAR_2;

 for ( ; !VAR_9 && VAR_7--; VAR_6 += 4) {
  FUNC_2(VAR_5, VAR_1, *VAR_8++);
  FUNC_2(VAR_5, VAR_0, VAR_6 | VAR_4);
  VAR_9 = FUNC_1(VAR_5, VAR_0, VAR_3,
          0, 5, 2);
 }
 return VAR_9;
}
