
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_channel {int state_mtx; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(void *VAR_0)
{
    struct ata_channel *VAR_1 = (struct ata_channel *)VAR_0;

    FUNC_1(&VAR_1->state_mtx);
    FUNC_0(VAR_0);
    FUNC_2(&VAR_1->state_mtx);
}
