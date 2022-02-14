
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
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ,int ,int *,int *) ;
 int * FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_10(arc_buf_t *VAR_3)
{
 arc_buf_hdr_t *VAR_4 = VAR_3->b_hdr;

 if (!(VAR_2 & VAR_1))
  return;

 FUNC_1(FUNC_2(VAR_4));

 FUNC_8(&VAR_3->b_hdr->b_l1hdr.b_freeze_lock);
 if (VAR_4->b_l1hdr.b_freeze_cksum != ((void*)0)) {
  FUNC_1(FUNC_5(VAR_4));
  FUNC_9(&VAR_4->b_l1hdr.b_freeze_lock);
  return;
 } else if (FUNC_0(VAR_3)) {
  FUNC_9(&VAR_4->b_l1hdr.b_freeze_lock);
  return;
 }

 FUNC_1(!FUNC_0(VAR_3));
 VAR_4->b_l1hdr.b_freeze_cksum = FUNC_7(sizeof (zio_cksum_t),
     VAR_0);
 FUNC_6(VAR_3->b_data, FUNC_3(VAR_3), ((void*)0),
     VAR_4->b_l1hdr.b_freeze_cksum);
 FUNC_9(&VAR_4->b_l1hdr.b_freeze_lock);



}
