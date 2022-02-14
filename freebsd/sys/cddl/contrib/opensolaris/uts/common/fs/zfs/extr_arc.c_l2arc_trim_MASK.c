
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int l2ad_vdev; int l2ad_mtx; } ;
typedef TYPE_2__ l2arc_dev_t ;
struct TYPE_7__ {int b_daddr; TYPE_2__* b_dev; } ;
struct TYPE_9__ {TYPE_1__ b_l2hdr; } ;
typedef TYPE_3__ arc_buf_hdr_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_3__ const*) ;
 int FUNC_2 (TYPE_3__ const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_5(const arc_buf_hdr_t *VAR_0)
{
 l2arc_dev_t *VAR_1 = VAR_0->b_l2hdr.b_dev;

 FUNC_0(FUNC_2(VAR_0));
 FUNC_0(FUNC_3(&VAR_1->l2ad_mtx));

 if (FUNC_1(VAR_0) != 0) {
  FUNC_4(VAR_1->l2ad_vdev, VAR_0->b_l2hdr.b_daddr,
      FUNC_1(VAR_0), 0);
 }
}
