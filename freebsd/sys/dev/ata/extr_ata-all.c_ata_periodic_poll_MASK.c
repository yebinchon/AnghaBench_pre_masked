
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_channel {int poll_callout; } ;


 int FUNC_0 (struct ata_channel*) ;
 int FUNC_1 (int *,int ,void (*) (void*),struct ata_channel*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(void *VAR_1)
{
    struct ata_channel *VAR_2 = (struct ata_channel *)VAR_1;

    FUNC_1(&VAR_2->poll_callout, VAR_0, FUNC_2, VAR_2);
    FUNC_0(VAR_2);
}
