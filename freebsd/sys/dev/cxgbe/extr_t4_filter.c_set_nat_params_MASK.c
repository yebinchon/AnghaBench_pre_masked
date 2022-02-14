
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* nat_dip; int* nat_sip; int nat_dport; int nat_sport; scalar_t__ type; } ;
struct filter_entry {TYPE_1__ fs; int tid; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct adapter*,int ,scalar_t__,int ,int,int) ;

__attribute__((used)) static void
FUNC_1(struct adapter *VAR_6, struct filter_entry *VAR_7, const bool VAR_8,
    const bool VAR_9, const bool VAR_10, const bool VAR_11)
{

 if (VAR_8) {
  if (VAR_7->fs.type) {
   FUNC_0(VAR_6, VAR_7->tid, VAR_5, VAR_0,
       VAR_7->fs.nat_dip[15] | VAR_7->fs.nat_dip[14] << 8 |
       VAR_7->fs.nat_dip[13] << 16 | VAR_7->fs.nat_dip[12] << 24, 1);

   FUNC_0(VAR_6, VAR_7->tid,
       VAR_5 + 1, VAR_0,
       VAR_7->fs.nat_dip[11] | VAR_7->fs.nat_dip[10] << 8 |
       VAR_7->fs.nat_dip[9] << 16 | VAR_7->fs.nat_dip[8] << 24, 1);

   FUNC_0(VAR_6, VAR_7->tid,
       VAR_5 + 2, VAR_0,
       VAR_7->fs.nat_dip[7] | VAR_7->fs.nat_dip[6] << 8 |
       VAR_7->fs.nat_dip[5] << 16 | VAR_7->fs.nat_dip[4] << 24, 1);

   FUNC_0(VAR_6, VAR_7->tid,
       VAR_5 + 3, VAR_0,
       VAR_7->fs.nat_dip[3] | VAR_7->fs.nat_dip[2] << 8 |
       VAR_7->fs.nat_dip[1] << 16 | VAR_7->fs.nat_dip[0] << 24, 1);
  } else {
   FUNC_0(VAR_6, VAR_7->tid,
       VAR_3, VAR_0,
       VAR_7->fs.nat_dip[3] | VAR_7->fs.nat_dip[2] << 8 |
       VAR_7->fs.nat_dip[1] << 16 | VAR_7->fs.nat_dip[0] << 24, 1);
  }
 }

 if (VAR_9) {
  if (VAR_7->fs.type) {
   FUNC_0(VAR_6, VAR_7->tid,
       VAR_2, VAR_0,
       VAR_7->fs.nat_sip[15] | VAR_7->fs.nat_sip[14] << 8 |
       VAR_7->fs.nat_sip[13] << 16 | VAR_7->fs.nat_sip[12] << 24, 1);

   FUNC_0(VAR_6, VAR_7->tid,
       VAR_2 + 1, VAR_0,
       VAR_7->fs.nat_sip[11] | VAR_7->fs.nat_sip[10] << 8 |
       VAR_7->fs.nat_sip[9] << 16 | VAR_7->fs.nat_sip[8] << 24, 1);

   FUNC_0(VAR_6, VAR_7->tid,
       VAR_2 + 2, VAR_0,
       VAR_7->fs.nat_sip[7] | VAR_7->fs.nat_sip[6] << 8 |
       VAR_7->fs.nat_sip[5] << 16 | VAR_7->fs.nat_sip[4] << 24, 1);

   FUNC_0(VAR_6, VAR_7->tid,
       VAR_2 + 3, VAR_0,
       VAR_7->fs.nat_sip[3] | VAR_7->fs.nat_sip[2] << 8 |
       VAR_7->fs.nat_sip[1] << 16 | VAR_7->fs.nat_sip[0] << 24, 1);

  } else {
   FUNC_0(VAR_6, VAR_7->tid,
       VAR_4, VAR_0,
       VAR_7->fs.nat_sip[3] | VAR_7->fs.nat_sip[2] << 8 |
       VAR_7->fs.nat_sip[1] << 16 | VAR_7->fs.nat_sip[0] << 24, 1);
  }
 }

 FUNC_0(VAR_6, VAR_7->tid, VAR_1, VAR_0,
     (VAR_10 ? VAR_7->fs.nat_dport : 0) | (VAR_11 ? VAR_7->fs.nat_sport << 16 : 0), 1);
}
