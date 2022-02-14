
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; } ;
struct TYPE_6__ {TYPE_1__ gso; } ;
struct TYPE_8__ {scalar_t__ type; int flags; TYPE_2__ u; } ;
struct xnb_pkt {size_t size; scalar_t__ car; int car_size; int flags; scalar_t__ cdr; TYPE_4__ extra; } ;
struct TYPE_7__ {size_t len; int tso_segsz; int csum_flags; } ;
struct mbuf {int m_len; TYPE_3__ m_pkthdr; struct mbuf* m_next; int m_flags; } ;
typedef scalar_t__ RING_IDX ;


 int VAR_0 ;
 int FUNC_0 (int ,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mbuf*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int) ;
 struct mbuf* FUNC_3 (int *,size_t,int ,int ) ;
 int FUNC_4 (struct mbuf**) ;
 int FUNC_5 (struct mbuf*,struct xnb_pkt*,scalar_t__,int) ;
 int FUNC_6 (struct xnb_pkt*) ;

__attribute__((used)) static void
FUNC_7(char *VAR_10, size_t VAR_11) {
 struct xnb_pkt VAR_12;
 size_t VAR_13 = 14 * VAR_1 / 3;
 size_t VAR_14;
 int VAR_15 = 15;
 RING_IDX VAR_16 = 3;
 struct mbuf *VAR_17, *VAR_18;

 VAR_17 = FUNC_3(((void*)0), VAR_13, VAR_4, VAR_2);
 FUNC_2(VAR_17 != ((void*)0));
 if (VAR_17 == ((void*)0))
  return;

 VAR_17->m_flags |= VAR_3;
 VAR_17->m_pkthdr.len = VAR_13;
 VAR_17->m_pkthdr.csum_flags |= VAR_0;
 VAR_17->m_pkthdr.tso_segsz = VAR_7 - 40;
 VAR_14 = VAR_13;
 for (VAR_18 = VAR_17; VAR_18 != ((void*)0); VAR_18 = VAR_18->m_next) {
  VAR_18->m_len = FUNC_0(FUNC_1(VAR_18), VAR_14);
  VAR_14 -= VAR_18->m_len;
 }

 FUNC_5(VAR_17, &VAR_12, VAR_16, VAR_15);
 FUNC_2(FUNC_6(&VAR_12));
 FUNC_2(VAR_12.size == VAR_13);
 FUNC_2(VAR_12.car == VAR_16);
 FUNC_2(VAR_12.car_size = VAR_17->m_len);

 FUNC_2(VAR_12.flags & VAR_6);
 FUNC_2(VAR_12.flags & VAR_5);
 FUNC_2(VAR_12.cdr == VAR_12.car + 2);
 FUNC_2(VAR_12.extra.u.gso.size = VAR_17->m_pkthdr.tso_segsz);
 FUNC_2(VAR_12.extra.type == VAR_9);
 FUNC_2(! (VAR_12.extra.flags & VAR_8));

 FUNC_4(&VAR_17);
}
