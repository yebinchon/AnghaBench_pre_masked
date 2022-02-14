
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int m_len; int * m_next; } ;
struct coalesce_info {int count; int nbytes; } ;



__attribute__((used)) static int
FUNC_0(struct mbuf *VAR_0, void *VAR_1)
{
 struct coalesce_info *VAR_2 = VAR_1;
 int *VAR_3 = &VAR_2->count;
 int *VAR_4 = &VAR_2->nbytes;

 if ((*VAR_4 == 0) || ((*VAR_4 + VAR_0->m_len <= 10500) &&
  (*VAR_3 < 7) && (VAR_0->m_next == ((void*)0)))) {
  *VAR_3 += 1;
  *VAR_4 += VAR_0->m_len;
  return (1);
 }
 return (0);
}
