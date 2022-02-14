
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sscape_info {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 unsigned char FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static unsigned char FUNC_5(struct sscape_info *VAR_2, int VAR_3)
{
 unsigned long VAR_4;
 unsigned char VAR_5;

 FUNC_3(&VAR_2->lock,VAR_4);
 FUNC_2(VAR_3, FUNC_0(VAR_0));
 VAR_5 = FUNC_1(FUNC_0(VAR_1));
 FUNC_4(&VAR_2->lock,VAR_4);
 return VAR_5;
}
