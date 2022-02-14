
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmpbuf {void (* release ) (void const*) ;struct tmpbuf* next; void* buf; } ;
struct nfsd4_compoundargs {struct tmpbuf* to_free; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tmpbuf* FUNC_0 (int,int ) ;

__attribute__((used)) static int
FUNC_1(struct nfsd4_compoundargs *VAR_2,
  void (*VAR_3)(const void *), void *VAR_4)
{
 struct tmpbuf *VAR_5;

 VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;
 VAR_5->buf = VAR_4;
 VAR_5->release = VAR_3;
 VAR_5->next = VAR_2->to_free;
 VAR_2->to_free = VAR_5;
 return 0;
}
