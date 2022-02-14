
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct imcsmb_pci_device {scalar_t__ id; int * name; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int *) ;
 struct imcsmb_pci_device* VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_4)
{
 struct imcsmb_pci_device *VAR_5;
 int VAR_6;
 uint16_t VAR_7;

 VAR_6 = VAR_1;

 if (FUNC_2(VAR_4) != VAR_2) {
  goto out;
 }

 VAR_7 = FUNC_1(VAR_4);
 for (VAR_5 = VAR_3;
     VAR_5->name != ((void*)0);
     VAR_5++) {
  if (VAR_7 == VAR_5->id) {
   FUNC_0(VAR_4, VAR_5->name);
   VAR_6 = VAR_0;
   goto out;
  }
 }

out:
 return (VAR_6);
}
