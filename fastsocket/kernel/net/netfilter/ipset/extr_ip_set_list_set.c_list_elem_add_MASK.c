
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct set_elem {scalar_t__ id; } ;
struct list_set {scalar_t__ size; } ;
typedef int ip_set_id_t ;


 scalar_t__ VAR_0 ;
 struct set_elem* FUNC_0 (struct list_set*,scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_2(struct list_set *VAR_1, u32 VAR_2, ip_set_id_t VAR_3)
{
 struct set_elem *VAR_4;

 for (; VAR_2 < VAR_1->size; VAR_2++) {
  VAR_4 = FUNC_0(VAR_1, VAR_2);
  FUNC_1(VAR_4->id, VAR_3);
  if (VAR_4->id == VAR_0)
   break;
 }
}
