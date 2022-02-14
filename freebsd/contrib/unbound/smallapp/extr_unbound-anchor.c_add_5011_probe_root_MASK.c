
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_ctx {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (struct ub_ctx*) ;
 int FUNC_3 (struct ub_ctx*,char*,char const*) ;
 char* FUNC_4 (int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_5(struct ub_ctx* VAR_1, const char* VAR_2)
{
 int VAR_3;
 VAR_3 = FUNC_3(VAR_1, "auto-trust-anchor-file:", VAR_2);
 if(VAR_3) {
  if(VAR_0) FUNC_1("add 5011 probe to ctx: %s\n", FUNC_4(VAR_3));
  FUNC_2(VAR_1);
  FUNC_0(0);
 }
}
