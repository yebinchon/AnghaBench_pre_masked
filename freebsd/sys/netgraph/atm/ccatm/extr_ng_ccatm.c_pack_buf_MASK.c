
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void u_char ;
struct TYPE_2__ {size_t len; } ;
struct mbuf {size_t m_len; TYPE_1__ m_pkthdr; int m_data; struct mbuf* m_next; } ;


 int FUNC_0 (int,char*) ;
 size_t VAR_0 ;
 int FUNC_1 (struct mbuf*,int ,int ) ;
 int FUNC_2 (struct mbuf*,int ,int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (void*,int ,size_t) ;
 int FUNC_4 (struct mbuf*) ;
 struct mbuf* FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static struct mbuf *
FUNC_6(void *VAR_5, size_t VAR_6, void *VAR_7, size_t VAR_8)
{
 struct mbuf *VAR_9, *VAR_10, *VAR_11;
 u_char *VAR_12 = (u_char *)VAR_7;
 size_t VAR_13;


 FUNC_2(VAR_10, VAR_4, VAR_3);
 if (VAR_10 == ((void*)0))
  return ((void*)0);

 FUNC_0(VAR_6 <= VAR_1, ("hlen > MHLEN"));

 FUNC_3(VAR_5, VAR_10->m_data, VAR_6);
 VAR_10->m_len = VAR_6;
 VAR_10->m_pkthdr.len = VAR_6;

 VAR_11 = VAR_10;
 while ((VAR_13 = VAR_8) != 0) {
  if (VAR_13 > VAR_2) {
   VAR_9 = FUNC_5(VAR_4, VAR_3, 0);
   if (VAR_13 > VAR_0)
    VAR_13 = VAR_0;
  } else
   FUNC_1(VAR_9, VAR_4, VAR_3);

  if(VAR_9 == ((void*)0))
   goto drop;

  VAR_11->m_next = VAR_9;
  VAR_11 = VAR_9;

  FUNC_3(VAR_12, VAR_9->m_data, VAR_13);
  VAR_12 += VAR_13;
  VAR_8 -= VAR_13;
  VAR_9->m_len = VAR_13;
  VAR_10->m_pkthdr.len += VAR_13;
 }

 return (VAR_10);

  drop:
 FUNC_4(VAR_10);
 return ((void*)0);
}
