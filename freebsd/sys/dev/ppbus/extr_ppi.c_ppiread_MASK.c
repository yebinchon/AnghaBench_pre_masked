
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {scalar_t__ uio_resid; } ;
struct ppi_data {int ppi_mode; int ppi_device; } ;
struct cdev {struct ppi_data* si_drv1; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_7 ;
 char* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,char*,int ,int*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,struct ppi_data*,int ,char*,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,int,struct uio*) ;

__attribute__((used)) static int
FUNC_13(struct cdev *VAR_8, struct uio *VAR_9, int VAR_10)
{
 int VAR_11 = VAR_1;


 return (VAR_11);
}
