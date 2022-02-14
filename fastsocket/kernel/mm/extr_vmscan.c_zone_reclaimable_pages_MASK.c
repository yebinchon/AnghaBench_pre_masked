
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct zone*,int ) ;

unsigned long FUNC_1(struct zone *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_1) +
      FUNC_0(VAR_5, VAR_3);

 if (VAR_4 > 0)
  VAR_6 += FUNC_0(VAR_5, VAR_0) +
        FUNC_0(VAR_5, VAR_2);

 return VAR_6;
}
