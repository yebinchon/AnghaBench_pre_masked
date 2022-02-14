
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ sequence_number; } ;
struct TYPE_6__ {TYPE_1__ access; } ;
typedef TYPE_2__ limited_rights_t ;



__attribute__((used)) static void
FUNC_0(limited_rights_t *VAR_0,
               const limited_rights_t *VAR_1)
{


  if (VAR_0->access.sequence_number < VAR_1->access.sequence_number)
    VAR_0->access = VAR_1->access;
}
