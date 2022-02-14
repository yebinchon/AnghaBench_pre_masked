
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct zone*,int) ;
 unsigned long FUNC_1 (struct zone*) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct zone*,int,unsigned long,int ,int ) ;

unsigned long FUNC_3(struct zone *VAR_4, int VAR_5)
{
 int VAR_6;
 unsigned long VAR_7;





 if (VAR_5 == -1)
  return VAR_0;






 VAR_7 = FUNC_1(VAR_4) + (2UL << VAR_5);
 if (!FUNC_2(VAR_4, 0, VAR_7, 0, 0))
  return VAR_2;
 VAR_6 = FUNC_0(VAR_4, VAR_5);
 if (VAR_6 >= 0 && VAR_6 <= VAR_3)
  return VAR_2;

 if (VAR_6 == -1 && FUNC_2(VAR_4, VAR_5, VAR_7, 0, 0))
  return VAR_1;

 return VAR_0;
}
