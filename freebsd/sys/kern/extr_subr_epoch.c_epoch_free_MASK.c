
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* epoch_t ;
struct TYPE_5__ {size_t e_idx; int e_drain_sx; int e_drain_mtx; int e_pcpu_record; } ;


 int VAR_0 ;
 int ** VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;

void
FUNC_6(epoch_t VAR_4)
{

 FUNC_0(VAR_4);
 VAR_1[VAR_4->e_idx] = ((void*)0);
 FUNC_1(VAR_2);
 FUNC_5(VAR_3, VAR_4->e_pcpu_record);
 FUNC_3(&VAR_4->e_drain_mtx);
 FUNC_4(&VAR_4->e_drain_sx);
 FUNC_2(VAR_4, VAR_0);
}
