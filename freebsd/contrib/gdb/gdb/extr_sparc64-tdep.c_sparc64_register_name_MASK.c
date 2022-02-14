
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char const* name; } ;
struct TYPE_3__ {char const* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static const char *
FUNC_0 (int VAR_4)
{
  if (VAR_4 >= 0 && VAR_4 < VAR_1)
    return VAR_3[VAR_4].name;

  if (VAR_4 >= VAR_1
      && VAR_4 < VAR_1 + VAR_0)
    return VAR_2[VAR_4 - VAR_1].name;

  return ((void*)0);
}
