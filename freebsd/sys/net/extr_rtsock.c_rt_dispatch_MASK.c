
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rcvif; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct m_tag {int dummy; } ;
typedef unsigned short sa_family_t ;


 unsigned short VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct mbuf*) ;
 struct m_tag* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct mbuf*,struct m_tag*) ;
 int FUNC_3 (int ,struct mbuf*) ;

__attribute__((used)) static void
FUNC_4(struct mbuf *VAR_5, sa_family_t VAR_6)
{
 struct m_tag *VAR_7;






 if (VAR_6 != VAR_0) {
  VAR_7 = FUNC_1(VAR_3, sizeof(unsigned short),
      VAR_1);
  if (VAR_7 == ((void*)0)) {
   FUNC_0(VAR_5);
   return;
  }
  *(unsigned short *)(VAR_7 + 1) = VAR_6;
  FUNC_2(VAR_5, VAR_7);
 }
 FUNC_3(VAR_2, VAR_5);
}
