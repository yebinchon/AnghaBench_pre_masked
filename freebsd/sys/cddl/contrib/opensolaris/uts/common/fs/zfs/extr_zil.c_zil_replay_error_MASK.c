
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int zl_os; int zl_replaying_seq; } ;
typedef TYPE_1__ zilog_t ;
typedef int u_longlong_t ;
struct TYPE_6__ {int lrc_txtype; scalar_t__ lrc_seq; } ;
typedef TYPE_2__ lr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,char*,int ,int ,char*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int
FUNC_2(zilog_t *VAR_3, lr_t *VAR_4, int VAR_5)
{
 char VAR_6[VAR_2];

 VAR_3->zl_replaying_seq--;

 FUNC_1(VAR_3->zl_os, VAR_6);

 FUNC_0(VAR_0, "ZFS replay transaction error %d, "
     "dataset %s, seq 0x%llx, txtype %llu %s\n", VAR_5, VAR_6,
     (u_longlong_t)VAR_4->lrc_seq,
     (u_longlong_t)(VAR_4->lrc_txtype & ~VAR_1),
     (VAR_4->lrc_txtype & VAR_1) ? "CI" : "");

 return (VAR_5);
}
