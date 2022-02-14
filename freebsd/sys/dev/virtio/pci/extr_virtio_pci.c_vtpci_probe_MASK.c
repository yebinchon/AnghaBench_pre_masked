
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;
typedef int desc ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*,int,char*,char const*) ;
 char* FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_6)
{
 char VAR_7[36];
 const char *VAR_8;

 if (FUNC_4(VAR_6) != VAR_5)
  return (VAR_1);

 if (FUNC_1(VAR_6) < VAR_4 ||
     FUNC_1(VAR_6) > VAR_3)
  return (VAR_1);

 if (FUNC_2(VAR_6) != VAR_2)
  return (VAR_1);

 VAR_8 = FUNC_6(FUNC_3(VAR_6));
 if (VAR_8 == ((void*)0))
  VAR_8 = "Unknown";

 FUNC_5(VAR_7, sizeof(VAR_7), "VirtIO PCI %s adapter", VAR_8);
 FUNC_0(VAR_6, VAR_7);

 return (VAR_0);
}
