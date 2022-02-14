
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int zio_cksum_t ;
struct TYPE_11__ {int b_data; TYPE_3__* b_hdr; } ;
typedef TYPE_2__ arc_buf_t ;
struct TYPE_10__ {int b_freeze_lock; int * b_freeze_cksum; } ;
struct TYPE_12__ {TYPE_1__ b_l1hdr; } ;
typedef TYPE_3__ arc_buf_hdr_t ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int ,int ,int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_11(arc_buf_t *VAR_2)
{
 arc_buf_hdr_t *VAR_3 = VAR_2->b_hdr;
 zio_cksum_t VAR_4;

 if (!(VAR_1 & VAR_0))
  return;

 if (FUNC_0(VAR_2)) {
  FUNC_1(VAR_3->b_l1hdr.b_freeze_cksum == ((void*)0) ||
      FUNC_6(VAR_3));
  return;
 }

 FUNC_1(FUNC_2(VAR_3));

 FUNC_8(&VAR_3->b_l1hdr.b_freeze_lock);
 if (VAR_3->b_l1hdr.b_freeze_cksum == ((void*)0) || FUNC_3(VAR_3)) {
  FUNC_9(&VAR_3->b_l1hdr.b_freeze_lock);
  return;
 }

 FUNC_7(VAR_2->b_data, FUNC_5(VAR_2), ((void*)0), &VAR_4);
 if (!FUNC_4(*VAR_3->b_l1hdr.b_freeze_cksum, VAR_4))
  FUNC_10("buffer modified while frozen!");
 FUNC_9(&VAR_3->b_l1hdr.b_freeze_lock);
}
