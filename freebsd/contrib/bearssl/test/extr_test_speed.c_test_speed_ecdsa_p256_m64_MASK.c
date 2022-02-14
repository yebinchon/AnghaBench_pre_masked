
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int br_ec_impl ;


 int * FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int const*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_3(void)
{
 const br_ec_impl *VAR_3;

 VAR_3 = FUNC_0();
 if (VAR_3 != ((void*)0)) {
  FUNC_2("ECDSA m64 P-256",
   VAR_3, &VAR_2,
   &VAR_0,
   &VAR_1);
 } else {
  FUNC_1("%-30s UNAVAILABLE\n", "ECDSA m64 P-256");
 }
}
