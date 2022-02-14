
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct sockaddr {scalar_t__ sa_family; int sa_data; } ;
struct route {int dummy; } ;
struct TYPE_2__ {int len; struct ifnet* rcvif; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ifnet {int if_bpf; } ;
typedef int af ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mbuf*) ;
 int FUNC_1 (int ,scalar_t__*,int) ;
 int FUNC_2 (int ,scalar_t__*,int,struct mbuf*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct ifnet*,int ,int) ;
 int FUNC_5 (struct mbuf*) ;

__attribute__((used)) static int
FUNC_6(struct ifnet *VAR_3, struct mbuf *VAR_4, const struct sockaddr *VAR_5,
    struct route *VAR_6)
{
 u_int32_t VAR_7;

 FUNC_0(VAR_4);


 if (VAR_5->sa_family == VAR_0)
  FUNC_1(VAR_5->sa_data, &VAR_7, sizeof(VAR_7));
 else
  VAR_7 = VAR_5->sa_family;

 if (FUNC_3(VAR_3->if_bpf))
  FUNC_2(VAR_3->if_bpf, &VAR_7, sizeof(VAR_7), VAR_4);

 VAR_4->m_pkthdr.rcvif = VAR_3;

 FUNC_4(VAR_3, VAR_2, 1);
 FUNC_4(VAR_3, VAR_1, VAR_4->m_pkthdr.len);

 FUNC_5(VAR_4);
 return (0);
}
