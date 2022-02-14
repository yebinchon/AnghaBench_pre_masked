
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ br_ghash ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 int VAR_0 ;
 int FUNC_3 (char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(void)
{
 br_ghash VAR_1;

 VAR_1 = FUNC_0();
 if (VAR_1 == 0) {
  FUNC_2("%-30s UNAVAILABLE\n", "GHASH (pclmul)");
  FUNC_1(VAR_0);
 } else {
  FUNC_3("GHASH (pclmul)", VAR_1);
 }
}
