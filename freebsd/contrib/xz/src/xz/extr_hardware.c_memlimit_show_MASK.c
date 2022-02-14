
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*,char*,...) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 char* FUNC_3 (scalar_t__,int) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_1, uint64_t VAR_2)
{



 if (VAR_2 == 0 || VAR_2 == VAR_0)
  FUNC_1("%s %s\n", VAR_1, FUNC_0("Disabled"));
 else
  FUNC_1("%s %s MiB (%s B)\n", VAR_1,
    FUNC_3(FUNC_2(VAR_2), 0),
    FUNC_3(VAR_2, 1));

 return;
}
