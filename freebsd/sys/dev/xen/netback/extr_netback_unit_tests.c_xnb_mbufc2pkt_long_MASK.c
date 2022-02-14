
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xnb_pkt {size_t size; scalar_t__ car; int car_size; int flags; scalar_t__ cdr; } ;
struct TYPE_2__ {size_t len; } ;
struct mbuf {int m_len; struct mbuf* m_next; TYPE_1__ m_pkthdr; int m_flags; } ;
typedef scalar_t__ RING_IDX ;


 int FUNC_0 (int ,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mbuf*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 struct mbuf* FUNC_3 (int *,size_t,int ,int ) ;
 int FUNC_4 (struct mbuf**) ;
 int FUNC_5 (struct mbuf*,struct xnb_pkt*,scalar_t__,int) ;
 int FUNC_6 (struct xnb_pkt*) ;

__attribute__((used)) static void
FUNC_7(char *VAR_5, size_t VAR_6) {
 struct xnb_pkt VAR_7;
 size_t VAR_8 = 14 * VAR_0 / 3;
 size_t VAR_9;
 int VAR_10 = 15;
 RING_IDX VAR_11 = 3;
 struct mbuf *VAR_12, *VAR_13;

 VAR_12 = FUNC_3(((void*)0), VAR_8, VAR_3, VAR_1);
 FUNC_2(VAR_12 != ((void*)0));
 if (VAR_12 == ((void*)0))
  return;
 VAR_12->m_flags |= VAR_2;

 VAR_12->m_pkthdr.len = VAR_8;
 VAR_9 = VAR_8;
 for (VAR_13 = VAR_12; VAR_13 != ((void*)0); VAR_13 = VAR_13->m_next) {
  VAR_13->m_len = FUNC_0(FUNC_1(VAR_13), VAR_9);
  VAR_9 -= VAR_13->m_len;
 }

 FUNC_5(VAR_12, &VAR_7, VAR_11, VAR_10);
 FUNC_2(FUNC_6(&VAR_7));
 FUNC_2(VAR_7.size == VAR_8);
 FUNC_2(VAR_7.car == VAR_11);
 FUNC_2(VAR_7.car_size = VAR_12->m_len);




 FUNC_2(! (VAR_7.flags & VAR_4));
 FUNC_2(VAR_7.cdr == VAR_7.car + 1);

 FUNC_4(&VAR_12);
}
