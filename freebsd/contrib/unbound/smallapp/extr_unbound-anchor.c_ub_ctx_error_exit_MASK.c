
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_ctx {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct ub_ctx*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_3(struct ub_ctx* VAR_1, const char* VAR_2, const char* VAR_3)
{
 FUNC_2(VAR_1);
 if(VAR_2 && VAR_3 && VAR_0) FUNC_1("%s: %s\n", VAR_2, VAR_3);
 if(VAR_0) FUNC_1("error: could not create unbound resolver context\n");
 FUNC_0(0);
}
