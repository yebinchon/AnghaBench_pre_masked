
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int br_ec_impl ;


 int VAR_0 ;
 int * FUNC_0 () ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int const*,int *) ;

__attribute__((used)) static void
FUNC_3(void)
{
 const br_ec_impl *VAR_1;

 VAR_1 = FUNC_0();
 if (VAR_1 != ((void*)0)) {
  FUNC_2("EC c25519_m64", VAR_1, &VAR_0);
 } else {
  FUNC_1("%-30s UNAVAILABLE\n", "EC c25519_m64");
 }
}
