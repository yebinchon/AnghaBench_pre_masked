
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ buffered; void** hashes; } ;
typedef TYPE_1__ svn_fnv1a_32x4__context_t ;


 void* VAR_0 ;

void
FUNC_0(svn_fnv1a_32x4__context_t *VAR_1)
{
  VAR_1->hashes[0] = VAR_0;
  VAR_1->hashes[1] = VAR_0;
  VAR_1->hashes[2] = VAR_0;
  VAR_1->hashes[3] = VAR_0;

  VAR_1->buffered = 0;
}
