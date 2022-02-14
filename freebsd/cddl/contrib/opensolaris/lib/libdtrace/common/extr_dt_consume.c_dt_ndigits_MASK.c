
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long long VAR_0 ;
 long long VAR_1 ;

__attribute__((used)) static int
FUNC_0(long long VAR_2)
{
 int VAR_3 = 1;
 long long VAR_4 = 10;

 if (VAR_2 < 0) {
  VAR_2 = VAR_2 == VAR_1 ? VAR_0 : -VAR_2;
  VAR_3++;
 }

 while (VAR_2 > VAR_4 && VAR_4 > 0) {
  VAR_3++;
  VAR_4 *= 10;
 }

 return (VAR_3 < 4 ? 4 : VAR_3);
}
