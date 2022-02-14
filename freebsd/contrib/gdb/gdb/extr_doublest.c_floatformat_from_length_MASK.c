
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct floatformat {int totalsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct floatformat const* VAR_2 ;
 int VAR_3 ;
 struct floatformat const* VAR_4 ;
 int VAR_5 ;
 struct floatformat const* VAR_6 ;

__attribute__((used)) static const struct floatformat *
FUNC_0 (int VAR_7)
{
  if (VAR_7 * VAR_0 == VAR_3)
    return VAR_4;
  else if (VAR_7 * VAR_0 == VAR_1)
    return VAR_2;
  else if (VAR_7 * VAR_0 == VAR_5)
    return VAR_6;




  else if ((VAR_6 != ((void*)0))
    && (VAR_7 * VAR_0 ==
               VAR_6->totalsize))
    return VAR_6;

  return ((void*)0);
}
