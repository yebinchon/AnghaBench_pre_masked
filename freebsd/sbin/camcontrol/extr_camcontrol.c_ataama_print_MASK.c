
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
typedef int u_int32_t ;
struct ata_params {int support2; scalar_t__ lba_size48_4; scalar_t__ lba_size48_3; scalar_t__ lba_size48_2; scalar_t__ lba_size48_1; scalar_t__ lba_size_2; scalar_t__ lba_size_1; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(struct ata_params *VAR_1, u_int64_t VAR_2, int VAR_3)
{
 u_int32_t VAR_4 = (u_int32_t)VAR_1->lba_size_1 |
    ((u_int32_t)VAR_1->lba_size_2 << 16);

 u_int64_t VAR_5 = ((u_int64_t)VAR_1->lba_size48_1) |
    ((u_int64_t)VAR_1->lba_size48_2 << 16) |
    ((u_int64_t)VAR_1->lba_size48_3 << 32) |
    ((u_int64_t)VAR_1->lba_size48_4 << 48);

 if (VAR_3) {
  FUNC_0("\nFeature                      "
         "Support  Enabled   Value\n");
 }

 FUNC_0("Accessible Max Address Config  ");
 if (VAR_1->support2 & VAR_0) {
  u_int64_t VAR_6 = VAR_5 ? VAR_5 : VAR_4;
  FUNC_0("yes      %s     %ju/%ju\n",
      (VAR_2 > VAR_6) ? "yes" : "no ", VAR_6, VAR_2);
 } else {
  FUNC_0("no\n");
 }
}
