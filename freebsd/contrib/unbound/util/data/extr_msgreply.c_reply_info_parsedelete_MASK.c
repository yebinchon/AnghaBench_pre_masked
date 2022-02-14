
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reply_info {size_t rrset_count; int * rrsets; } ;
struct alloc_cache {int dummy; } ;


 int FUNC_0 (struct reply_info*) ;
 int FUNC_1 (int ,struct alloc_cache*) ;

void
FUNC_2(struct reply_info* VAR_0, struct alloc_cache* VAR_1)
{
 size_t VAR_2;
 if(!VAR_0)
  return;

 for(VAR_2=0; VAR_2<VAR_0->rrset_count; VAR_2++) {
  FUNC_1(VAR_0->rrsets[VAR_2], VAR_1);
 }
 FUNC_0(VAR_0);
}
