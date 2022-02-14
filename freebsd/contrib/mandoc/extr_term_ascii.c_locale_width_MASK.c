
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static size_t
FUNC_1(const struct termp *VAR_1, int VAR_2)
{
 int VAR_3;

 if (VAR_2 == VAR_0)
  VAR_2 = ' ';
 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 < 0)
  VAR_3 = 0;
 return VAR_3;
}
