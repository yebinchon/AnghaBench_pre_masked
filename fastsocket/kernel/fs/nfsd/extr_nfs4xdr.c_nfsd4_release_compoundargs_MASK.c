
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmpbuf {int buf; int (* release ) (int ) ;struct tmpbuf* next; } ;
struct nfsd4_compoundargs {scalar_t__ ops; scalar_t__ iops; struct tmpbuf* to_free; struct tmpbuf* tmpp; } ;


 int FUNC_0 (struct tmpbuf*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct nfsd4_compoundargs *VAR_0)
{
 if (VAR_0->ops != VAR_0->iops) {
  FUNC_0(VAR_0->ops);
  VAR_0->ops = VAR_0->iops;
 }
 FUNC_0(VAR_0->tmpp);
 VAR_0->tmpp = ((void*)0);
 while (VAR_0->to_free) {
  struct tmpbuf *VAR_1 = VAR_0->to_free;
  VAR_0->to_free = VAR_1->next;
  VAR_1->release(VAR_1->buf);
  FUNC_0(VAR_1);
 }
}
