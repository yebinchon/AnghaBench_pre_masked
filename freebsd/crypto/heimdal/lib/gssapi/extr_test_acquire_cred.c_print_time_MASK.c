
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (scalar_t__*) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(OM_uint32 VAR_1)
{
    if (VAR_1 == VAR_0) {
 FUNC_1("cred never expire\n");
    } else {
 time_t VAR_2 = VAR_1 + FUNC_2(((void*)0));
 FUNC_1("expiration time: %s", FUNC_0(&VAR_2));
    }
}
