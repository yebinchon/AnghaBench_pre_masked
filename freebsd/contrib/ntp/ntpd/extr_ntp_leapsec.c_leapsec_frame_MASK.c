
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int stime; int ttime; int dynls; int ebase; scalar_t__ this_tai; scalar_t__ next_tai; } ;
struct TYPE_8__ {TYPE_1__ head; } ;
typedef TYPE_2__ leap_table_t ;
struct TYPE_9__ {int dynamic; int ttime; int ebase; scalar_t__ tai_diff; scalar_t__ tai_offs; } ;
typedef TYPE_3__ leap_result_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_2 (int *,int *) ;

int
FUNC_3(
        leap_result_t *VAR_1)
{
 const leap_table_t * VAR_2;

        FUNC_1(VAR_1, 0, sizeof(leap_result_t));
 VAR_2 = FUNC_0(VAR_0);

 VAR_1->tai_offs = VAR_2->head.this_tai;
 VAR_1->tai_diff = VAR_2->head.next_tai - VAR_2->head.this_tai;
 VAR_1->ebase = VAR_2->head.ebase;
 VAR_1->ttime = VAR_2->head.ttime;
 VAR_1->dynamic = VAR_2->head.dynls;

 return FUNC_2(&VAR_2->head.ttime, &VAR_2->head.stime) >= 0;
}
