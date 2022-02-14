
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_2__ {int len; struct ifnet* rcvif; } ;
struct mbuf {int m_flags; int m_data; TYPE_1__ m_pkthdr; int m_len; } ;
struct ifnet {int if_bpf; } ;
typedef int af1 ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct mbuf*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ifnet* VAR_7 ;
 int FUNC_2 (int,char*,int ) ;
 int FUNC_3 (int ,struct mbuf*) ;
 int FUNC_4 (int ,int*,int,struct mbuf*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct ifnet*,int ,int) ;
 int FUNC_7 (struct mbuf*,int) ;
 int FUNC_8 (struct mbuf*) ;
 int FUNC_9 (struct mbuf*) ;
 int FUNC_10 (struct ifnet*,struct mbuf*) ;
 int FUNC_11 (struct mbuf*,int ) ;
 int FUNC_12 (int,struct mbuf*) ;
 int FUNC_13 (char*,int) ;
 int VAR_8 ;

int
FUNC_14(struct ifnet *VAR_9, struct mbuf *VAR_10, int VAR_11, int VAR_12)
{
 int VAR_13;

 FUNC_1(VAR_10);
 FUNC_9(VAR_10);
 VAR_10->m_pkthdr.rcvif = VAR_9;
 if (VAR_12 > 0) {
  if (FUNC_5(VAR_9->if_bpf)) {
   FUNC_3(VAR_9->if_bpf, VAR_10);
  }
 } else {
  if (FUNC_5(VAR_7->if_bpf)) {
   if ((VAR_10->m_flags & VAR_4) == 0 || VAR_7 == VAR_9) {

    u_int32_t VAR_14 = VAR_11;




    FUNC_4(VAR_7->if_bpf, &VAR_14, sizeof(VAR_14), VAR_10);
   }
  }
 }


 if (VAR_12 > 0) {
  FUNC_7(VAR_10, VAR_12);





  if (FUNC_11(VAR_10, VAR_8) & 3) {
   FUNC_0(VAR_12 >= 3, ("if_simloop: hlen too small"));
   FUNC_2(VAR_10->m_data,
       (char *)(FUNC_11(VAR_10, VAR_8)
    - (FUNC_11(VAR_10, VAR_8) & 3)),
       VAR_10->m_len);
   VAR_10->m_data -= (FUNC_11(VAR_10,VAR_8) & 3);
  }

 }


 switch (VAR_11) {
 default:
  FUNC_13("if_simloop: can't handle af=%d\n", VAR_11);
  FUNC_8(VAR_10);
  return (VAR_0);
 }
 FUNC_6(VAR_9, VAR_2, 1);
 FUNC_6(VAR_9, VAR_1, VAR_10->m_pkthdr.len);
 FUNC_12(VAR_13, VAR_10);
 return (0);
}
