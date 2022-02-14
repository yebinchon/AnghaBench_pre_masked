
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct set_elem {scalar_t__ id; } ;
struct list_set {scalar_t__ size; } ;
struct ip_set {struct list_set* data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 struct set_elem* FUNC_1 (struct list_set*,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct ip_set *VAR_1)
{
 struct list_set *VAR_2 = VAR_1->data;
 struct set_elem *VAR_3;
 u32 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->size; VAR_4++) {
  VAR_3 = FUNC_1(VAR_2, VAR_4);
  if (VAR_3->id != VAR_0) {
   FUNC_0(VAR_3->id);
   VAR_3->id = VAR_0;
  }
 }
}
