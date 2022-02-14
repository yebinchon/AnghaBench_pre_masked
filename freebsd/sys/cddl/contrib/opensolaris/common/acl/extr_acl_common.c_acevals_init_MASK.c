
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uid_t ;
struct TYPE_4__ {int key; void* mask; void* denied; void* allowed; } ;
typedef TYPE_1__ acevals_t ;


 void* VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_1(acevals_t *VAR_1, uid_t VAR_2)
{
 FUNC_0(VAR_1, sizeof (*VAR_1));
 VAR_1->allowed = VAR_0;
 VAR_1->denied = VAR_0;
 VAR_1->mask = VAR_0;
 VAR_1->key = VAR_2;
}
