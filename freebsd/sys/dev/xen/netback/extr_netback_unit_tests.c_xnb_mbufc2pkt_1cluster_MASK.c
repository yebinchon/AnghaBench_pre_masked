
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xnb_pkt {size_t size; size_t car_size; int flags; int list_len; scalar_t__ car; } ;
struct TYPE_2__ {size_t len; } ;
struct mbuf {size_t m_len; TYPE_1__ m_pkthdr; int m_flags; } ;
typedef scalar_t__ RING_IDX ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 struct mbuf* FUNC_1 (int *,size_t,int ,int ) ;
 int FUNC_2 (struct mbuf**) ;
 int FUNC_3 (struct mbuf*,struct xnb_pkt*,scalar_t__,int) ;
 int FUNC_4 (struct xnb_pkt*) ;

__attribute__((used)) static void
FUNC_5(char *VAR_6, size_t VAR_7) {
 struct xnb_pkt VAR_8;
 size_t VAR_9 = VAR_0;
 int VAR_10 = 32;
 RING_IDX VAR_11 = 12;
 struct mbuf *VAR_12;

 VAR_12 = FUNC_1(((void*)0), VAR_9, VAR_3, VAR_1);
 VAR_12->m_flags |= VAR_2;
 VAR_12->m_pkthdr.len = VAR_9;
 VAR_12->m_len = VAR_9;

 FUNC_3(VAR_12, &VAR_8, VAR_11, VAR_10);
 FUNC_0(FUNC_4(&VAR_8));
 FUNC_0(VAR_8.size == VAR_9);
 FUNC_0(VAR_8.car_size == VAR_9);
 FUNC_0(! (VAR_8.flags &
       (VAR_5 | VAR_4)));
 FUNC_0(VAR_8.list_len == 1);
 FUNC_0(VAR_8.car == VAR_11);

 FUNC_2(&VAR_12);
}
