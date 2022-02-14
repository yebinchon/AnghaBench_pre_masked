
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xnb_pkt {int dummy; } ;
struct mbuf {scalar_t__ m_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct mbuf* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct mbuf**) ;
 int FUNC_3 (struct mbuf*,struct xnb_pkt*,int ,int) ;
 int FUNC_4 (struct xnb_pkt*) ;

__attribute__((used)) static void
FUNC_5(char *VAR_2, size_t VAR_3) {
 struct xnb_pkt VAR_4;
 int VAR_5 = 64;
 struct mbuf *VAR_6;

 VAR_6 = FUNC_1(VAR_1, VAR_0);




 FUNC_0(VAR_6->m_len == 0);

 FUNC_3(VAR_6, &VAR_4, 0, VAR_5);
 FUNC_0(! FUNC_4(&VAR_4));

 FUNC_2(&VAR_6);
}
