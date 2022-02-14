
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int64_t ;
typedef int u_int32_t ;
struct TYPE_4__ {int command2; } ;
struct TYPE_3__ {int command1; int command2; } ;
struct ata_params {TYPE_2__ enabled; TYPE_1__ support; scalar_t__ lba_size48_4; scalar_t__ lba_size48_3; scalar_t__ lba_size48_2; scalar_t__ lba_size48_1; scalar_t__ lba_size_2; scalar_t__ lba_size_1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(struct ata_params *VAR_2, u_int64_t VAR_3, int VAR_4)
{
 u_int32_t VAR_5 = (u_int32_t)VAR_2->lba_size_1 |
    ((u_int32_t)VAR_2->lba_size_2 << 16);

 u_int64_t VAR_6 = ((u_int64_t)VAR_2->lba_size48_1) |
    ((u_int64_t)VAR_2->lba_size48_2 << 16) |
    ((u_int64_t)VAR_2->lba_size48_3 << 32) |
    ((u_int64_t)VAR_2->lba_size48_4 << 48);

 if (VAR_4) {
  FUNC_0("\nFeature                      "
         "Support  Enabled   Value\n");
 }

 FUNC_0("Host Protected Area (HPA)      ");
 if (VAR_2->support.command1 & VAR_1) {
  u_int64_t VAR_7 = VAR_6 ? VAR_6 : VAR_5;
  FUNC_0("yes      %s     %ju/%ju\n", (VAR_3 > VAR_7) ? "yes" : "no ",
   VAR_7, VAR_3);

  FUNC_0("HPA - Security                 ");
  if (VAR_2->support.command2 & VAR_0)
   FUNC_0("yes      %s\n", (VAR_2->enabled.command2 &
       VAR_0) ? "yes" : "no ");
  else
   FUNC_0("no\n");
 } else {
  FUNC_0("no\n");
 }
}
