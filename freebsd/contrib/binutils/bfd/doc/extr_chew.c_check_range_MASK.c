
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_1 ()
{
  if (VAR_2 < VAR_1)
    FUNC_0 ("underflow in string stack");
  if (VAR_2 >= VAR_1 + VAR_0)
    FUNC_0 ("overflow in string stack");
}
