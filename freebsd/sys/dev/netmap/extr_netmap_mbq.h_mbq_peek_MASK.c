
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct mbq {struct mbuf* head; } ;



__attribute__((used)) static inline struct mbuf *
FUNC_0(struct mbq *VAR_0)
{
 return VAR_0->head;
}
