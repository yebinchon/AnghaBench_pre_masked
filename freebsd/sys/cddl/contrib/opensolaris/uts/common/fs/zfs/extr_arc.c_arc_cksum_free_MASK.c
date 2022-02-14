
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zio_cksum_t ;
struct TYPE_5__ {int b_freeze_lock; int * b_freeze_cksum; } ;
struct TYPE_6__ {TYPE_1__ b_l1hdr; } ;
typedef TYPE_2__ arc_buf_hdr_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static inline void
FUNC_5(arc_buf_hdr_t *VAR_0)
{
 FUNC_0(FUNC_1(VAR_0));
 FUNC_3(&VAR_0->b_l1hdr.b_freeze_lock);
 if (VAR_0->b_l1hdr.b_freeze_cksum != ((void*)0)) {
  FUNC_2(VAR_0->b_l1hdr.b_freeze_cksum, sizeof (zio_cksum_t));
  VAR_0->b_l1hdr.b_freeze_cksum = ((void*)0);
 }
 FUNC_4(&VAR_0->b_l1hdr.b_freeze_lock);
}
