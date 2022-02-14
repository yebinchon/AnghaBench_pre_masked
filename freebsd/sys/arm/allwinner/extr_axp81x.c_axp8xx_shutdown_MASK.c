
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,int ,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (void*,char*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_4, int VAR_5)
{
 device_t VAR_6;

 if ((VAR_5 & VAR_2) == 0)
  return;

 VAR_6 = VAR_4;

 if (VAR_3)
  FUNC_1(VAR_6, "Shutdown Axp8xx\n");

 FUNC_0(VAR_6, VAR_0, VAR_1);
}
