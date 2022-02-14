
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct set_elem {scalar_t__ id; } ;
struct list_set {scalar_t__ size; int timeout; } ;
typedef scalar_t__ ip_set_id_t ;


 struct set_elem* FUNC_0 (struct list_set const*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct list_set const*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static bool
FUNC_3(const struct list_set *VAR_0, u32 VAR_1, ip_set_id_t VAR_2)
{
 const struct set_elem *VAR_3;

 if (VAR_1 < VAR_0->size) {
  VAR_3 = FUNC_0(VAR_0, VAR_1);
  return !!(VAR_3->id == VAR_2 &&
     !(FUNC_2(VAR_0->timeout) &&
       FUNC_1(VAR_0, VAR_1)));
 }

 return 0;
}
