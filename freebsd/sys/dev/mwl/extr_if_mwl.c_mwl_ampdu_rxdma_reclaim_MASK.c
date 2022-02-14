
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ len; } ;
struct TYPE_3__ {scalar_t__ ext_free; int ext_buf; int ext_paddr; } ;
struct mbuf {int m_flags; int m_data; TYPE_2__ m_pkthdr; TYPE_1__ m_ext; } ;
struct ieee80211_rx_ampdu {int rxa_qframes; int rxa_wnd; struct mbuf** rxa_m; } ;
typedef scalar_t__ caddr_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mbuf*,void*,scalar_t__,int ,int *,int *) ;
 int FUNC_1 (struct mbuf*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct mbuf*,int) ;
 int VAR_4 ;
 int FUNC_3 (scalar_t__,int,scalar_t__) ;
 scalar_t__ VAR_5 ;
 void* FUNC_4 (int *,int ,int *) ;

__attribute__((used)) static void
FUNC_5(struct ieee80211_rx_ampdu *VAR_6)
{
}
