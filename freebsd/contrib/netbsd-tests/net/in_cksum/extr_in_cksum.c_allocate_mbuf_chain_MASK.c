
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {char* m_data; int m_len; struct mbuf* m_next; } ;
struct m_hdr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 struct mbuf* FUNC_2 (int) ;
 int FUNC_3 () ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static struct mbuf *
FUNC_4(char **VAR_2)
{
 int VAR_3, VAR_4;
 struct mbuf *VAR_5;

 if (*VAR_2 == ((void*)0))
  return ((void*)0);

 VAR_3 = FUNC_0(*VAR_2);
 VAR_4 = VAR_1 ? FUNC_3() % 64 : 0;

 VAR_5 = FUNC_2(sizeof(struct m_hdr) + VAR_3 + VAR_4);
 if (VAR_5 == ((void*)0))
  FUNC_1(VAR_0, "malloc failed");

 VAR_5->m_data = (char *)VAR_5 + sizeof(struct m_hdr) + VAR_4;
 VAR_5->m_len = VAR_3;

 VAR_5->m_next = FUNC_4(VAR_2 + 1);

 return VAR_5;
}
