
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int FUNC_0 (int ,int ,int ,char**) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int VAR_1 ;
 int FUNC_5 (char*,char*,char*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2)
{
 char *VAR_3;
 char VAR_4[64];
 int VAR_5;

 VAR_5 = FUNC_0(FUNC_2(VAR_2), VAR_2, VAR_1, &VAR_3);
 if (FUNC_1("fujitsu") || VAR_5 > 0 || FUNC_3(VAR_2) > 1)
  return (VAR_0);
 FUNC_5(VAR_4, "Fujitsu Function Hotkeys %s", VAR_3);
 FUNC_4(VAR_2, VAR_4);

 return (VAR_5);
}
