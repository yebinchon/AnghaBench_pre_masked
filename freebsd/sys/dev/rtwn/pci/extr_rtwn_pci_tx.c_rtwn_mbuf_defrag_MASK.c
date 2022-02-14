
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ len; } ;
struct mbuf {int m_flags; scalar_t__ m_len; TYPE_1__ m_pkthdr; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mbuf*,int ,scalar_t__,int ) ;
 struct mbuf* FUNC_2 (struct mbuf*,int) ;
 scalar_t__ FUNC_3 (struct mbuf*,struct mbuf*,int) ;
 int FUNC_4 (struct mbuf*) ;
 struct mbuf* FUNC_5 (int,int ,int,scalar_t__) ;
 int FUNC_6 (struct mbuf*,int ) ;

__attribute__((used)) static struct mbuf *
FUNC_7(struct mbuf *VAR_5, int VAR_6)
{
 struct mbuf *VAR_7 = ((void*)0);

 FUNC_0(VAR_5->m_flags & VAR_3,
     ("M_PKTHDR flag is absent (m %p)!", VAR_5));


 if (VAR_5->m_pkthdr.len > VAR_1) {

  return (((void*)0));
 } else if (VAR_5->m_pkthdr.len > VAR_0) {
  VAR_7 = FUNC_5(VAR_6, VAR_2, VAR_3, VAR_1);
  if (VAR_7 == ((void*)0))
   return (((void*)0));

  if (FUNC_3(VAR_7, VAR_5, VAR_6) == 0) {
   FUNC_4(VAR_7);
   return (((void*)0));
  }

  FUNC_1(VAR_5, 0, VAR_5->m_pkthdr.len, FUNC_6(VAR_7, VAR_4));
  VAR_7->m_len = VAR_7->m_pkthdr.len;
  FUNC_4(VAR_5);

  return (VAR_7);
 } else
  return (FUNC_2(VAR_5, VAR_6));
}
