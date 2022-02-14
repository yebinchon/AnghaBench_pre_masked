
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int driver_t ;
typedef int device_t ;


 int FUNC_0 (int ,int ,char*,int) ;
 int FUNC_1 (char*,int,char*,int*) ;

__attribute__((used)) static void
FUNC_2(driver_t * VAR_0, device_t VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 0; !FUNC_1("nvram", VAR_2, "base", &VAR_3); VAR_2++)
  FUNC_0(VAR_1, 0, "nvram2env", VAR_2);
}
