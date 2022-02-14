
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahci_channel {int mtx; scalar_t__ oslots; int sim; int reset_timer; scalar_t__ resetting; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct ahci_channel* FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (struct ahci_channel*,int *,int ,char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_3)
{
 struct ahci_channel *VAR_4 = FUNC_2(VAR_3);

 FUNC_4(&VAR_4->mtx);
 FUNC_6(VAR_4->sim, 1);

 if (VAR_4->resetting) {
  VAR_4->resetting = 0;
  FUNC_1(&VAR_4->reset_timer);
  FUNC_7(VAR_4->sim, VAR_1);
 }
 while (VAR_4->oslots)
  FUNC_3(VAR_4, &VAR_4->mtx, VAR_0, "ahcisusp", VAR_2/100);
 FUNC_0(VAR_3);
 FUNC_5(&VAR_4->mtx);
 return (0);
}
