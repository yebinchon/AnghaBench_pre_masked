
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbus_ivar {int addr; } ;
typedef int * device_t ;


 int * FUNC_0 (int *,int ,char const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct smbus_ivar* FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int,char const*,int) ;
 int FUNC_3 (char const*,int,char*,int*) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_2, const char *VAR_3, int VAR_4)
{
 struct smbus_ivar *VAR_5;
 device_t VAR_6;
 int VAR_7;

 VAR_7 = 0;
 FUNC_3(VAR_3, VAR_4, "addr", &VAR_7);
 if (VAR_7 > VAR_1) {
  FUNC_2(VAR_2, "ignored incorrect slave address hint 0x%x"
      " for %s%d\n", VAR_7, VAR_3, VAR_4);
  return;
 }
 VAR_6 = FUNC_0(VAR_2, VAR_0, VAR_3, VAR_4);
 if (VAR_6 == ((void*)0))
  return;
 VAR_5 = FUNC_1(VAR_6);
 VAR_5->addr = VAR_7;
}
