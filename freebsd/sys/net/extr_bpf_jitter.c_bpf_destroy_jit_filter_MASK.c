
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ func; int size; } ;
typedef TYPE_1__ bpf_jit_filter ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,...) ;
 int FUNC_1 (scalar_t__,int ) ;

void
FUNC_2(bpf_jit_filter *VAR_2)
{






 if (VAR_2->func != VAR_1)
  FUNC_1(VAR_2->func, VAR_2->size);
 FUNC_0(VAR_2);

}
