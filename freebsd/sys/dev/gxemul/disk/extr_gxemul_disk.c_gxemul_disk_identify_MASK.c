
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int driver_t ;
typedef int device_t ;


 int FUNC_0 (int ,int ,char*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (unsigned int,int *,int ) ;
 int FUNC_2 (int *,char*,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(driver_t *VAR_2, device_t VAR_3)
{
 unsigned VAR_4;

 FUNC_2(&VAR_1, "GXemul disk controller", ((void*)0), VAR_0);

 FUNC_3(&VAR_1);
 for (VAR_4 = 0; VAR_4 < 0x100; VAR_4++) {





  if (FUNC_1(VAR_4, ((void*)0), 0) != 0)
   break;
  FUNC_0(VAR_3, 0, "gxemul_disk", VAR_4);
 }
 FUNC_4(&VAR_1);
}
