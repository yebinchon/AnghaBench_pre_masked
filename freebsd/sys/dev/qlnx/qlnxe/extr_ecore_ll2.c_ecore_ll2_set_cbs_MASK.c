
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cookie; int slowpath_cb; scalar_t__ tx_release_cb; scalar_t__ tx_comp_cb; scalar_t__ rx_release_cb; scalar_t__ rx_comp_cb; } ;
struct ecore_ll2_info {TYPE_1__ cbs; } ;
struct ecore_ll2_cbs {scalar_t__ cookie; int slowpath_cb; scalar_t__ tx_release_cb; scalar_t__ tx_comp_cb; scalar_t__ rx_release_cb; scalar_t__ rx_comp_cb; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static enum _ecore_status_t
FUNC_0(struct ecore_ll2_info *VAR_2,
      const struct ecore_ll2_cbs *VAR_3)
{
 if (!VAR_3 || (!VAR_3->rx_comp_cb ||
       !VAR_3->rx_release_cb ||
       !VAR_3->tx_comp_cb ||
       !VAR_3->tx_release_cb ||
       !VAR_3->cookie))
  return VAR_0;

 VAR_2->cbs.rx_comp_cb = VAR_3->rx_comp_cb;
 VAR_2->cbs.rx_release_cb = VAR_3->rx_release_cb;
 VAR_2->cbs.tx_comp_cb = VAR_3->tx_comp_cb;
 VAR_2->cbs.tx_release_cb = VAR_3->tx_release_cb;
 VAR_2->cbs.slowpath_cb = VAR_3->slowpath_cb;
 VAR_2->cbs.cookie = VAR_3->cookie;

 return VAR_1;
}
