
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_tgchk_param {struct xt_audit_info* targinfo; } ;
struct xt_audit_info {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;

__attribute__((used)) static bool FUNC_1(const struct xt_tgchk_param *VAR_1)
{
 const struct xt_audit_info *VAR_2 = VAR_1->targinfo;

 if (VAR_2->type > VAR_0) {
  FUNC_0("Audit type out of range (valid range: 0..%hhu)\n",
   VAR_0);
  return 0;
 }

 return 1;
}
