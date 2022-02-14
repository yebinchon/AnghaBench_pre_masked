
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct set_telem {scalar_t__ id; scalar_t__ timeout; } ;
struct list_set {scalar_t__ size; } ;
typedef unsigned long ip_set_id_t ;


 scalar_t__ VAR_0 ;
 struct set_telem* FUNC_0 (struct list_set*,scalar_t__) ;
 int FUNC_1 (scalar_t__,unsigned long) ;

__attribute__((used)) static void
FUNC_2(struct list_set *VAR_1, u32 VAR_2, ip_set_id_t VAR_3,
        unsigned long VAR_4)
{
 struct set_telem *VAR_5;

 for (; VAR_2 < VAR_1->size; VAR_2++) {
  VAR_5 = FUNC_0(VAR_1, VAR_2);
  FUNC_1(VAR_5->id, VAR_3);
  FUNC_1(VAR_5->timeout, VAR_4);
  if (VAR_5->id == VAR_0)
   break;
 }
}
