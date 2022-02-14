
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_2__ {int csum_data; int csum_flags; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ifnet {int if_capenable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct ifnet *VAR_9, struct mbuf *VAR_10,
    uint32_t VAR_11, uint16_t VAR_12)
{
 int VAR_13 = 0;

 if (VAR_9->if_capenable & VAR_4) {
  if ((VAR_11 & VAR_7) && (VAR_11 & VAR_6))
   VAR_13 |= VAR_1 | VAR_2;

  if ((VAR_12 & VAR_5) == 0 &&
      (FUNC_0(VAR_11) || FUNC_1(VAR_11)) &&
      (VAR_11 & VAR_8)) {
   VAR_13 |= VAR_0 | VAR_3;
   VAR_10->m_pkthdr.csum_data = 0xFFFF;
  }

  VAR_10->m_pkthdr.csum_flags = VAR_13;
 }
}
