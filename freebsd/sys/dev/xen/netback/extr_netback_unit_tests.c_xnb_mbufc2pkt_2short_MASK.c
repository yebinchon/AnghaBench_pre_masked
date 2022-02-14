
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xnb_pkt {size_t size; scalar_t__ car; size_t car_size; int list_len; scalar_t__ cdr; } ;
struct TYPE_2__ {size_t len; } ;
struct mbuf {size_t m_len; int * m_next; TYPE_1__ m_pkthdr; int m_flags; } ;
typedef scalar_t__ RING_IDX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 struct mbuf* FUNC_1 (struct mbuf*,size_t,int ,int ) ;
 int FUNC_2 (struct mbuf**) ;
 int FUNC_3 (struct mbuf*,struct xnb_pkt*,scalar_t__,int) ;
 int FUNC_4 (struct xnb_pkt*) ;

__attribute__((used)) static void
FUNC_5(char *VAR_4, size_t VAR_5) {
 struct xnb_pkt VAR_6;
 size_t VAR_7 = VAR_0 - 5;
 size_t VAR_8 = VAR_0 - 15;
 int VAR_9 = 32;
 RING_IDX VAR_10 = 14;
 struct mbuf *VAR_11, *VAR_12;

 VAR_11 = FUNC_1(((void*)0), VAR_7, VAR_3, VAR_1);
 FUNC_0(VAR_11 != ((void*)0));
 if (VAR_11 == ((void*)0))
  return;
 VAR_11->m_flags |= VAR_2;

 VAR_12 = FUNC_1(VAR_11, VAR_8, VAR_3, VAR_1);
 FUNC_0(VAR_12 != ((void*)0));
 if (VAR_12 == ((void*)0)) {
  FUNC_2(&VAR_11);
  return;
 }
 VAR_12->m_pkthdr.len = VAR_7 + VAR_8;
 VAR_12->m_len = VAR_7;

 FUNC_3(VAR_12, &VAR_6, VAR_10, VAR_9);
 FUNC_0(FUNC_4(&VAR_6));
 FUNC_0(VAR_6.size == VAR_7 + VAR_8);
 FUNC_0(VAR_6.car == VAR_10);




 if (VAR_12->m_next != ((void*)0)) {
  FUNC_0(VAR_6.car_size == VAR_7);
  FUNC_0(VAR_6.list_len == 1);
  FUNC_0(VAR_6.cdr == VAR_10 + 1);
 }

 FUNC_2(&VAR_12);
}
