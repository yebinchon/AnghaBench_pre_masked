
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ count; } ;
typedef TYPE_1__ mru ;



__attribute__((used)) static int
FUNC_0(
 const void *VAR_0,
 const void *VAR_1
 )
{
 const mru * const * VAR_2 = VAR_0;
 const mru * const * VAR_3 = VAR_1;
 const mru * VAR_4;
 const mru * VAR_5;

 VAR_4 = *VAR_2;
 VAR_5 = *VAR_3;

 return (VAR_4->count < VAR_5->count)
     ? -1
     : ((VAR_4->count == VAR_5->count)
     ? 0
     : 1);
}
