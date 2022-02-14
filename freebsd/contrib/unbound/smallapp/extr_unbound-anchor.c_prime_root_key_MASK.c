
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_result {int dummy; } ;
struct ub_ctx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct ub_ctx*) ;
 int FUNC_3 (struct ub_ctx*,char*,int ,int ,struct ub_result**) ;
 char* FUNC_4 (int) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static struct ub_result*
FUNC_5(struct ub_ctx* VAR_3)
{
 struct ub_result* VAR_4 = ((void*)0);
 int VAR_5;
 VAR_5 = FUNC_3(VAR_3, ".", VAR_1, VAR_0, &VAR_4);
 if(VAR_5) {
  if(VAR_2) FUNC_1("resolve DNSKEY: %s\n", FUNC_4(VAR_5));
  FUNC_2(VAR_3);
  FUNC_0(0);
 }
 if(!VAR_4) {
  if(VAR_2) FUNC_1("out of memory\n");
  FUNC_2(VAR_3);
  FUNC_0(0);
 }
 return VAR_4;
}
