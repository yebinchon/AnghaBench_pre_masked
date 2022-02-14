
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int hash; scalar_t__ newvlan; int nat_mode; scalar_t__ action; scalar_t__ hitcnts; scalar_t__ nat_seq_chk; scalar_t__ newsmac; scalar_t__ newdmac; } ;
struct filter_entry {scalar_t__ tid; int pending; scalar_t__ valid; TYPE_3__ fs; TYPE_2__* smt; } ;
struct TYPE_4__ {scalar_t__ ntids; } ;
struct adapter {TYPE_1__ tids; } ;
struct TYPE_5__ {int idx; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned long long VAR_5 ;
 unsigned long long VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned long long) ;
 int FUNC_4 (unsigned long long) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_7 (struct adapter*) ;
 int FUNC_8 (struct adapter*,struct filter_entry*,int,int,int,int) ;
 int FUNC_9 (struct adapter*,scalar_t__,int ,int,int,int) ;
 int FUNC_10 (struct adapter*,scalar_t__,int ,int,int) ;

__attribute__((used)) static int
FUNC_11(struct adapter *VAR_17, struct filter_entry *VAR_18)
{
 int VAR_19 = 0;

 FUNC_0(VAR_18->tid < VAR_17->tids.ntids);
 FUNC_0(VAR_18->fs.hash);
 FUNC_0(VAR_18->pending);
 FUNC_0(VAR_18->valid == 0);

 if (VAR_18->fs.newdmac) {
  FUNC_10(VAR_17, VAR_18->tid, VAR_8, 1, 1);
  VAR_19++;
 }

 if (VAR_18->fs.newvlan == VAR_11 || VAR_18->fs.newvlan == VAR_12) {
  FUNC_10(VAR_17, VAR_18->tid, VAR_10, 1, 1);
  VAR_19++;
 }

 if (VAR_18->fs.newsmac) {
  FUNC_0(VAR_18->smt != ((void*)0));
  FUNC_10(VAR_17, VAR_18->tid, VAR_7, 1, 1);
  FUNC_9(VAR_17, VAR_18->tid, VAR_14,
      FUNC_2(VAR_4), FUNC_2(VAR_18->smt->idx),
      1);
  VAR_19++;
 }

 switch(VAR_18->fs.nat_mode) {
 case 129:
  break;
 case 134:
  FUNC_8(VAR_17, VAR_18, 1, 0, 0, 0);
  VAR_19++;
  break;
 case 133:
  FUNC_8(VAR_17, VAR_18, 1, 0, 1, 0);
  VAR_19++;
  break;
 case 132:
  FUNC_8(VAR_17, VAR_18, 1, 1, 1, 0);
  VAR_19++;
  break;
 case 131:
  FUNC_8(VAR_17, VAR_18, 1, 0, 1, 1);
  VAR_19++;
  break;
 case 128:
  FUNC_8(VAR_17, VAR_18, 0, 1, 0, 1);
  VAR_19++;
  break;
 case 130:
  FUNC_8(VAR_17, VAR_18, 1, 1, 0, 1);
  VAR_19++;
  break;
 case 135:
  FUNC_8(VAR_17, VAR_18, 1, 1, 1, 1);
  VAR_19++;
  break;
 default:
  FUNC_0(0);
  break;

 }

 if (VAR_18->fs.nat_seq_chk) {
  FUNC_9(VAR_17, VAR_18->tid, VAR_13,
      FUNC_1(VAR_3),
      FUNC_1(VAR_18->fs.nat_seq_chk), 1);
  VAR_19++;
 }

 if (FUNC_7(VAR_17) && VAR_18->fs.action == VAR_1) {



  FUNC_9(VAR_17, VAR_18->tid, VAR_16, FUNC_6(1) |
      FUNC_5(1), FUNC_5(1), 1);
  VAR_19++;
 }






 if (VAR_18->fs.action == VAR_2) {
  FUNC_10(VAR_17, VAR_18->tid, VAR_9, 1, 1);
  VAR_19++;
 }

 if (VAR_18->fs.hitcnts || VAR_19 > 0) {
  FUNC_9(VAR_17, VAR_18->tid, VAR_15,
      FUNC_3(VAR_5) |
      FUNC_4(VAR_6),
      FUNC_3(0ULL) | FUNC_4(0ULL), 0);
  return (VAR_0);
 }

 return (0);
}
