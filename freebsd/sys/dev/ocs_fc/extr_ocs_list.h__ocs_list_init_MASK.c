
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int offset; struct TYPE_4__* prev; struct TYPE_4__* next; } ;
typedef TYPE_1__ ocs_list_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static inline void
FUNC_1(ocs_list_t *VAR_1, uint32_t VAR_2)
{
 FUNC_0(VAR_1);
 VAR_0;

 VAR_1->next = VAR_1;
 VAR_1->prev = VAR_1;
 VAR_1->offset = VAR_2;
}
