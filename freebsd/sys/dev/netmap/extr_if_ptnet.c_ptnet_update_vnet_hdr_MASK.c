
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ptnet_softc {int vnet_hdr_len; TYPE_3__* ptna; int iomem; } ;
struct TYPE_4__ {int virt_hdr_len; } ;
struct TYPE_5__ {TYPE_1__ up; } ;
struct TYPE_6__ {TYPE_2__ hwup; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,unsigned int) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_2(struct ptnet_softc *VAR_3)
{
 unsigned int VAR_4 = VAR_2 ? VAR_0 : 0;

 FUNC_1(VAR_3->iomem, VAR_1, VAR_4);
 VAR_3->vnet_hdr_len = FUNC_0(VAR_3->iomem, VAR_1);
 VAR_3->ptna->hwup.up.virt_hdr_len = VAR_3->vnet_hdr_len;
}
