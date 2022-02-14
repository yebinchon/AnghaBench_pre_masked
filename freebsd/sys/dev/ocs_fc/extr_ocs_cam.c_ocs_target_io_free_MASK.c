
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * app; scalar_t__ flags; int state; } ;
struct TYPE_8__ {TYPE_2__* ocs; TYPE_1__ tgt_io; } ;
typedef TYPE_3__ ocs_io_t ;
struct TYPE_7__ {scalar_t__ io_in_use; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,int) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static inline void FUNC_2(ocs_io_t *VAR_1)
{
 VAR_1->tgt_io.state = VAR_0;
 VAR_1->tgt_io.flags = 0;
 VAR_1->tgt_io.app = ((void*)0);
 FUNC_1(VAR_1);
 if(VAR_1->ocs->io_in_use != 0)
  FUNC_0(&VAR_1->ocs->io_in_use, 1);
}
