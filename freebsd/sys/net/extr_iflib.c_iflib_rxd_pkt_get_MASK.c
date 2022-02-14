
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int csum_data; int csum_flags; int flowid; int ether_vtag; int rcvif; int len; } ;
struct mbuf {int m_data; scalar_t__ m_len; TYPE_1__ m_pkthdr; int m_flags; } ;
struct if_rxsd {int * ifsd_cl; } ;
typedef int iflib_rxq_t ;
typedef TYPE_2__* if_rxd_info_t ;
struct TYPE_9__ {scalar_t__ irf_len; } ;
struct TYPE_8__ {int iri_nfrags; int iri_csum_data; int iri_csum_flags; int iri_rsstype; int iri_flowid; int iri_vtag; int iri_flags; int iri_ifp; int iri_len; TYPE_3__* iri_frags; } ;


 int VAR_0 ;
 int FUNC_0 (struct mbuf*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct mbuf*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct mbuf* FUNC_3 (int ,TYPE_2__*,struct if_rxsd*,int*) ;
 int FUNC_4 (struct mbuf*,int ,int ,int ) ;
 int FUNC_5 (int,int ,int ) ;
 struct mbuf* FUNC_6 (int ,TYPE_3__*,int,struct if_rxsd*,int*,TYPE_2__*) ;

__attribute__((used)) static struct mbuf *
FUNC_7(iflib_rxq_t VAR_7, if_rxd_info_t VAR_8)
{
 struct if_rxsd VAR_9;
 struct mbuf *VAR_10;
 int VAR_11;


 if (VAR_8->iri_nfrags == 1 &&
     VAR_8->iri_frags[0].irf_len <= FUNC_1(VAR_0, VAR_1)) {
  VAR_10 = FUNC_6(VAR_7, &VAR_8->iri_frags[0], 0, &VAR_9,
      &VAR_11, VAR_8);
  if (VAR_11 != VAR_5 && VAR_11 != VAR_6)
   return (VAR_10);
  if (VAR_11 == VAR_5) {
   FUNC_4(VAR_10, VAR_3, VAR_2, VAR_4);

   if (!FUNC_0(VAR_10))
    VAR_10->m_data += 2;

   FUNC_5(VAR_10->m_data, *VAR_9.ifsd_cl, VAR_8->iri_len);
   VAR_10->m_len = VAR_8->iri_frags[0].irf_len;
  }
 } else {
  VAR_10 = FUNC_3(VAR_7, VAR_8, &VAR_9, &VAR_11);
  if (VAR_11 != VAR_5 && VAR_11 != VAR_6)
   return (VAR_10);
 }
 VAR_10->m_pkthdr.len = VAR_8->iri_len;
 VAR_10->m_pkthdr.rcvif = VAR_8->iri_ifp;
 VAR_10->m_flags |= VAR_8->iri_flags;
 VAR_10->m_pkthdr.ether_vtag = VAR_8->iri_vtag;
 VAR_10->m_pkthdr.flowid = VAR_8->iri_flowid;
 FUNC_2(VAR_10, VAR_8->iri_rsstype);
 VAR_10->m_pkthdr.csum_flags = VAR_8->iri_csum_flags;
 VAR_10->m_pkthdr.csum_data = VAR_8->iri_csum_data;
 return (VAR_10);
}
