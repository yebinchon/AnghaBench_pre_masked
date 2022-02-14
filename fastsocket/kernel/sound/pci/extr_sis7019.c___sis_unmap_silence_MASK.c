
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sis7019 {int silence_dma_addr; int pci; int silence_users; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int ) ;

__attribute__((used)) static void FUNC_1(struct sis7019 *VAR_1)
{

 VAR_1->silence_users--;
 if (!VAR_1->silence_users)
  FUNC_0(VAR_1->pci, VAR_1->silence_dma_addr, 4096,
     VAR_0);
}
