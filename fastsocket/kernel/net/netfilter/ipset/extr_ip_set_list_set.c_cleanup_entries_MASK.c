
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct set_telem {scalar_t__ id; } ;
struct list_set {scalar_t__ size; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct list_set*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct list_set*,scalar_t__) ;
 struct set_telem* FUNC_2 (struct list_set*,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct list_set *VAR_1)
{
 struct set_telem *VAR_2;
 u32 VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->size; VAR_3++) {
  VAR_2 = FUNC_2(VAR_1, VAR_3);
  if (VAR_2->id != VAR_0 && FUNC_1(VAR_1, VAR_3))
   FUNC_0(VAR_1, VAR_3);
 }
}
