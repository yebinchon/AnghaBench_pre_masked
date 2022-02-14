
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct adapter*,int ) ;
 int FUNC_1 (struct adapter*,int ,int,int ,int,int) ;
 int FUNC_2 (struct adapter*,int ,unsigned int) ;

int FUNC_3(struct adapter *VAR_4, unsigned int VAR_5, unsigned int VAR_6,
  unsigned int *VAR_7)
{
 int VAR_8 = 0;

 if (FUNC_0(VAR_4, VAR_0) & VAR_3)
  return -VAR_2;

 for ( ; !VAR_8 && VAR_6--; VAR_5 += 4) {
  FUNC_2(VAR_4, VAR_0, VAR_5);
  VAR_8 = FUNC_1(VAR_4, VAR_0, VAR_3,
          0, 5, 2);
  if (!VAR_8)
   *VAR_7++ = FUNC_0(VAR_4, VAR_1);
 }
 return VAR_8;
}
