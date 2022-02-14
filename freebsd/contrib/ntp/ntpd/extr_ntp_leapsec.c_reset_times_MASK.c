
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vint64 ;
struct TYPE_4__ {int ebase; int dtime; int ttime; int stime; } ;
struct TYPE_5__ {TYPE_1__ head; } ;
typedef TYPE_2__ leap_table_t ;


 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static void
FUNC_1(
 leap_table_t * VAR_0)
{
 FUNC_0(&VAR_0->head.ebase, 0xFF, sizeof(vint64));
 VAR_0->head.stime = VAR_0->head.ebase;
 VAR_0->head.ttime = VAR_0->head.ebase;
 VAR_0->head.dtime = VAR_0->head.ebase;
}
