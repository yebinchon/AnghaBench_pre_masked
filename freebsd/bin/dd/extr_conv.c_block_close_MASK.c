
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ dbcnt; scalar_t__ dbp; } ;
struct TYPE_5__ {int dbcnt; scalar_t__ dbp; } ;
struct TYPE_4__ {int trunc; } ;


 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,char,scalar_t__) ;
 TYPE_2__ VAR_3 ;
 TYPE_1__ VAR_4 ;

void
FUNC_2(void)
{
 if (VAR_2.dbcnt) {
  ++VAR_4.trunc;
  (void)FUNC_0(VAR_3.dbp, VAR_2.dbp - VAR_2.dbcnt, VAR_2.dbcnt);
  (void)FUNC_1(VAR_3.dbp + VAR_2.dbcnt, VAR_1 ? VAR_1[' '] : ' ',
      VAR_0 - VAR_2.dbcnt);
  VAR_3.dbcnt += VAR_0;
 }
}
