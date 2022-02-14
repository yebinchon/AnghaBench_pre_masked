
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char const*) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_0, device_t VAR_1)
{
 const char *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 == ((void*)0))
  VAR_2 = "unknown device";

 FUNC_1(VAR_0, "<%s> (no driver attached)\n", VAR_2);
}
