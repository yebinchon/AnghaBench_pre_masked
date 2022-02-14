
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sscape_info {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct sscape_info *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;
 unsigned char VAR_6;

 FUNC_2(&VAR_3->lock,VAR_4);




 for (VAR_5 = 10000; VAR_5 > 0; VAR_5--)
  if (FUNC_1(FUNC_0(VAR_0)) & VAR_2)
   break;

 if (VAR_5 <= 0)
 {
  FUNC_3(&VAR_3->lock,VAR_4);
  return -1;
 }
 VAR_6 = FUNC_1(FUNC_0(VAR_1));
 FUNC_3(&VAR_3->lock,VAR_4);
 return VAR_6;
}
