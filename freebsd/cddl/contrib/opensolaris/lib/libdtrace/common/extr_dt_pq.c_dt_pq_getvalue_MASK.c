
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint_t ;
typedef int uint64_t ;
struct TYPE_3__ {int dtpq_arg; int (* dtpq_value ) (void*,int ) ;void** dtpq_items; } ;
typedef TYPE_1__ dt_pq_t ;


 int FUNC_0 (void*,int ) ;

__attribute__((used)) static uint64_t
FUNC_1(dt_pq_t *VAR_0, uint_t VAR_1)
{
 void *VAR_2 = VAR_0->dtpq_items[VAR_1];
 return (VAR_0->dtpq_value(VAR_2, VAR_0->dtpq_arg));
}
