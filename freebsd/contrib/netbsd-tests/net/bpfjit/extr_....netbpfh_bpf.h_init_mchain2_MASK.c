
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mbuf {char* m_data; size_t m_len; struct mbuf* m_next; } ;


 int FUNC_0 (struct mbuf*,int ,int) ;

__attribute__((used)) static inline const uint8_t *
FUNC_1(struct mbuf *VAR_0, struct mbuf *VAR_1,
    unsigned char VAR_2[], size_t VAR_3, size_t VAR_4)
{

 (void)FUNC_0(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->m_data = (char *)VAR_2;
 VAR_0->m_next = (VAR_4 < VAR_3) ? VAR_1 : ((void*)0);
 VAR_0->m_len = (VAR_4 < VAR_3) ? VAR_4 : VAR_3;

 if (VAR_4 < VAR_3) {
  (void)FUNC_0(VAR_1, 0, sizeof(*VAR_1));
  VAR_1->m_next = ((void*)0);
  VAR_1->m_data = (char *)&VAR_2[VAR_4];
  VAR_1->m_len = VAR_3 - VAR_4;
 }

 return (const uint8_t*)VAR_0;
}
