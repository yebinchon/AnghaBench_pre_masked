
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int vtable; } ;
struct TYPE_3__ {int (* update ) (int *,unsigned char*,size_t) ;} ;


 TYPE_2__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,unsigned char*,size_t) ;

void
FUNC_1(unsigned char *VAR_3, size_t VAR_4)
{
 if (VAR_2 != 0 && VAR_1 != ((void*)0))
  VAR_1->update(&VAR_0.vtable, VAR_3, VAR_4);
}
