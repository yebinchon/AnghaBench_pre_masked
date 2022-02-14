
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_bufring {int dummy; } ;
struct vmbus_br {int vbr_dsize; void* vbr; } ;



__attribute__((used)) static void
FUNC_0(struct vmbus_br *VAR_0, void *VAR_1, int VAR_2)
{
 VAR_0->vbr = VAR_1;
 VAR_0->vbr_dsize = VAR_2 - sizeof(struct vmbus_bufring);
}
