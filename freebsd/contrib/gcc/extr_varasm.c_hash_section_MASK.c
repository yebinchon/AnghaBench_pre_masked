
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {int name; } ;
struct TYPE_7__ {TYPE_2__ common; TYPE_1__ named; } ;
typedef TYPE_3__ section ;
typedef int hashval_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static hashval_t
FUNC_1 (section *VAR_1)
{
  if (VAR_1->common.flags & VAR_0)
    return FUNC_0 (VAR_1->named.name);
  return VAR_1->common.flags;
}
