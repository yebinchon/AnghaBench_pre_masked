
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct set_telem {int timeout; } ;
struct set_elem {scalar_t__ id; } ;
struct list_set {int size; int timeout; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 struct set_elem* FUNC_1 (struct list_set*,int) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct list_set *VAR_1, u32 VAR_2)
{
 struct set_elem *VAR_3 = FUNC_1(VAR_1, VAR_2), *VAR_4;

 FUNC_0(VAR_3->id);

 for (; VAR_2 < VAR_1->size - 1; VAR_2++) {
  VAR_4 = FUNC_1(VAR_1, VAR_2 + 1);
  VAR_3->id = VAR_4->id;
  if (FUNC_2(VAR_1->timeout))
   ((struct set_telem *)VAR_3)->timeout =
    ((struct set_telem *)VAR_4)->timeout;
  VAR_3 = VAR_4;
  if (VAR_3->id == VAR_0)
   break;
 }

 VAR_3->id = VAR_0;
 return 0;
}
