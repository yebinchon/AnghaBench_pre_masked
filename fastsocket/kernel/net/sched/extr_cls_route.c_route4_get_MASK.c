
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcf_proto {scalar_t__ root; } ;
struct route4_head {struct route4_bucket** table; } ;
struct route4_filter {int handle; struct route4_filter* next; } ;
struct route4_bucket {struct route4_filter** ht; } ;


 unsigned int FUNC_0 (int) ;
 unsigned int FUNC_1 (int) ;

__attribute__((used)) static unsigned long FUNC_2(struct tcf_proto *VAR_0, u32 VAR_1)
{
 struct route4_head *VAR_2 = (struct route4_head*)VAR_0->root;
 struct route4_bucket *VAR_3;
 struct route4_filter *VAR_4;
 unsigned VAR_5, VAR_6;

 if (!VAR_2)
  return 0;

 VAR_5 = FUNC_1(VAR_1);
 if (VAR_5 > 256)
  return 0;

 VAR_6 = FUNC_0(VAR_1>>16);
 if (VAR_6 > 32)
  return 0;

 if ((VAR_3 = VAR_2->table[VAR_5]) != ((void*)0)) {
  for (VAR_4 = VAR_3->ht[VAR_6]; VAR_4; VAR_4 = VAR_4->next)
   if (VAR_4->handle == VAR_1)
    return (unsigned long)VAR_4;
 }
 return 0;
}
