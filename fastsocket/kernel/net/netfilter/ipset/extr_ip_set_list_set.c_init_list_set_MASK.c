
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct set_elem {int id; } ;
struct list_set {size_t size; size_t dsize; unsigned long timeout; } ;
struct ip_set {struct list_set* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct list_set* FUNC_0 (int,int ) ;
 struct set_elem* FUNC_1 (struct list_set*,size_t) ;

__attribute__((used)) static bool
FUNC_2(struct ip_set *VAR_2, u32 VAR_3, size_t VAR_4,
       unsigned long VAR_5)
{
 struct list_set *VAR_6;
 struct set_elem *VAR_7;
 u32 VAR_8;

 VAR_6 = FUNC_0(sizeof(*VAR_6) + VAR_3 * VAR_4, VAR_0);
 if (!VAR_6)
  return 0;

 VAR_6->size = VAR_3;
 VAR_6->dsize = VAR_4;
 VAR_6->timeout = VAR_5;
 VAR_2->data = VAR_6;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  VAR_7 = FUNC_1(VAR_6, VAR_8);
  VAR_7->id = VAR_1;
 }

 return 1;
}
