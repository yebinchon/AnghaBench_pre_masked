
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printf_info {char spec; scalar_t__ is_long; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

int
FUNC_1(const struct printf_info *VAR_2, size_t VAR_3, int *VAR_4)
{

 FUNC_0 (VAR_3 > 0);
 if (VAR_2->is_long || VAR_2->spec == 'C')
  VAR_4[0] = VAR_1;
 else
  VAR_4[0] = VAR_0;
 return (1);
}
