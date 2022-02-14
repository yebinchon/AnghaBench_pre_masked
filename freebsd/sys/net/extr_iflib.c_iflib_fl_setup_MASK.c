
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_2__* iflib_rxq_t ;
typedef TYPE_3__* iflib_fl_t ;
typedef TYPE_4__* if_ctx_t ;
struct TYPE_12__ {scalar_t__ ifc_rx_mbuf_sz; scalar_t__ ifc_max_fl_buf_size; } ;
struct TYPE_11__ {scalar_t__ ifl_credits; scalar_t__ ifl_buf_size; TYPE_1__* ifl_ifdi; scalar_t__ ifl_size; int ifl_zone; int ifl_cltype; int ifl_rx_bitmap; TYPE_2__* ifl_rxq; } ;
struct TYPE_10__ {TYPE_4__* ifr_ctx; } ;
struct TYPE_9__ {int idi_map; int idi_tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*,scalar_t__) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static int
FUNC_8(iflib_fl_t VAR_3)
{
 iflib_rxq_t VAR_4 = VAR_3->ifl_rxq;
 if_ctx_t VAR_5 = VAR_4->ifr_ctx;

 FUNC_2(VAR_3->ifl_rx_bitmap, 0, VAR_3->ifl_size - 1);



 FUNC_4(VAR_3);

 FUNC_0(VAR_3->ifl_credits == 0);
 VAR_3->ifl_buf_size = VAR_5->ifc_rx_mbuf_sz;
 if (VAR_3->ifl_buf_size > VAR_5->ifc_max_fl_buf_size)
  VAR_5->ifc_max_fl_buf_size = VAR_3->ifl_buf_size;
 VAR_3->ifl_cltype = FUNC_5(VAR_3->ifl_buf_size);
 VAR_3->ifl_zone = FUNC_6(VAR_3->ifl_buf_size);





 FUNC_1(VAR_5, VAR_3, FUNC_7(128, VAR_3->ifl_size));
 FUNC_0(FUNC_7(128, VAR_3->ifl_size) == VAR_3->ifl_credits);
 if (FUNC_7(128, VAR_3->ifl_size) != VAR_3->ifl_credits)
  return (VAR_2);



 FUNC_0(VAR_4 != ((void*)0));
 FUNC_0(VAR_3->ifl_ifdi != ((void*)0));
 FUNC_3(VAR_3->ifl_ifdi->idi_tag, VAR_3->ifl_ifdi->idi_map,
     VAR_0 | VAR_1);
 return (0);
}
