
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_tgchk_param {struct xt_CHECKSUM_info* targinfo; } ;
struct xt_CHECKSUM_info {int operation; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static bool FUNC_1(const struct xt_tgchk_param *VAR_1)
{
 const struct xt_CHECKSUM_info *VAR_2 = VAR_1->targinfo;

 if (VAR_2->operation & ~VAR_0) {
  FUNC_0("unsupported CHECKSUM operation %x\n", VAR_2->operation);
  return 0;
 }
 if (!VAR_2->operation) {
  FUNC_0("no CHECKSUM operation enabled\n");
  return 0;
 }
 return 1;
}
