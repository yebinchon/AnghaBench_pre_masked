
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahci_controller {int ch_mtx; struct ahci_channel** ch; } ;
struct ahci_channel {int mtx; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 struct ahci_controller* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct ahci_channel *
FUNC_4(device_t VAR_1, int VAR_2)
{
 struct ahci_controller *VAR_3 = FUNC_1(VAR_1);
 struct ahci_channel *VAR_4;

 FUNC_0(VAR_2 >= 0 && VAR_2 < VAR_0, ("Bad channel number %d", VAR_2));
 FUNC_2(&VAR_3->ch_mtx);
 VAR_4 = VAR_3->ch[VAR_2];
 if (VAR_4 != ((void*)0))
  FUNC_2(&VAR_4->mtx);
 FUNC_3(&VAR_3->ch_mtx);
 return (VAR_4);
}
