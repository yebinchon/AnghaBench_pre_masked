
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct mbuf {int m_data; scalar_t__ m_len; struct mbuf* m_next; } ;
typedef int iflib_rxq_t ;
typedef TYPE_2__* if_rxsd_t ;
typedef TYPE_3__* if_rxd_info_t ;
typedef int * caddr_t ;
struct TYPE_12__ {scalar_t__ irf_len; } ;
struct TYPE_11__ {int iri_nfrags; int iri_pad; int iri_len; TYPE_4__* iri_frags; } ;
struct TYPE_10__ {TYPE_1__* ifsd_fl; int ** ifsd_cl; } ;
struct TYPE_9__ {int ifl_cltype; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct mbuf*,int *,int ) ;
 int FUNC_2 (struct mbuf*) ;
 int FUNC_3 (struct mbuf*,int ,int ,int) ;
 struct mbuf* FUNC_4 (int ,TYPE_4__*,int,TYPE_2__*,int*,TYPE_3__*) ;

__attribute__((used)) static struct mbuf *
FUNC_5(iflib_rxq_t VAR_7, if_rxd_info_t VAR_8, if_rxsd_t VAR_9, int *VAR_10)
{
 struct mbuf *VAR_11, *VAR_12, *VAR_13;
 caddr_t VAR_14;
 int *VAR_15, VAR_16, VAR_17, VAR_18;
 bool VAR_19;

 VAR_17 = 0;
 VAR_12 = ((void*)0);
 VAR_19 = 0;
 *VAR_10 = VAR_6;
 VAR_15 = VAR_10;
 do {
  VAR_11 = FUNC_4(VAR_7, &VAR_8->iri_frags[VAR_17], !VAR_19, VAR_9,
      VAR_15, VAR_8);

  FUNC_0(*VAR_9->ifsd_cl != ((void*)0));





  if (VAR_8->iri_frags[VAR_17].irf_len == 0 || VAR_19 ||
      *VAR_10 == VAR_4 || *VAR_10 == VAR_5) {
   if (VAR_12 == ((void*)0)) {

    VAR_19 = 1;
    VAR_15 = ((void*)0);
    continue;
   }

   FUNC_3(VAR_11, VAR_2, VAR_0, 0);
   FUNC_2(VAR_11);
   continue;
  }
  if (VAR_12 == ((void*)0)) {
   VAR_16 = VAR_3|VAR_1;
   VAR_12 = VAR_13 = VAR_11;
   VAR_18 = VAR_8->iri_pad;
  } else {
   VAR_16 = VAR_1;
   VAR_13->m_next = VAR_11;
   VAR_13 = VAR_11;

   VAR_18 = 0;
  }
  VAR_14 = *VAR_9->ifsd_cl;
  *VAR_9->ifsd_cl = ((void*)0);


  FUNC_3(VAR_11, VAR_2, VAR_0, VAR_16);
  FUNC_1(VAR_11, VAR_14, VAR_9->ifsd_fl->ifl_cltype);



  VAR_11->m_data += VAR_18;
  VAR_8->iri_len -= VAR_18;
  VAR_11->m_len = VAR_8->iri_frags[VAR_17].irf_len;
 } while (++VAR_17 < VAR_8->iri_nfrags);

 return (VAR_12);
}
