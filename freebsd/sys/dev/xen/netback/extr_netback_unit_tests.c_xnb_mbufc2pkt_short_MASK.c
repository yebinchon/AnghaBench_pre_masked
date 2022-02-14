
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xnb_pkt {size_t size; size_t car_size; int flags; int list_len; scalar_t__ car; } ;
struct TYPE_2__ {size_t len; } ;
struct mbuf {size_t m_len; TYPE_1__ m_pkthdr; int m_flags; } ;
typedef scalar_t__ RING_IDX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 struct mbuf* FUNC_1 (int *,size_t,int ,int ) ;
 int FUNC_2 (struct mbuf**) ;
 int FUNC_3 (struct mbuf*,struct xnb_pkt*,scalar_t__,int) ;
 int FUNC_4 (struct xnb_pkt*) ;

__attribute__((used)) static void
FUNC_5(char *VAR_5, size_t VAR_6) {
 struct xnb_pkt VAR_7;
 size_t VAR_8 = 128;
 int VAR_9 = 64;
 RING_IDX VAR_10 = 9;
 struct mbuf *VAR_11;

 VAR_11 = FUNC_1(((void*)0), VAR_8, VAR_2, VAR_0);
 VAR_11->m_flags |= VAR_1;
 VAR_11->m_pkthdr.len = VAR_8;
 VAR_11->m_len = VAR_8;

 FUNC_3(VAR_11, &VAR_7, VAR_10, VAR_9);
 FUNC_0(FUNC_4(&VAR_7));
 FUNC_0(VAR_7.size == VAR_8);
 FUNC_0(VAR_7.car_size == VAR_8);
 FUNC_0(! (VAR_7.flags &
       (VAR_4 | VAR_3)));
 FUNC_0(VAR_7.list_len == 1);
 FUNC_0(VAR_7.car == VAR_10);

 FUNC_2(&VAR_11);
}
