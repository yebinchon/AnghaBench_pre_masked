
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_2__ {scalar_t__ len; } ;
struct mbuf {scalar_t__ m_len; struct mbuf* m_next; TYPE_1__ m_pkthdr; } ;


 int FUNC_0 (struct mbuf*,int ) ;
 int FUNC_1 (struct mbuf*,int ,int ) ;
 int FUNC_2 (struct mbuf*,int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct mbuf*) ;
 int FUNC_4 (void*,scalar_t__,scalar_t__) ;
 int VAR_3 ;
 int FUNC_5 (struct mbuf*) ;
 scalar_t__ FUNC_6 (struct mbuf*,int ) ;

__attribute__((used)) static struct mbuf *FUNC_7 (void *VAR_4, u_int VAR_5)
{
 struct mbuf *VAR_6, *VAR_7, *VAR_8;

 FUNC_2 (VAR_6, VAR_2, VAR_1);

 if (! VAR_6)
  return 0;

 if (VAR_5 >= VAR_0)
  FUNC_0 (VAR_6, VAR_2);

 VAR_6->m_pkthdr.len = VAR_5;
 VAR_6->m_len = 0;

 VAR_8 = VAR_6;
 while (VAR_5) {
  u_int VAR_9 = FUNC_3 (VAR_8);
  if (VAR_9 > VAR_5)
   VAR_9 = VAR_5;
  if (! VAR_9) {

   VAR_7 = VAR_8;
   FUNC_1 (VAR_8, VAR_2, VAR_1);
   if (! VAR_8) {
    FUNC_5 (VAR_6);
    return 0;
   }
   if (VAR_5 >= VAR_0)
    FUNC_0 (VAR_8, VAR_2);
   VAR_8->m_len = 0;
   VAR_7->m_next = VAR_8;

   VAR_9 = FUNC_3 (VAR_8);
   if (VAR_9 > VAR_5)
    VAR_9 = VAR_5;
  }
  FUNC_4 (VAR_4, FUNC_6 (VAR_8, VAR_3) + VAR_8->m_len, VAR_9);

  VAR_8->m_len += VAR_9;
  VAR_4 = VAR_9 + (char*) VAR_4;
  VAR_5 -= VAR_9;
 }
 return VAR_6;
}
