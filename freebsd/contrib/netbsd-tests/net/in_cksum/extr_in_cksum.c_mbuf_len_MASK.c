
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int m_len; struct mbuf* m_next; } ;



__attribute__((used)) static int
FUNC_0(struct mbuf *VAR_0)
{
 return VAR_0 == ((void*)0) ? 0 : VAR_0->m_len + FUNC_0(VAR_0->m_next);
}
