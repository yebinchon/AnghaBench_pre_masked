
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int kmutex_t ;
struct TYPE_11__ {TYPE_3__* b_hdr; } ;
typedef TYPE_2__ arc_buf_t ;
struct TYPE_10__ {scalar_t__ b_state; int * b_freeze_cksum; } ;
struct TYPE_12__ {TYPE_1__ b_l1hdr; } ;
typedef TYPE_3__ arc_buf_hdr_t ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*) ;
 int * FUNC_3 (TYPE_3__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_2 ;

void
FUNC_8(arc_buf_t *VAR_3)
{
 arc_buf_hdr_t *VAR_4 = VAR_3->b_hdr;
 kmutex_t *VAR_5;

 if (!(VAR_2 & VAR_0))
  return;

 if (FUNC_0(VAR_3)) {
  FUNC_1(VAR_4->b_l1hdr.b_freeze_cksum == ((void*)0) ||
      FUNC_5(VAR_4));
  return;
 }

 VAR_5 = FUNC_3(VAR_4);
 FUNC_6(VAR_5);

 FUNC_1(FUNC_2(VAR_4));
 FUNC_1(VAR_4->b_l1hdr.b_freeze_cksum != ((void*)0) ||
     VAR_4->b_l1hdr.b_state == VAR_1);
 FUNC_4(VAR_3);
 FUNC_7(VAR_5);
}
