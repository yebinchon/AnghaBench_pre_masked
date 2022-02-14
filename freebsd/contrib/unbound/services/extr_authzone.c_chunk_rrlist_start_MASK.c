
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct auth_xfer {TYPE_1__* task_transfer; } ;
struct auth_chunk {int dummy; } ;
struct TYPE_2__ {struct auth_chunk* chunks_first; } ;



__attribute__((used)) static void
FUNC_0(struct auth_xfer* VAR_0, struct auth_chunk** VAR_1,
 int* VAR_2, size_t* VAR_3)
{
 *VAR_1 = VAR_0->task_transfer->chunks_first;
 *VAR_2 = 0;
 *VAR_3 = 0;
}
