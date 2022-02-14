
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; } ;
struct mbuf {int m_flags; int m_len; TYPE_1__ m_pkthdr; int * m_next; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int VAR_5 ;
 int FUNC_2 (struct mbuf*,struct mbuf*) ;
 int FUNC_3 (struct mbuf*,int,int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_4 (struct mbuf*,struct mbuf*,int) ;
 int FUNC_5 (struct mbuf*) ;
 int FUNC_6 (struct mbuf*) ;
 struct mbuf* FUNC_7 (int,int ) ;
 struct mbuf* FUNC_8 (int,int ,int) ;
 struct mbuf* FUNC_9 (int,int ) ;
 int FUNC_10 (struct mbuf*,int ) ;

struct mbuf *
FUNC_11(struct mbuf *VAR_11, int VAR_12)
{
 struct mbuf *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);
 int VAR_15 = 0, VAR_16;

 FUNC_0(VAR_12);
 if (!(VAR_11->m_flags & VAR_4))
  return (VAR_11);

 FUNC_5(VAR_11);
 if (VAR_11->m_pkthdr.len > VAR_1)
  VAR_14 = FUNC_8(VAR_12, VAR_3, VAR_4);
 else
  VAR_14 = FUNC_9(VAR_12, VAR_3);

 if (VAR_14 == ((void*)0))
  goto nospace;

 if (FUNC_4(VAR_14, VAR_11, VAR_12) == 0)
  goto nospace;

 VAR_13 = VAR_14;

 while (VAR_15 < VAR_11->m_pkthdr.len) {
  VAR_16 = VAR_11->m_pkthdr.len - VAR_15;
  if (VAR_16 > VAR_0)
   VAR_16 = VAR_0;

  if (VAR_13 == ((void*)0)) {
   if (VAR_16 > VAR_2)
    VAR_13 = FUNC_8(VAR_12, VAR_3, 0);
   else
    VAR_13 = FUNC_7(VAR_12, VAR_3);
   if (VAR_13 == ((void*)0))
    goto nospace;
  }

  FUNC_3(VAR_11, VAR_15, VAR_16, FUNC_10(VAR_13, VAR_5));
  VAR_15 += VAR_16;
  VAR_13->m_len = VAR_16;
  if (VAR_13 != VAR_14)
   FUNC_2(VAR_14, VAR_13);
  VAR_13 = ((void*)0);
 }




 FUNC_6(VAR_11);
 VAR_11 = VAR_14;




 return (VAR_11);
nospace:



 if (VAR_14)
  FUNC_6(VAR_14);
 return (((void*)0));
}
