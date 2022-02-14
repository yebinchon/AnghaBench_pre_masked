
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ahci_channel {int mtx; int r_mem; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ahci_channel*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1)
{
 struct ahci_channel *VAR_2 = (struct ahci_channel *)VAR_1;
 uint32_t VAR_3;


 VAR_3 = FUNC_0(VAR_2->r_mem, VAR_0);

 FUNC_2(&VAR_2->mtx);
 FUNC_1(VAR_2, VAR_3);
 FUNC_3(&VAR_2->mtx);
}
