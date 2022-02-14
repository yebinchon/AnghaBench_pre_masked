
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int isc_assertiontype_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;

__attribute__((used)) static void
FUNC_5(
 const char *VAR_2,
 int VAR_3,
 isc_assertiontype_t VAR_4,
 const char *VAR_5
 )
{
 FUNC_2(((void*)0));

 FUNC_4(VAR_0, "%s:%d: %s(%s) failed",
  VAR_2, VAR_3, FUNC_3(VAR_4), VAR_5);
 FUNC_4(VAR_0, "exiting (due to assertion failure)");






 FUNC_1();
}
