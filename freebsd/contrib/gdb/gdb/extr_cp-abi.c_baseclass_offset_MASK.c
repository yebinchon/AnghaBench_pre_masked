
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct type {int dummy; } ;
struct TYPE_2__ {int (* baseclass_offset ) (struct type*,int,char*,int ) ;} ;
typedef int CORE_ADDR ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct type*,int,char*,int ) ;

int
FUNC_2 (struct type *VAR_1, int VAR_2, char *VAR_3,
    CORE_ADDR VAR_4)
{
  if (VAR_0.baseclass_offset == ((void*)0))
    FUNC_0 ("ABI doesn't define required function baseclass_offset");
  return (*VAR_0.baseclass_offset) (VAR_1, VAR_2, VAR_3, VAR_4);
}
