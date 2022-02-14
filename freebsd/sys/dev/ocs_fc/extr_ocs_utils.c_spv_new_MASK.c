
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef TYPE_1__* sparse_vector_t ;
typedef int ocs_os_handle_t ;
struct TYPE_4__ {int max_idx; int os; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int ,int,int) ;

sparse_vector_t
FUNC_1(ocs_os_handle_t VAR_4)
{
 sparse_vector_t VAR_5;
 uint32_t VAR_6;

 VAR_5 = FUNC_0(VAR_4, sizeof(*VAR_5), VAR_1 | VAR_0);
 if (!VAR_5) {
  return ((void*)0);
 }

 VAR_5->os = VAR_4;
 VAR_5->max_idx = 1;
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6 ++) {
  VAR_5->max_idx *= VAR_3;
 }

 return VAR_5;
}
