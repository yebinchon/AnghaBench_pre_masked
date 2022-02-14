
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_ctx {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct ub_ctx*,char const*) ;
 struct ub_ctx* FUNC_3 () ;
 int FUNC_4 (struct ub_ctx*,char const*,char*) ;
 int FUNC_5 (struct ub_ctx*,char const*) ;
 int FUNC_6 (struct ub_ctx*,char*,char const*) ;
 char* FUNC_7 (int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static struct ub_ctx*
FUNC_8(const char* VAR_1, const char* VAR_2,
 const char* VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6;
 struct ub_ctx* VAR_7 = FUNC_3();
 if(!VAR_7) {
  if(VAR_0) FUNC_1("out of memory\n");
  FUNC_0(0);
 }

 VAR_6 = FUNC_6(VAR_7, "target-fetch-policy:", "0 0 0 0 0");
 if(VAR_6 && VAR_0) FUNC_1("ctx targetfetchpolicy: %s\n", FUNC_7(VAR_6));

 if(VAR_3) {
  VAR_6 = FUNC_2(VAR_7, VAR_3);
  if(VAR_6) FUNC_4(VAR_7, VAR_3, FUNC_7(VAR_6));
 }
 if(VAR_1) {
  VAR_6 = FUNC_5(VAR_7, VAR_1);
  if(VAR_6) FUNC_4(VAR_7, VAR_1, FUNC_7(VAR_6));
 }
 if(VAR_2) {
  VAR_6 = FUNC_6(VAR_7, "root-hints:", VAR_2);
  if(VAR_6) FUNC_4(VAR_7, VAR_2, FUNC_7(VAR_6));
 }
 if(VAR_4) {
  VAR_6 = FUNC_6(VAR_7, "do-ip6:", "no");
  if(VAR_6) FUNC_4(VAR_7, "ip4only", FUNC_7(VAR_6));
 }
 if(VAR_5) {
  VAR_6 = FUNC_6(VAR_7, "do-ip4:", "no");
  if(VAR_6) FUNC_4(VAR_7, "ip6only", FUNC_7(VAR_6));
 }
 return VAR_7;
}
