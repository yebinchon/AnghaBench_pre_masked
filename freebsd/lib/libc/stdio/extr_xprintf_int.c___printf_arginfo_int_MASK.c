
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printf_info {scalar_t__ is_char; scalar_t__ is_short; scalar_t__ is_long_double; scalar_t__ is_quad; scalar_t__ is_intmax; scalar_t__ is_long; scalar_t__ is_size; scalar_t__ is_ptrdiff; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;

int
FUNC_1(const struct printf_info *VAR_9, size_t VAR_10, int *VAR_11)
{
 FUNC_0 (VAR_10 > 0);
 VAR_11[0] = VAR_8;
 if (VAR_9->is_ptrdiff)
  VAR_11[0] |= VAR_4;
 else if (VAR_9->is_size)
  VAR_11[0] |= VAR_7;
 else if (VAR_9->is_long)
  VAR_11[0] |= VAR_2;
 else if (VAR_9->is_intmax)
  VAR_11[0] |= VAR_1;
 else if (VAR_9->is_quad)
  VAR_11[0] |= VAR_5;
 else if (VAR_9->is_long_double)
  VAR_11[0] |= VAR_3;
 else if (VAR_9->is_short)
  VAR_11[0] |= VAR_6;
 else if (VAR_9->is_char)
  VAR_11[0] = VAR_0;
 return (1);
}
