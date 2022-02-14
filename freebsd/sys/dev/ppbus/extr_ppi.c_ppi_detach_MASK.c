
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppi_data {int ppi_lock; int * intr_resource; int intr_cookie; int ppi_cdev; } ;
typedef int device_t ;


 struct ppi_data* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1)
{
 struct ppi_data *VAR_2 = FUNC_0(VAR_1);

 FUNC_3(VAR_2->ppi_cdev);






 FUNC_4(&VAR_2->ppi_lock);
 return (0);
}
