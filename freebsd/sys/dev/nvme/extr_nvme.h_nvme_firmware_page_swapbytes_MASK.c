
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_firmware_page {int * revision; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline
void FUNC_1(struct nvme_firmware_page *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < 7; VAR_1++)
  VAR_0->revision[VAR_1] = FUNC_0(VAR_0->revision[VAR_1]);
}
