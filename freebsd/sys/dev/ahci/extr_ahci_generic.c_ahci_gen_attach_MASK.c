
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahci_controller {int numirqs; int * r_mem; scalar_t__ r_rid; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,int ,scalar_t__*,int ) ;
 int FUNC_3 (int ,int ,scalar_t__,int *) ;
 struct ahci_controller* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3)
{
 struct ahci_controller *VAR_4 = FUNC_4(VAR_3);
 int VAR_5;

 VAR_4->r_rid = 0;
 VAR_4->r_mem = FUNC_2(VAR_3, VAR_2, &VAR_4->r_rid,
     VAR_1);
 if (VAR_4->r_mem == ((void*)0))
  return (VAR_0);


 VAR_4->numirqs = 1;


 if ((VAR_5 = FUNC_1(VAR_3)) == 0)
  VAR_5 = FUNC_0(VAR_3);

 if (VAR_5 != 0) {
  if (VAR_4->r_mem != ((void*)0))
   FUNC_3(VAR_3, VAR_2, VAR_4->r_rid,
       VAR_4->r_mem);
 }
 return VAR_5;
}
