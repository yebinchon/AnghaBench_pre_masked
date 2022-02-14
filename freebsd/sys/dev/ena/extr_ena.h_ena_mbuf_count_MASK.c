
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {struct mbuf* m_next; } ;



__attribute__((used)) static inline int FUNC_0(struct mbuf *VAR_0)
{
 int VAR_1 = 1;

 while ((VAR_0 = VAR_0->m_next) != ((void*)0))
  ++VAR_1;

 return VAR_1;
}
