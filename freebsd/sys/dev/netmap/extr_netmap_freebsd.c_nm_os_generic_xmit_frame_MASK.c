
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct nm_os_gen_arg {scalar_t__ len; int ring_nr; int addr; struct mbuf* m; struct ifnet* ifp; } ;
struct TYPE_5__ {struct ifnet* rcvif; int flowid; scalar_t__ len; } ;
struct TYPE_4__ {scalar_t__ ext_size; int ext_buf; } ;
struct mbuf {TYPE_2__ m_pkthdr; scalar_t__ m_len; int m_flags; TYPE_1__ m_ext; int m_data; } ;
struct ifnet {int if_vnet; } ;
struct TYPE_6__ {int (* if_transmit ) (struct ifnet*,struct mbuf*) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mbuf*) ;
 int VAR_0 ;
 int FUNC_3 (struct mbuf*,int ) ;
 int VAR_1 ;
 TYPE_3__* FUNC_4 (struct ifnet*) ;
 int FUNC_5 (struct mbuf*,int) ;
 int FUNC_6 (int ,int ,scalar_t__) ;
 int FUNC_7 (char*,int,struct mbuf*) ;
 int FUNC_8 (int,char*,scalar_t__,scalar_t__) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (struct ifnet*,struct mbuf*) ;

int
FUNC_11(struct nm_os_gen_arg *VAR_2)
{
 int VAR_3;
 u_int VAR_4 = VAR_2->len;
 struct ifnet *VAR_5 = VAR_2->ifp;
 struct mbuf *VAR_6 = VAR_2->m;






 if (FUNC_2(VAR_6) != 1) {
  FUNC_7("invalid refcnt %d for %p", FUNC_2(VAR_6), VAR_6);
  FUNC_9("in generic_xmit_frame");
 }
 if (VAR_6->m_ext.ext_size < VAR_4) {
  FUNC_8(2, "size %d < len %d", VAR_6->m_ext.ext_size, VAR_4);
  VAR_4 = VAR_6->m_ext.ext_size;
 }
 FUNC_6(VAR_2->addr, VAR_6->m_data, VAR_4);







 VAR_6->m_flags |= VAR_1;
 VAR_6->m_len = VAR_6->m_pkthdr.len = VAR_4;



 FUNC_5(VAR_6, 2);
 FUNC_3(VAR_6, VAR_0);
 VAR_6->m_pkthdr.flowid = VAR_2->ring_nr;
 VAR_6->m_pkthdr.rcvif = VAR_5;
 FUNC_1(VAR_5->if_vnet);
 VAR_3 = FUNC_4(VAR_5)->if_transmit(VAR_5, VAR_6);
 FUNC_0();
 return VAR_3 ? -1 : 0;
}
