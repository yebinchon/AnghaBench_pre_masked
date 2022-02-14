
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct pci_params {int speed; int width; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct adapter*,int ) ;
 int FUNC_1 (struct adapter*,scalar_t__,int*) ;

__attribute__((used)) static void FUNC_2(struct adapter *VAR_4,
       struct pci_params *VAR_5)
{
 u16 VAR_6;
 u32 VAR_7;

 VAR_7 = FUNC_0(VAR_4, VAR_0);
 if (VAR_7) {
  FUNC_1(VAR_4, VAR_7 + VAR_1, &VAR_6);
  VAR_5->speed = VAR_6 & VAR_2;
  VAR_5->width = (VAR_6 & VAR_3) >> 4;
 }
}
